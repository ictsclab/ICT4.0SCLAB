// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT license.
using System;
using System.Threading;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

#if ENABLE_WINMD_SUPPORT
using System.Runtime.InteropServices;
using Windows.Perception.Spatial;
// ASA_UNITY_USE_OPENXR gets defined by AzureSpatialAnchors.SDK.Core's package asmdef file (assembly definition file) when
// com.microsoft.mixedreality.openxr package is included in the Unity project. 
#if (UNITY_WSA || WINDOWS_UWP) && ASA_UNITY_USE_OPENXR
using Microsoft.MixedReality.OpenXR;
#else
using UnityEngine.XR.WindowsMR;
#endif
#endif

#if UNITY_IOS || UNITY_ANDROID
using System.Collections.Generic;
using UnityEngine.XR.ARSubsystems;
#endif

#if UNITY_IOS
using Microsoft.Azure.SpatialAnchors.Unity.IOS;
#endif

#if UNITY_ANDROID
using Microsoft.Azure.SpatialAnchors.Unity.Android;
#endif

using Microsoft.Azure.SpatialAnchors.Unity.ARFoundation;

namespace Microsoft.Azure.SpatialAnchors.Unity
{
    /// <summary>
    /// Defines the various authentication methods.
    /// </summary>
    public enum AuthenticationMode
    {
        /// <summary>
        /// Authentication will leverage Account ID and Account Key.
        /// </summary>
        ApiKey,

        /// <summary>
        /// Authentication will leverage Azure Active Directory through
        /// Client ID and Tenant ID.
        /// </summary>
        AAD
    }

    /// <summary>
    /// A core behavior used to manage Azure Spatial Anchor sessions and queries in a Unity scene.
    /// </summary>
    public class SpatialAnchorManager : MonoBehaviour
    {
        #region Member Variables
        protected bool isSessionStarted = false;
        protected CloudSpatialAnchorSession session = null;
        protected SessionStatus sessionStatus = null;

        // Variables for interacting with ARAnchors
        private ARSessionOrigin arSessionOrigin = null;
        private ARAnchorManager arAnchorManager = null;
        internal static AnchorLookup anchorLookup = new AnchorLookup();

        // Android-specific variables
#if UNITY_ANDROID
        private static bool javaInitialized = false; // We should only run the Java initialization once
#endif // UNITY_ANDROID

        // AR Foundation mobile platform variables
#if UNITY_ANDROID || UNITY_IOS
        protected bool ARSessionInitialized = false;
        protected long lastFrameProcessedTimeStamp;
        protected ARCameraManager arCameraManager = null;
        protected ARSession arSession = null;
        protected Camera mainCamera;
        protected List<AnchorLocatedEventArgs> pendingMobileEventArgs = new List<AnchorLocatedEventArgs>();
#endif // UNITY_ANDROID || UNITY_IOS
        #endregion // Member Variables

        #region Unity Inspector Variables
        [Header("Authentication")]
        [SerializeField]
        [Tooltip("The method to use for authentication.")]
        protected AuthenticationMode authenticationMode = AuthenticationMode.ApiKey;

        [Header("Credentials")]
        [SerializeField]
        [Tooltip("The Account ID to use when authenticating using API Key. This is provided by the Spatial Anchors service portal.")]
        protected string spatialAnchorsAccountId = "";

        [SerializeField]
        [Tooltip("The Account Key to use when authenticating using API Key. This is provided by the Spatial Anchors service portal.")]
        protected string spatialAnchorsAccountKey = "";

        [SerializeField]
        [Tooltip("The Account Domain to use when connecting to the Azure Spatial Anchors services. This is provided by the Spatial Anchors service portal.")]
        protected string spatialAnchorsAccountDomain = "";

        [Header("Credentials")]
        [SerializeField]
        [Tooltip("The Client ID to use when authenticating using Azure Active Directory.")]
        protected string clientId = "";

        [SerializeField]
        [Tooltip("The Tenant ID to use when authenticating using Azure Active Directory.")]
        protected string tenantId = "";

        [Header("Logging")]
        [SerializeField]
        [Tooltip("The log level for messages from the Spatial Anchors service.")]
        protected SessionLogLevel logLevel = SessionLogLevel.All;
        #endregion // Unity Inspector Variables

        #region Internal Methods
        /// <summary>
        /// Throws an exception if there is not a currently active session.
        /// </summary>
        private void EnsureSessionStarted()
        {
            if (!isSessionStarted)
            {
                throw new InvalidOperationException("This operation cannot be completed without an active session.");
            }
        }

#if UNITY_ANDROID || UNITY_IOS
        /// <summary>
        /// Sends the latest AR Foundation frame to Azure Spatial Anchors.
        /// </summary>
        private void ProcessLatestFrame()
        {
            if (!isSessionStarted)
            {
                return;
            }

            var cameraParams = new XRCameraParams
            {
                zNear = mainCamera.nearClipPlane,
                zFar = mainCamera.farClipPlane,
                screenWidth = Screen.width,
                screenHeight = Screen.height,
                screenOrientation = Screen.orientation
            };

            XRCameraFrame xRCameraFrame;
            if (arCameraManager.subsystem.TryGetLatestFrame(cameraParams, out xRCameraFrame))
            {
                long latestFrameTimeStamp = xRCameraFrame.timestampNs;

                bool newFrameToProcess = latestFrameTimeStamp > lastFrameProcessedTimeStamp;

                if (newFrameToProcess)
                {
                    session.ProcessFrame(xRCameraFrame.nativePtr.GetPlatformPointer());
                    lastFrameProcessedTimeStamp = latestFrameTimeStamp;
                }
            }
        }

        /// <summary>
        /// On mobile platforms, AR Foundation will discover ARAnchors *after* ASA has provided the
        /// CloudSpatialAnchor to us using the AnchorLocated event. When AR Foundation finds the
        /// ARAnchor (usually within a frame or two) we will call the anchor located event.
        /// </summary>
        private void ProcessPendingMobileEventArgs()
        {
            if (pendingMobileEventArgs.Count > 0)
            {
                List<AnchorLocatedEventArgs> readyList = new List<AnchorLocatedEventArgs>();
                lock (pendingMobileEventArgs)
                {
                    foreach (AnchorLocatedEventArgs args in pendingMobileEventArgs)
                    {
                        if (anchorLookup.GetAnchorFromLookupUsingIdentifier(args.Anchor.Identifier))
                        {
                            readyList.Add(args);
                        }
                    }

                    foreach (var ready in readyList)
                    {
                        pendingMobileEventArgs.Remove(ready);
                    }
                }

                if (readyList.Count > 0)
                {
                    foreach (var args in readyList)
                    {
                        AnchorLocated?.Invoke(this, args);
                    }
                }
            }
        }
#endif // UNITY_ANDROID || UNITY_IOS
        #endregion // Internal Methods

        #region Overridables
        /// <summary>
        /// Ensures that the manager has a valid configuration. This method can be customized by
        /// inheritors.
        /// </summary>
        /// <param name="disable">
        /// If true, the manager will be disabled if configuration is invalid.
        /// </param>
        /// <param name="exception">
        /// If true, an exception will be thrown if configuration is invalid.
        /// </param>
        protected virtual async Task<bool> EnsureValidConfiguration(bool disable, bool exception)
        {
            if (!await IsValidateConfiguration())
            {
                // Define message
                string msg = $"{nameof(SpatialAnchorManager)} is improperly configured.";

                // Disable or except?
                if (disable)
                {
                    Debug.LogError(msg + " It has been disabled.");
                    this.enabled = false;
                }
                else if (exception)
                {
                    throw new InvalidOperationException(msg);
                }

                // Not valid
                return false;
            }
            else
            {
                // Valid!
                return true;
            }
        }

        /// <summary>
        /// Obtains an Azure Active Directory token for the application. This
        /// method can be customized by inheritors.
        /// </summary>
        /// <returns>
        /// A <see cref="Task"/> that yields the token.
        /// </returns>
#pragma warning disable CS1998 // Conditional compile statements are removing await
        protected virtual async Task<string> GetAADTokenAsync()
#pragma warning restore CS1998
        {
            // TODO: Comment out this line when supporting AAD
            throw new NotSupportedException("AAD requires extra manual steps. Please see Packages/Azure Spatial Anchors SDK for Windows/README.md for more information.");

            // TODO: Uncomment the lines below when supporting AAD

            /*
#if UNITY_WSA && !UNITY_EDITOR
            var authority = $"https://login.microsoftonline.com/{TenantId}";

            AuthenticationContext authenticationContext = new AuthenticationContext(authority);
            AuthenticationResult authenticationResult = await authenticationContext.AcquireTokenAsync("https://sts.mixedreality.azure.com", ClientId, new Uri("urn:ietf:wg:oauth:2.0:oob"), new PlatformParameters(PromptBehavior.Auto, useCorporateNetwork: false));

            return authenticationResult.AccessToken;

#else

            throw new NotSupportedException("Obtaining an AAD token is not supported on this platform.");

#endif
            */
        }

        /// <summary>
        /// Called when the manager initializes in order to configure the service.
        /// </summary>
        protected virtual void LoadConfiguration()
        {
            // Attempt to load configuration from config resource if present.
            SpatialAnchorConfig config = Resources.Load<SpatialAnchorConfig>("SpatialAnchorConfig");
            if (config != null)
            {
                // Apply auth mode
                authenticationMode = config.AuthenticationMode;

                // Apply account values
                if (string.IsNullOrWhiteSpace(spatialAnchorsAccountId))
                {
                    spatialAnchorsAccountId = config.SpatialAnchorsAccountId;
                }
                if (string.IsNullOrWhiteSpace(spatialAnchorsAccountKey))
                {
                    spatialAnchorsAccountKey = config.SpatialAnchorsAccountKey;
                }
                if (string.IsNullOrWhiteSpace(spatialAnchorsAccountDomain))
                {
                    spatialAnchorsAccountDomain = config.SpatialAnchorsAccountDomain;
                }
                if (string.IsNullOrWhiteSpace(clientId))
                {
                    clientId = config.ClientId;
                }
                if (string.IsNullOrWhiteSpace(tenantId))
                {
                    tenantId = config.TenantId;
                }
            }
        }

        /// <summary>
        /// Returns a value that indicates if the manager is configured and
        /// able to run.
        /// </summary>
        /// <returns>
        /// <c>true</c> if the manager is configured and able to run.; otherwise <c>false</c>.
        /// </returns>
#pragma warning disable CS1998 // Conditional compile statements are removing await
        protected async virtual Task<bool> IsValidateConfiguration()
#pragma warning restore CS1998
        {
#if !UNITY_EDITOR && (UNITY_WSA || WINDOWS_UWP)
            // Ensure that the device is running a supported build with the spatialperception capability declared.
            bool accessGranted = false;
            try
            {
                Windows.Perception.Spatial.SpatialPerceptionAccessStatus accessStatus = await Windows.Perception.Spatial.SpatialAnchorExporter.RequestAccessAsync();
                accessGranted = (accessStatus == Windows.Perception.Spatial.SpatialPerceptionAccessStatus.Allowed);
            }
            catch { }

            if (!accessGranted)
            {
                Debug.LogError("SpatialPerception capability is not enabled");
                return false;
            }
#endif

            // An AccountDomain must be specified for the configuration to be valid.
            if (string.IsNullOrWhiteSpace(spatialAnchorsAccountDomain))
            {
                return false;
            }

            // Check based on auth mode
            switch (authenticationMode)
            {
                case AuthenticationMode.ApiKey:
                    if (string.IsNullOrWhiteSpace(spatialAnchorsAccountId) || string.IsNullOrWhiteSpace(spatialAnchorsAccountKey))
                    {
                        return false;
                    }
                    break;

                case AuthenticationMode.AAD:
                    break;

                default:
                    throw new InvalidOperationException("Unknown auth mode");
            }

            // Android and iOS applications must have an enabled ARCameraManager and an enabled
            // ARSession in the scene. These objects are not required for HoloLens applications.
#if UNITY_ANDROID || UNITY_IOS
            if (mainCamera == null)
            {
                Debug.LogError("Need a camera tagged as MainCamera in the scene");
                return false;
            }

            // Wait for ARCameraManager to be enabled. This can take a few seconds on some platforms.
            int retries = 0;
            while (retries++ < 60)
            {
                if (arCameraManager != null && arCameraManager.enabled)
                {
                    break;
                }
                await Task.Delay(100);
            }

            if (arCameraManager == null || !arCameraManager.enabled)
            {
                Debug.LogError("Need an enabled ARCameraManager in the scene");
                return false;
            }

            if (arSession == null || !arSession.enabled)
            {
                Debug.LogError("Need an enabled ARSession in the scene");
                return false;
            }
#endif
            // All applications must have an enabled AR Foundation ARAnchorManager and ARSessionOrigin
            // in the scene. The ARSessionOrigin object should be added automatically when the
            // ARAnchorManager is added to the scene through the Unity inspector.
            if (arSessionOrigin == null || !arSessionOrigin.enabled)
            {
                Debug.LogError("Need an enabled ARSessionOrigin in the scene");
                return false;
            }

            if (arAnchorManager == null || !arAnchorManager.enabled)
            {
                Debug.LogError("Need an enabled ARAnchorManager in the scene");
                return false;
            }

            // ARAnchors are managed internally and should not be instantiated with custom behaviors.
            if (arAnchorManager.anchorPrefab != null)
            {
                Debug.LogError("The anchor prefab for ARAnchorManager must be set to null.");
                return false;
            }

            // All checks passed
            return true;
        }

#if ENABLE_WINMD_SUPPORT
        /// Coordinate system conversion functions
        /// Unity uses left-handed coordinate system with Y pointing up
        /// WMR uses right-handed coordinate system with Y pointing up

        /// <summary>
        /// Converts System.Numerics Quaternion to a UnityEngine Quaternion
        /// </summary>
        public UnityEngine.Quaternion ToUnityQuaternion(System.Numerics.Quaternion source)
        {
            return new UnityEngine.Quaternion(-source.X, -source.Y, source.Z, source.W);
        }

        /// <summary>
        /// Converts System.Numerics Vector3 to a UnityEngine Vector3.
        /// </summary>
        /// <param name="vector">The vector to convert.</param>
        /// <returns>The converted vector.</returns>
        public UnityEngine.Vector3 ToUnityVector3(System.Numerics.Vector3 vector)
        {
            return new UnityEngine.Vector3(vector.X, vector.Y, -vector.Z);
        }
#endif

        /// <summary>
        /// Called when the <see cref="Session"/> <see cref="CloudSpatialAnchorSession.AnchorLocated">AnchorLocated</see> event is fired.
        /// </summary>
        /// <param name="sender">
        /// The <see cref="Session"/>.
        /// </param>
        /// <param name="args">
        /// The event data.
        /// </param>
        protected virtual void OnAnchorLocated(object sender, AnchorLocatedEventArgs args)
        {
            if (AnchorLocated == null)
            {
                // Only consider firing AnchorLocated if something is subscribed to the event
                return;
            }

            // If the anchor was successfully located or if it was already tracked but we've lost
            // the reference to the ARAnchor then we should provide a new ARAnchor
            bool updateAnchor = (args.Status == LocateAnchorStatus.Located) ||
                                ((args.Status == LocateAnchorStatus.AlreadyTracked) && !anchorLookup.GetAnchorFromLookupUsingIdentifier(args.Identifier));
            if (updateAnchor)
            {
                // Remove existing references to the same anchor (from previous locations)
                anchorLookup.RemoveAnchorFromLookup(args.Identifier);

#if WINDOWS_UWP || UNITY_WSA

                // On HoloLens, ARAnchors are not automatically surfaced through the ARAnchorManager
                // anchorsChanged event. This means that we need to grab the pose from the SpatialAnchor
                // and manually create an ARAnchor at the same pose.

                UnityEngine.Quaternion anchorToSessionRotation = Quaternion.identity;
                UnityEngine.Vector3 anchorToSessionTranslation = UnityEngine.Vector3.zero;

#if ENABLE_WINMD_SUPPORT

                SpatialAnchor anchor = Marshal.GetObjectForIUnknown(args.Anchor.LocalAnchor) as SpatialAnchor;

#if ASA_UNITY_USE_OPENXR
                SpatialCoordinateSystem sessionCoordinateSystem = PerceptionInterop.GetSceneCoordinateSystem(Pose.identity) as SpatialCoordinateSystem;
#else
                SpatialCoordinateSystem sessionCoordinateSystem = Marshal.GetObjectForIUnknown(WindowsMREnvironment.OriginSpatialCoordinateSystem) as SpatialCoordinateSystem;
#endif

                SpatialCoordinateSystem anchorCoordinateSystem = anchor.CoordinateSystem;
                System.Numerics.Matrix4x4? anchorToSessionPose = anchorCoordinateSystem.TryGetTransformTo(sessionCoordinateSystem);
                if (anchorToSessionPose.HasValue)
                {
                    System.Numerics.Quaternion anchorToSessionRotationNative = System.Numerics.Quaternion.CreateFromRotationMatrix(anchorToSessionPose.Value);
                    anchorToSessionRotation = ToUnityQuaternion(anchorToSessionRotationNative);
                    anchorToSessionTranslation = ToUnityVector3(anchorToSessionPose.Value.Translation);
                }
                else
                {
                    throw new InvalidOperationException("Couldn't compute a native anchor pose");
                }

#elif !UNITY_EDITOR // ENABLE_WINMD_SUPPORT

                Debug.LogError("WINMD support must be enabled outside the editor");
                throw new NotSupportedException("WINMD support is not enabled");

#endif // ENABLE_WINMD_SUPPORT

                // Take the pose that was computed from the CloudSpatialAnchor.LocalAnchor
                UnityDispatcher.InvokeOnAppThread(async () =>
                {
                    // Account for potential ARSessionOrigin shifts P(AW) = P(SW) * P(AS)
                    UnityEngine.Quaternion sessionToWorldRotation = arSessionOrigin.transform.rotation;
                    UnityEngine.Vector3 sessionToWorldTranslation = arSessionOrigin.transform.position;
                    UnityEngine.Vector3 anchorToWorldTranslation = sessionToWorldRotation * anchorToSessionTranslation + sessionToWorldTranslation;
                    UnityEngine.Quaternion anchorToWorldRotation = sessionToWorldRotation * anchorToSessionRotation;

                    // Create a dummy game object, will be destroyed when ARAnchor is destroyed
                    GameObject dummyGameObject = new GameObject();
                    dummyGameObject.transform.position = anchorToWorldTranslation;
                    dummyGameObject.transform.rotation = anchorToWorldRotation;

                    // On the main thread create a new ARAnchor at the pose
                    ARAnchor arAnchor = dummyGameObject.AddComponent<ARAnchor>();

                    // Make sure that the GameObject is destroyed when the ARAnchor is destroyed
                    arAnchor.destroyOnRemoval = true;

                    // Wait up to one second until AR Foundation creates the ARAnchor
                    IntPtr platformPointer = await arAnchor.GetPointer();
                    string platformKey = platformPointer.GetPlatformKey();

                    // Replace the native anchor pointer here so that we don't leak the ARAnchor
                    // We cannot use the original native anchor since we won't get notified when the anchor is destroyed
                    args.Anchor.LocalAnchor = platformPointer;

                    // Store the references to the new ARAnchor
                    anchorLookup.AddAnchorToLookup(args.Identifier, platformKey, arAnchor);

                    // Fire the AnchorLocated event immediately because the ARAnchor is already
                    // added to the lookup
                    AnchorLocated?.Invoke(this, args);
                });

#elif UNITY_ANDROID || UNITY_IOS

                // On mobile platforms, ARAnchors are automatically surfaced via the ARAnchorManager
                // anchorsChanged event, so we do not need to manually create a new ARAnchor. Instead,
                // we wait for the anchorsChanged event to occur and then we fire the AnchorLocated
                // event.
                anchorLookup.AddIdentifierToPlatformKeyMapping(args.Identifier, args.Anchor.LocalAnchor.GetPlatformKey());
                lock (pendingMobileEventArgs)
                {
                    pendingMobileEventArgs.Add(args);
                }

#endif // WINDOWS_UWP || UNITY_WSA

            }
            else
            {
                // There is no new anchor to create, pass the event up to the app
                AnchorLocated?.Invoke(this, args);
            }
        }

        /// <summary>
        /// Called when the <see cref="Session"/> <see cref="CloudSpatialAnchorSession.Error">Error</see> event is fired.
        /// </summary>
        /// <param name="sender">
        /// The <see cref="Session"/>.
        /// </param>
        /// <param name="args">
        /// The event data.
        /// </param>
        protected virtual void OnError(object sender, SessionErrorEventArgs args)
        {
            Error?.Invoke(this, args);
        }

        /// <summary>
        /// Called when the <see cref="Session"/> <see cref="CloudSpatialAnchorSession.LocateAnchorsCompleted">LocateAnchorsCompleted</see> event is fired.
        /// </summary>
        /// <param name="sender">
        /// The <see cref="Session"/>.
        /// </param>
        /// <param name="args">
        /// The event data.
        /// </param>
        protected virtual void OnLocateAnchorsCompleted(object sender, LocateAnchorsCompletedEventArgs args)
        {
            LocateAnchorsCompleted?.Invoke(this, args);
        }

        /// <summary>
        /// Called when the <see cref="Session"/> <see cref="CloudSpatialAnchorSession.LogDebug">LogDebug</see> event is fired.
        /// </summary>
        /// <param name="sender">
        /// The <see cref="Session"/>.
        /// </param>
        /// <param name="args">
        /// The event data.
        /// </param>
        protected virtual void OnLogDebug(object sender, OnLogDebugEventArgs args)
        {
            LogDebug?.Invoke(this, args);
        }

        /// <summary>
        /// Called when the value of the <see cref="Session"/> property has changed.
        /// </summary>
        /// <remarks>
        /// When the manager is first created, the value of <see cref="Session"/>
        /// will be <see langword = "null" />. Various operations of the manager
        /// can cause sessions to be created or replaced. This event will fire
        /// whenever the value of the <see cref="Session"/> property has changed.
        /// </remarks>
        protected virtual void OnSessionChanged()
        {
            SessionChanged?.Invoke(this, EventArgs.Empty);
        }

        /// <summary>
        /// Called whenever the <see cref="Session"/> has been created.
        /// </summary>
        /// <remarks>
        /// The <see cref="Session"/> can be created by calling <see cref="CreateSessionAsync"/>.
        /// </remarks>
        protected virtual void OnSessionCreated()
        {
            SessionCreated?.Invoke(this, EventArgs.Empty);
        }

        /// <summary>
        /// Called whenever the <see cref="Session"/> has been destroyed.
        /// </summary>
        /// <remarks>
        /// The <see cref="Session"/> can be destroyed by calling <see cref="DestroySession"/>.
        /// </remarks>
        protected virtual void OnSessionDestroyed()
        {
            SessionDestroyed?.Invoke(this, EventArgs.Empty);
        }

        /// <summary>
        /// Called whenever the <see cref="Session"/> has been started.
        /// </summary>
        /// <remarks>
        /// <remarks>
        /// In order for this override and properties like <see cref="IsSessionStarted"/>
        /// to be tracked correctly, use the <see cref="StartSessionAsync"/> and
        /// <see cref="StopSession"/> methods rather than calling methods
        /// directly on the <see cref="Session"/> instance.
        /// </remarks>
        protected virtual void OnSessionStarted()
        {
            SessionStarted?.Invoke(this, EventArgs.Empty);
        }

        /// <summary>
        /// Called whenever the <see cref="Session"/> has been stopped.
        /// </summary>
        /// <remarks>
        /// <remarks>
        /// In order for this override and properties like <see cref="IsSessionStarted"/>
        /// to be tracked correctly, use the <see cref="StartSessionAsync"/> and
        /// <see cref="StopSession"/> methods rather than calling methods
        /// directly on the <see cref="Session"/> instance.
        /// </remarks>
        protected virtual void OnSessionStopped()
        {
            SessionStopped?.Invoke(this, EventArgs.Empty);
        }

        /// <summary>
        /// Called when the <see cref="Session"/> <see cref="CloudSpatialAnchorSession.SessionUpdated">SessionUpdated</see> event is fired.
        /// </summary>
        /// <param name="sender">
        /// The <see cref="Session"/>.
        /// </param>
        /// <param name="args">
        /// The event data.
        /// </param>
        protected virtual void OnSessionUpdated(object sender, SessionUpdatedEventArgs args)
        {
            // Update the cached session status
            sessionStatus = args.Status;

            // Raise the event
            SessionUpdated?.Invoke(this, args);
        }
        #endregion // Overridables

        #region Event Handlers
        private async void Session_TokenRequired(object sender, TokenRequiredEventArgs args)
        {
            // Get the deferral
            CloudSpatialAnchorSessionDeferral deferral = args.GetDeferral();

            // Call overridable method to get the token and store it
            args.AuthenticationToken = await GetAADTokenAsync();

            // Complete the deferral
            deferral.Complete();
        }

#if UNITY_ANDROID || UNITY_IOS
        /// <summary>
        /// Called when AR Foundation changes states.
        /// We wait until the AR Foundation session is tracking to complete initialization
        /// </summary>
        /// <param name="obj">state change arguments</param>
        private void ARSession_stateChanged(ARSessionStateChangedEventArgs obj)
        {
            Debug.Log($"ARSession state changed to {obj.state}");
            if (obj.state == ARSessionState.SessionTracking && !ARSessionInitialized)
            {
                CompleteARFoundationInitialization();
            }
        }
#endif

        /// <summary>
        /// Keeps track of when platform anchors (surfaced by AR Foundation as ARAnchors) are
        /// added or removed by AR Foundation. This is critical for mapping CloudSpatialAnchors
        /// to Unity AR Foundation ARAnchors. Note: When you destroy an ARAnchor, AR Foundation may
        /// not fire an anchorsChanged event for it, so some of these anchors are already cleaned-up
        /// everywhere except in our anchor lookup.
        /// </summary>
        /// <param name="obj">Event args with information about what has changed.</param>
        private void ARAnchorManager_anchorsChanged(ARAnchorsChangedEventArgs obj)
        {
#if UNITY_ANDROID || UNITY_IOS
            foreach (ARAnchor addedAnchor in obj.added)
            {
                // A new ARAnchor has been added, let's save the reference in arAnchorLookup
                string platformKey = addedAnchor.nativePtr.GetPlatformPointer().GetPlatformKey();
                anchorLookup.AddPlatformKeyToAnchorMapping(platformKey, addedAnchor);
            }
#endif

            foreach (ARAnchor removedAnchor in obj.removed)
            {
                // The ARAnchor has been removed, go ahead and remove our references to it
                string platformKey = removedAnchor.nativePtr.GetPlatformPointer().GetPlatformKey();
                anchorLookup.RemoveAnchorFromLookup(removedAnchor);
            }
        }

        /// <summary>
        /// Called by AR Foundation to indicate that there is a new frame to process.
        /// </summary>
        /// <param name="obj">Information about the frame. Not used.</param>
        private void ArCameraManager_frameReceived(ARCameraFrameEventArgs obj)
        {
#if UNITY_ANDROID || UNITY_IOS
            ProcessLatestFrame();
#endif
        }
#endregion // Event Handlers

#region Unity Overrides
        /// <summary>
        /// Awake is called when the script instance is being loaded.
        /// </summary>
        protected virtual void Awake()
        {
            LoadConfiguration();
        }

        /// <summary>
        /// OnDestroy is called when the behavior is destroyed. Can occur when
        /// the scene or application ends.
        /// </summary>
        protected virtual void OnDestroy()
        {
            DestroySession();
        }

        /// <summary>
        /// Start is called before the first frame update.
        /// </summary>
        protected async virtual void Start()
        {
#if UNITY_ANDROID || UNITY_IOS
            mainCamera = Camera.main;
            arCameraManager = FindObjectOfType<ARCameraManager>();
            arSession = FindObjectOfType<ARSession>();
#endif

            arSessionOrigin = FindObjectOfType<ARSessionOrigin>();
            arAnchorManager = FindObjectOfType<ARAnchorManager>();

            // Only allow the manager to start if it is properly configured.
            await EnsureValidConfiguration(disable: true, exception: false);

            arAnchorManager.anchorsChanged += ARAnchorManager_anchorsChanged;
        }

#if UNITY_ANDROID || UNITY_IOS
        /// <summary>
        /// Update is called once per frame.
        /// </summary>
        protected virtual void Update()
        {
            ProcessPendingMobileEventArgs();
        }
#endif
#endregion // Unity Overrides

#region Public Methods
        /// <summary>
        /// Creates a new session if one does not exist.
        /// </summary>
        /// <returns>
        /// A <see cref="Task"/> that represents the operation.
        /// </returns>
#pragma warning disable CS1998 // Conditional compile statements are removing await
        public async Task CreateSessionAsync()
#pragma warning restore CS1998
        {
            // Warn if already created
            if (session != null)
            {
                Debug.LogWarning($"{nameof(CreateSessionAsync)} called but session is already created.");
                return;
            }

            // Only allow a session to be created the manager is properly configured.
            await EnsureValidConfiguration(disable: false, exception: true);

#if UNITY_ANDROID // Android Only
            // We should only run the Java initialization once
            if (!javaInitialized)
            {
                // Create a TaskCompletionSource that we can use to know when
                // the Java plugin has completed initialization on the Android
                // thread.
                TaskCompletionSource<bool> pluginInit = new TaskCompletionSource<bool>();

                // Make sure ARCore is running. This code must be executed
                // on a Java thread provided by Android.
                AndroidHelper.Instance.DispatchUiThread(unityActivity =>
                {
                    // Create the plugin
                    using (AndroidJavaClass cloudServices = new AndroidJavaClass("com.microsoft.CloudServices"))
                    {
                        // Initialize the plugin
                        cloudServices.CallStatic("initialize", unityActivity);

                        // Update static variable to say that the plugin has been initialized
                        javaInitialized = true;

                        // Set the task completion source so the CreateSession method can
                        // continue back on the Unity thread.
                        pluginInit.SetResult(true);
                    }
                });

                // Wait for the plugin to complete initialization on the
                // Java thread.
                await pluginInit.Task;
            }
#endif

            // Create the session instance
            session = new CloudSpatialAnchorSession();

            // Configure logging
            session.LogLevel = logLevel;

            // Configure the account domain.
            session.Configuration.AccountDomain = spatialAnchorsAccountDomain.Trim();

            // Configure authentication
            if (authenticationMode == AuthenticationMode.ApiKey)
            {
                // API Key mode just applies credentials directly
                session.Configuration.AccountId = spatialAnchorsAccountId.Trim();
                session.Configuration.AccountKey = spatialAnchorsAccountKey.Trim();
            }
            else
            {
                // AAD mode requires an auth token workflow
                session.TokenRequired += Session_TokenRequired;
            }

            // Subscribe to session events
            session.OnLogDebug += OnLogDebug;
            session.SessionUpdated += OnSessionUpdated;
            session.AnchorLocated += OnAnchorLocated;
            session.LocateAnchorsCompleted += OnLocateAnchorsCompleted;
            session.Error += OnError;

#if UNITY_ANDROID || UNITY_IOS
            ARSession.stateChanged += ARSession_stateChanged;

            // Wait for a valid AR Session in case we are starting before AR Foundation is ready.
            if (ARSession.state == ARSessionState.SessionTracking)
            {
                CompleteARFoundationInitialization();
            }
            else
            {
                Debug.Log($"ARSession not yet available ({ARSession.state}, will complete initialization when session is running");
            }
#elif UNITY_WSA || WINDOWS_UWP
            // No need to set a native session pointer for HoloLens.  We can just notify that the Azure Spatial Anchors session has been created
            OnSessionCreated();
#else
            throw new NotSupportedException("The platform is not supported.");
#endif
        }

#if UNITY_ANDROID || UNITY_IOS
        /// <summary>
        /// Called the first time AR Foundation indicates the session is tracking and
        /// thus can be relied upon to be fully initialized.
        /// </summary>
        protected void CompleteARFoundationInitialization()
        {
            session.Session = arSession.subsystem.nativePtr.GetPlatformPointer();
            // Ask for ar frames to process
            arCameraManager.frameReceived += ArCameraManager_frameReceived;
            ARSessionInitialized = true;
            OnSessionCreated();
        }
#endif

        /// <summary>
        /// Destroys any existing session and unsubscribes from all events.
        /// </summary>
        public void DestroySession()
        {
            // Warn if already destroyed
            if (session == null)
            {
                Debug.LogWarning($"{nameof(DestroySession)} called but no session exists.");
                return;
            }

            // Forget about cached AR Foundation anchors
            anchorLookup.Clear();

#if UNITY_ANDROID || UNITY_IOS
            // Stop getting frames
            arCameraManager.frameReceived -= ArCameraManager_frameReceived;

            ARSession.stateChanged -= ARSession_stateChanged;
#endif
            // Make sure the session is stopped
            if (isSessionStarted) { StopSession(); }

            // Unsubscribe from session events
            session.OnLogDebug -= OnLogDebug;
            session.SessionUpdated -= OnSessionUpdated;
            session.AnchorLocated -= OnAnchorLocated;
            session.LocateAnchorsCompleted -= OnLocateAnchorsCompleted;
            session.Error -= OnError;

            // Dispose the session
            session.Dispose();

            // Update session variable and raise notification through property setter
            Session = null; // Use property to raise event

            // Reset session status as well
            sessionStatus = null;

            // Notify
            OnSessionDestroyed();
        }

        /// <summary>
        /// Resets the current session if there is one, and waits for any
        /// active queries to be stopped.
        /// </summary>
        /// <returns>
        /// A <see cref="Task"/> that represents the operation.
        /// </returns>
        public async Task ResetSessionAsync()
        {
            // Capture if session was started
            bool wasStarted = isSessionStarted;

            // Stop the session if it was started
            if (isSessionStarted) { StopSession(); }

            // Reset the current session if there is one
            if (session != null) { session.Reset(); }

            // Wait for any currently active locate operations to be stopped
            await Task.Run(async () =>
            {
                while (IsLocating)
                {
                    await Task.Delay(20);
                }
            });

            // Restart the session if it was running before the reset
            if (wasStarted) { await StartSessionAsync(); }
        }

        /// <summary>
        /// Creates the specified anchor when the session is ready to create it.
        /// This task is cancelable.
        /// </summary>
        /// <param name="anchor">
        /// The anchor to create.
        /// </param>
        /// <param name="cancellationToken">
        /// </param>
        /// <returns>
        /// A <see cref="Task"/> that represents the operation.
        /// </returns>
        /// <remarks>
        /// If there is no active <see cref="Session"/>, calling this method will
        /// result in an exception. If there is an active session, this method
        /// will wait until <see cref="IsReadyForCreate"/> returns <c>true</c>
        /// before continuing the operation. The <paramref name="cancellationToken"/>
        /// parameter can be used to cancel the operation.
        /// </remarks>
        public async Task CreateAnchorAsync(CloudSpatialAnchor anchor, CancellationToken cancellationToken)
        {
            // Validate
            if (anchor == null) throw new ArgumentNullException(nameof(anchor));
            EnsureSessionStarted();

            // Wait for enough data
            while (!IsReadyForCreate)
            {
                cancellationToken.ThrowIfCancellationRequested();
                await Task.Delay(50);
            }

            // Actually create
            await session.CreateAnchorAsync(anchor);

            // Id successful, add to anchor lookup
            if ((anchor != null) && (anchor.Identifier != string.Empty))
            {
                anchorLookup.AddIdentifierToPlatformKeyMapping(anchor.Identifier, anchor.LocalAnchor.GetPlatformKey());
            }
        }

        /// <summary>
        /// Creates the specified anchor when the session is ready to create it.
        /// </summary>
        /// <param name="anchor">
        /// The anchor to create.
        /// </param>
        /// <returns>
        /// A <see cref="Task"/> that represents the operation.
        /// </returns>
        /// <remarks>
        /// If there is no active <see cref="Session"/>, calling this method will
        /// result in an exception. If there is an active session, this method
        /// will wait until <see cref="IsReadyForCreate"/> returns <c>true</c>
        /// before continuing the operation. This wait cannot be canceled, but
        /// there is an override of this method which accepts a
        /// <see cref="CancellationToken"/>.
        /// </remarks>
        public Task CreateAnchorAsync(CloudSpatialAnchor anchor)
        {
            return CreateAnchorAsync(anchor, CancellationToken.None);
        }

        /// <summary>
        /// Deletes the specified anchor.
        /// </summary>
        /// <param name="anchor">
        /// The anchor to delete.
        /// </param>
        /// <returns>
        /// A <see cref="Task"/> that represents the operation.
        /// </returns>
        /// <remarks>
        /// If there is no active <see cref="Session"/>, calling this method
        /// will result in an exception.
        /// </remarks>
        public async Task DeleteAnchorAsync(CloudSpatialAnchor anchor)
        {
            // Validate
            if (anchor == null) throw new ArgumentNullException(nameof(anchor));
            EnsureSessionStarted();

            // Actually delete
            await session.DeleteAnchorAsync(anchor);
        }

        /// <summary>
        /// Starts the session. If no session exists, one will be created.
        /// </summary>
        /// In order for the property <see cref="IsSessionStarted"/> and events
        /// like <see cref="SessionStarted"/> and <see cref="SessionStopped"/>
        /// to be tracked correctly, use the <see cref="StartSessionAsync"/> and
        /// <see cref="StopSession"/> methods rather than calling methods
        /// directly on the <see cref="Session"/> instance.
        /// </remarks>
        public async Task StartSessionAsync()
        {
            // Warn if already started
            if (isSessionStarted)
            {
                Debug.LogWarning($"{nameof(StartSessionAsync)} called but session is already started.");
                return;
            }

            // If no session created, create one
            if (session == null)
            {
                Debug.Log($"{nameof(StartSessionAsync)} called with but no session. Creating one.");
                await CreateSessionAsync();
            }

            // Start the session
            session.Start();

            // It's started
            isSessionStarted = true;

            // Wait for first session update
            sessionStatus = await session.GetSessionStatusAsync();

            // Notify
            OnSessionStarted();
        }

        /// <summary>
        /// Stops any existing session but does not destroy it. No error will be
        /// thrown if a session doesn't exist or hasn't been started.
        /// </summary>
        /// In order for the property <see cref="IsSessionStarted"/> and events
        /// like <see cref="SessionStarted"/> and <see cref="SessionStopped"/>
        /// to be tracked correctly, use the <see cref="StartSessionAsync"/> and
        /// <see cref="StopSession"/> methods rather than calling methods
        /// directly on the <see cref="Session"/> instance.
        /// </remarks>
        public void StopSession()
        {
            // Warn if already started
            if (!isSessionStarted)
            {
                Debug.LogWarning($"{nameof(StopSession)} called but no session has been started.");
                return;
            }

            // If no session created, create one
            if (session == null)
            {
                Debug.LogWarning($"{nameof(StopSession)} called but no session has been created.");
                return;
            }

            // Stop the session
            session.Stop();

            // Status is no longer valid
            sessionStatus = null;

            // It's no longer started
            isSessionStarted = false;

            // Notify
            OnSessionStopped();
        }
#endregion // Public Methods

#region Public Properties
        /// <summary>
        /// Gets or sets the method used for authentication.
        /// The default is <see cref="AuthenticationMode.ApiKey">ApiKey</see>.
        /// </summary>
        public AuthenticationMode AuthenticationMode { get { return authenticationMode; } set { authenticationMode = value; } }

        /// <summary>
        /// Gets or sets the Client ID to use when authenticating via Azure Active Directory.
        /// </summary>
        public string ClientId { get { return clientId; } set { clientId = value; } }

        /// <summary>
        /// Gets a value that indicates if the manager is currently attempting
        /// to locate any anchors.
        /// </summary>
        public bool IsLocating
        {
            get
            {
                return ((session != null) && (session.GetActiveWatchers().Count > 0));
            }
        }

        /// <summary>
        /// Gets a value that indicates if the manager is ready to create an anchor.
        /// </summary>
        /// <remarks>
        /// In order to create an anchor, the manager must have a valid
        /// <see cref="Session"/> and enough visual data must have accumulated.
        /// The progress of accumulating visual data can be monitored through
        /// the <see cref="SessionStatus"/>.<see cref="SessionStatus.ReadyForCreateProgress">ReadyForCreateProgress</see>
        /// property.
        /// </remarks>
        public bool IsReadyForCreate
        {
            get
            {
                return ((sessionStatus != null) && (sessionStatus.RecommendedForCreateProgress >= 1));
            }
        }

        /// <summary>
        /// Gets a value that indicates if the <see cref="Session"/> has been started.
        /// </summary>
        /// <remarks>
        /// In order for this property and events like <see cref="SessionStarted"/>
        /// and <see cref="SessionStopped"/> to be tracked correctly, use
        /// the <see cref="StartSessionAsync"/> and <see cref="StopSession"/> methods
        /// rather than calling methods directly on the <see cref="Session"/> instance.
        /// </remarks>
        public bool IsSessionStarted { get { return isSessionStarted; } }

        /// <summary>
        /// Gets or sets the log level for messages from the Spatial Anchors service.
        /// </summary>
        public SessionLogLevel LogLevel
        {
            get
            {
                return logLevel;
            }
            set
            {
                logLevel = value;
                if (session != null) { session.LogLevel = value; }
            }
        }

        /// <summary>
        /// Gets the current <see cref="CloudSpatialAnchorSession"/> if one
        /// has been created.
        /// </summary>
        public CloudSpatialAnchorSession Session
        {
            get
            {
                return session;
            }
            protected set
            {
                if (session != value)
                {
                    session = value;
                    OnSessionChanged();
                }
            }
        }

        /// <summary>
        /// Gets the last reported status for the current <see cref="Session"/>.
        /// </summary>
        /// <remarks>
        /// If there is no current session or if the session has not yet reported
        /// any status via the <see cref="SessionUpdated"/> event, this property
        /// will return <see langword = "null" />.
        /// </remarks>
        public SessionStatus SessionStatus { get { return sessionStatus; } }

        /// <summary>
        /// Gets or sets the Account ID to use when authenticating via API Key. This information is provided by the Spatial Anchors service portal.
        /// </summary>
        public string SpatialAnchorsAccountId { get { return spatialAnchorsAccountId; } set { spatialAnchorsAccountId = value; } }

        /// <summary>
        /// Gets or sets the Account Key to use when authenticating via API Key. This information is provided by the Spatial Anchors service portal.
        /// </summary>
        public string SpatialAnchorsAccountKey { get { return spatialAnchorsAccountKey; } set { spatialAnchorsAccountKey = value; } }

        /// <summary>
        /// Gets or sets the Account Domain to use when connecting to the Azure Spatial Anchors service.
        /// </summary>
        public string SpatialAnchorsAccountDomain { get { return spatialAnchorsAccountDomain; } set { spatialAnchorsAccountDomain = value; } }

        /// <summary>
        /// Gets or sets the Tenant ID to use when authenticating via Azure Active Directory.
        /// </summary>
        public string TenantId { get { return tenantId; } set { tenantId = value; } }
#endregion // Public Properties

#region Public Events
        /// <summary>
        /// Raised when the <see cref="Session"/> <see cref="CloudSpatialAnchorSession.AnchorLocated">AnchorLocated</see> event is fired.
        /// </summary>
        /// <remarks>
        /// Because the <see cref="Session"/> property can change over time,
        /// this event is provided as a convenience for forwarding events from
        /// the currently active session.
        /// </remarks>
        public event AnchorLocatedDelegate AnchorLocated;

        /// <summary>
        /// Raised when the <see cref="Session"/> <see cref="CloudSpatialAnchorSession.LocateAnchorsCompleted">LocateAnchorsCompleted</see> event is fired.
        /// </summary>
        /// <remarks>
        /// Because the <see cref="Session"/> property can change over time,
        /// this event is provided as a convenience for forwarding events from
        /// the currently active session.
        /// </remarks>
        public event LocateAnchorsCompletedDelegate LocateAnchorsCompleted;

        /// <summary>
        /// Raised when the <see cref="Session"/> <see cref="CloudSpatialAnchorSession.Error">Error</see> event is fired.
        /// </summary>
        /// <remarks>
        /// Because the <see cref="Session"/> property can change over time,
        /// this event is provided as a convenience for forwarding events from
        /// the currently active session.
        /// </remarks>
        public event SessionErrorDelegate Error;

        /// <summary>
        /// Raised when the value of the <see cref="Session"/> property has changed.
        /// </summary>
        /// <remarks>
        /// When the manager is first created, the value of <see cref="Session"/>
        /// will be <see langword = "null" />. Various operations of the manager
        /// can cause sessions to be created or replaced. This event will fire
        /// whenever the value of the <see cref="Session"/> property has changed.
        /// </remarks>
        public event EventHandler SessionChanged;

        /// <summary>
        /// Raised whenever the <see cref="Session"/> has been created.
        /// </summary>
        /// <remarks>
        /// The <see cref="Session"/> can be created by calling <see cref="CreateSessionAsync"/>.
        /// </remarks>
        public event EventHandler SessionCreated;

        /// <summary>
        /// Raised whenever the <see cref="Session"/> has been destroyed.
        /// </summary>
        /// <remarks>
        /// The <see cref="Session"/> can be destroyed by calling <see cref="DestroySession"/>.
        /// </remarks>
        public event EventHandler SessionDestroyed;

        /// <summary>
        /// Raised whenever the <see cref="Session"/> has been started.
        /// </summary>
        /// <remarks>
        /// <remarks>
        /// In order for this event and properties like <see cref="IsSessionStarted"/>
        /// to be tracked correctly, use the <see cref="StartSessionAsync"/> and
        /// <see cref="StopSession"/> methods rather than calling methods
        /// directly on the <see cref="Session"/> instance.
        /// </remarks>
        public event EventHandler SessionStarted;

        /// <summary>
        /// Raised whenever the <see cref="Session"/> has been stopped.
        /// </summary>
        /// <remarks>
        /// <remarks>
        /// In order for this event and properties like <see cref="IsSessionStarted"/>
        /// to be tracked correctly, use the <see cref="StartSessionAsync"/> and
        /// <see cref="StopSession"/> methods rather than calling methods
        /// directly on the <see cref="Session"/> instance.
        /// </remarks>
        public event EventHandler SessionStopped;

        /// <summary>
        /// Raised when the <see cref="Session"/> <see cref="CloudSpatialAnchorSession.SessionUpdated">SessionUpdated</see> event is fired.
        /// </summary>
        /// <remarks>
        /// Because the <see cref="Session"/> property can change over time,
        /// this event is provided as a convenience for forwarding events from
        /// the currently active session.
        /// </remarks>
        public event SessionUpdatedDelegate SessionUpdated;

        /// <summary>
        /// Raised when the <see cref="Session"/> <see cref="CloudSpatialAnchorSession.LogDebug">LogDebug</see> event is fired.
        /// </summary>
        /// <remarks>
        /// Because the <see cref="Session"/> property can change over time,
        /// this event is provided as a convenience for forwarding events from
        /// the currently active session.
        /// </remarks>
        public event OnLogDebugDelegate LogDebug;
#endregion // Public Events
    }
}

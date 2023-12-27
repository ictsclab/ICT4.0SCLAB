// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT license.
using System;
using System.Threading;
using System.Threading.Tasks;
using UnityEngine;
using System.Runtime.InteropServices;
using UnityEngine.XR.ARFoundation;
#if UNITY_IOS
using Microsoft.Azure.SpatialAnchors.Unity.IOS;
using PlatformKey = System.String;
#endif
#if UNITY_ANDROID
using PlatformKey = System.IntPtr;
#endif
// ASA_UNITY_USE_OPENXR gets defined by AzureSpatialAnchors.SDK.Core's package asmdef file (assembly definition file) when
// com.microsoft.mixedreality.openxr package is included in the Unity project. 
#if (UNITY_WSA || WINDOWS_UWP) && ASA_UNITY_USE_OPENXR
using Microsoft.MixedReality.OpenXR;
#endif

using Microsoft.Azure.SpatialAnchors.Unity.ARFoundation;

namespace Microsoft.Azure.SpatialAnchors.Unity
{
    [StructLayout(layoutKind: LayoutKind.Sequential)]
    struct UnityPointer
    {
        public IntPtr UnityInternal;
        public IntPtr platformPointer;
    }

    /// <summary>
    /// Extension methods to help manage spatial anchors.
    /// </summary>
    public static class SpatialAnchorExtensions
    {
        /// <summary>
        /// Gets the platform pointer using internal knowledge of the layout 
        /// of unity's ARFoundation objects. 
        /// </summary>
        /// <param name="nativePtr">This must be either ARAnchor.nativePtr or XRAnchor.nativePtr</param>
        /// <returns>A pointer to the underlying platform (ARKit/ARCore) anchor</returns>
        static internal IntPtr GetPlatformPointer(this IntPtr nativePtr)
        {
            if (nativePtr == IntPtr.Zero)
            {
                return IntPtr.Zero;
            }

#if (UNITY_WSA || WINDOWS_UWP) && ASA_UNITY_USE_OPENXR
            return Marshal.GetIUnknownForObject(AnchorConverter.ToPerceptionSpatialAnchor(nativePtr));
#else
            UnityPointer pointerGetter = Marshal.PtrToStructure<UnityPointer>(nativePtr);
            return pointerGetter.platformPointer;
#endif
        }

        /// <summary>
        /// Gets a key that can be used to map a platform anchor to an ARReference point
        /// </summary>
        /// <param name="intPtr">The platform (ARkit or ARCore) anchor pointer</param>
        /// <returns>A string for the dictionary lookup</returns>
        static internal string GetPlatformKey(this IntPtr intPtr)
        {
#if UNITY_IOS
            return ARKitNativeHelpers.GetArkitAnchorIdFromPointer(intPtr);
#else
            return intPtr.ToString();
#endif
        }

        /// <summary>
        /// Applies the specified cloud anchor to the GameObject by
        /// creating or updating the native anchor.
        /// to match.
        /// </summary>
        /// <param name="gameObject">
        /// The <see cref="GameObject"/> where the cloud anchor should be
        /// applied.
        /// </param>
        /// <param name="cloudAnchor">
        /// The cloud anchor to apply.
        /// </param>
        /// <returns>
        /// The <see cref="NativeAnchor"/> created or updated during the
        /// operation.
        /// </returns>
        /// <exception cref="System.ArgumentNullException">
        /// Thrown if <paramref name="gameObject"/> or <paramref name="cloudAnchor"/>
        /// are <see langword = "null" />.
        /// </exception>
        /// <exception cref="PlatformNotSupportedException">
        /// Thrown if the current platform is not supported by the SDK.
        /// </exception>
        static public void ApplyCloudAnchor(this GameObject gameObject, CloudSpatialAnchor cloudAnchor)
        {
            // Validate
            if (gameObject == null) { throw new ArgumentNullException(nameof(gameObject)); }
            if (cloudAnchor == null) { throw new ArgumentNullException(nameof(cloudAnchor)); }

            // For AR foundation we need to remove any existing native anchor,
            // move the object to the new pose, and then re-apply the native anchor.

            // Get the pose from the cloud anchor
            Pose pose = cloudAnchor.GetPose();

            // Delete any existing native anchor
            gameObject.DeleteNativeAnchor();

            // Move the GameObject to match the new pose
            gameObject.transform.position = pose.position;
            gameObject.transform.rotation = pose.rotation;

            // Add the native anchor back on
            gameObject.CreateNativeAnchor();
        }

        /// <summary>
        /// Creates and adds the appropriate platform-specific anchor.
        /// </summary>
        /// <param name="gameObject">
        /// The <see cref="GameObject"/> where the anchor should be added.
        /// </param>
        /// <returns>
        /// The newly added native anchor.
        /// </returns>
        /// <remarks>
        /// If a native anchor is already applied, calling this method will
        /// remove it and add a new one. If this behavior is not desired,
        /// please see other options listed in the See Also section.
        /// </remarks>
        /// <seealso cref="FindNativeAnchor(GameObject)"/>
        /// <seealso cref="FindOrCreateNativeAnchor(GameObject)"/>
        /// <exception cref="System.ArgumentNullException">
        /// Thrown if <paramref name="gameObject"/> is <see langword = "null" />.
        /// </exception>
        static public ARAnchor CreateNativeAnchor(this GameObject gameObject)
        {
            // Validate
            if (gameObject == null)
            {
                throw new ArgumentNullException(nameof(gameObject));
            }

            // Remove any existing native anchor
            DeleteNativeAnchor(gameObject);

            // Add the platform-specific anchor
            ARAnchor arAnchor = gameObject.AddComponent<ARAnchor>();

            // Protect the GameObject from being destroyed if the ARAnchor is destroyed
            arAnchor.destroyOnRemoval = false;

            return arAnchor;
        }

        /// <summary>
        /// Removes and destroys any native anchor applied to the object.
        /// </summary>
        /// <param name="gameObject">
        /// The <see cref="GameObject"/> where the anchor should be removed.
        /// </param>
        /// <exception cref="System.ArgumentNullException">
        /// Thrown if <paramref name="gameObject"/> is <see langword = "null" />.
        /// </exception>
        static public void DeleteNativeAnchor(this GameObject gameObject)
        {
            // Validate
            if (gameObject == null)
            {
                throw new ArgumentNullException(nameof(gameObject));
            }

            // Try to find the native anchor
            ARAnchor nativeAnchor = FindNativeAnchor(gameObject);

            // If found destroy (which will also remove it)
            if (nativeAnchor != null)
            {
                // Protect the GameObject from being destroyed
                nativeAnchor.destroyOnRemoval = false;

                GameObject.DestroyImmediate(nativeAnchor);
            }
        }

        /// <summary>
        /// Returns the native anchor, if one is applied.
        /// </summary>
        /// <param name="gameObject">
        /// The <see cref="GameObject"/> to search for the anchor.
        /// </param>
        /// <returns>
        /// The native anchor if one is found; otherwise <see langword = "null" />.
        /// </returns>
        /// <exception cref="System.ArgumentNullException">
        /// Thrown if <paramref name="gameObject"/> is <see langword = "null" />.
        /// </exception>
        static public ARAnchor FindNativeAnchor(this GameObject gameObject)
        {
            // Validate
            if (gameObject == null) { throw new ArgumentNullException(nameof(gameObject)); }

            // Return anchor (if found)
            return gameObject.GetComponent<ARAnchor>();
        }

        /// <summary>
        /// Returns any existing anchor if found; otherwise, creates and returns
        /// a new anchor.
        /// </summary>
        /// <param name="gameObject">
        /// The <see cref="GameObject"/> to search for or add the anchor.
        /// </param>
        /// <returns>
        /// The existing or newly created native anchor.
        /// </returns>
        /// <exception cref="System.ArgumentNullException">
        /// Thrown if <paramref name="gameObject"/> is <see langword = "null" />.
        /// </exception>
        static public ARAnchor FindOrCreateNativeAnchor(this GameObject gameObject)
        {
            // Validate
            if (gameObject == null) { throw new ArgumentNullException(nameof(gameObject)); }

            // Try to find an existing anchor
            ARAnchor anchor = FindNativeAnchor(gameObject);

            // If not found, create
            if (anchor == null)
            {
                anchor = CreateNativeAnchor(gameObject);
            }

            // Return the anchor
            return anchor;
        }

        /// <summary>
        /// Gets the underlying pointer for the native anchor.
        /// </summary>
        /// <param name="anchor">
        /// The native anchor to obtain the pointer for.
        /// </param>
        /// <param name="cancellationToken">
        /// A <see cref="CancellationToken"/> that can be used to cancel the operation.
        /// </param>
        /// <returns>
        /// A Task that yields the pointer.
        /// </returns>
        /// <exception cref="System.ArgumentNullException">
        /// Thrown if <paramref name="anchor"/> is <see langword = "null" />.
        /// </exception>
        /// <exception cref="PlatformNotSupportedException">
        /// Thrown if the current platform is not supported by the SDK.
        /// </exception>
        /// <exception cref="InvalidOperationException">
        /// Thrown if a pointer could not be obtained from the native anchor.
        /// </exception>
        /// <exception cref="OperationCanceledException">
        /// The operation was canceled.
        /// </exception>
        /// <remarks>
        /// This method is async because ARKit cannot provide an anchor
        /// pointer until at least one frame has been processed. If a pointer
        /// is not returned on the first request, this operation will wait for
        /// one to be created.
        /// </remarks>
        static public async Task<IntPtr> GetPointer(this ARAnchor anchor)
        {
            // Validate
            if (anchor == null) { throw new ArgumentNullException(nameof(anchor)); }

            // Wait up to one second until AR Foundation creates a backing platform's anchor which
            // normally takes about one frame, but can take longer on some platforms/runtimes

            // Wait for ARAnchor to no longer be pending
            int retryCount = 30;
            while (anchor.pending && retryCount > 0)
            {
                await Task.Delay(33); // in milliseconds
                --retryCount;
            }
            if (anchor.pending)
            {
                throw new InvalidOperationException("ARAnchor still pending");
            }

            // Wait for ARAnchor.nativePtr to become available
            while (anchor.nativePtr == IntPtr.Zero && retryCount > 0)
            {
                await Task.Delay(33); // in milliseconds
                --retryCount;
            }
            if (anchor.nativePtr == IntPtr.Zero)
            {
                throw new InvalidOperationException("Could not obtain the ARAnchor.nativePtr");
            }

            // Wait for platform pointer to become available
            while (anchor.nativePtr.GetPlatformPointer() == IntPtr.Zero && retryCount > 0)
            {
                await Task.Delay(33); // in milliseconds
                --retryCount;
            }

            IntPtr platformPointer = anchor.nativePtr.GetPlatformPointer();
            if (platformPointer == IntPtr.Zero)
            {
                throw new InvalidOperationException("Could not obtain a platform pointer");
            }

            return platformPointer;
        }

        /// <summary>
        /// Gets the cloud anchors pose.
        /// </summary>
        /// <param name="cloudAnchor">
        /// The cloud anchor to return the pose for.
        /// </param>
        /// <returns><see cref="Pose"/>
        /// The anchors pose.
        /// </returns>
        /// <exception cref="System.ArgumentNullException">
        /// Thrown if <paramref name="gameObject"/> is <see langword = "null" />.
        /// </exception>
        /// <exception cref="PlatformNotSupportedException">
        /// Thrown if the current platform is not supported by the SDK.
        /// </exception>
        static public Pose GetPose(this CloudSpatialAnchor cloudAnchor)
        {
            // Validate
            if (cloudAnchor == null)
            {
                throw new ArgumentNullException(nameof(cloudAnchor));
            }

            return AnchorHelpers.GetPose(cloudAnchor);
        }

        /// <summary>
        /// Sets the pose of the <see cref="GameObject"/>, modifying native
        /// anchors if necessary.
        /// </summary>
        /// <param name="gameObject">
        /// The <see cref="GameObject"/> to set the pose on.
        /// </param>
        /// <param name="position">
        /// The new position to set.
        /// </param>
        /// <param name="rotation">
        /// The new rotation to set.
        /// </param>
        /// <exception cref="System.ArgumentNullException">
        /// Thrown if <paramref name="gameObject"/> is <see langword = "null" />.
        /// </exception>
        static public void SetPose(this GameObject gameObject, Vector3 position, Quaternion rotation)
        {
            // Validate
            if (gameObject == null) { throw new ArgumentNullException(nameof(gameObject)); }

            // Check to see if we had a native anchor
            bool hadNative = gameObject.FindNativeAnchor();

            // Delete the native anchor if it exists
            if (hadNative) { gameObject.DeleteNativeAnchor(); }

            // Update the pose
            gameObject.transform.position = position;
            gameObject.transform.rotation = rotation;

            // If there was a native anchor, add it back on
            if (hadNative) { gameObject.CreateNativeAnchor(); }
        }

        /// <summary>
        /// Sets the pose of the <see cref="GameObject"/>, modifying native
        /// anchors if necessary.
        /// </summary>
        /// <param name="gameObject">
        /// The <see cref="GameObject"/> to set the pose on.
        /// </param>
        /// <param name="pose">
        /// The pose to set.
        /// </param>
        /// <exception cref="System.ArgumentNullException">
        /// Thrown if <paramref name="gameObject"/> is <see langword = "null" />.
        /// </exception>
        static public void SetPose(this GameObject gameObject, Pose pose)
        {
            SetPose(gameObject, pose.position, pose.rotation);
        }

        /// <summary>
        /// Creates or updates the <see cref="CloudSpatialAnchor"/> returned by
        /// <see cref="CloudAnchor"/> to reflect the same data as the native anchor.
        /// </summary>
        /// <param name="anchor">
        /// The native anchor to convert to a cloud anchor.
        /// </param>
        /// <returns>
        /// A Task that yields the <see cref="CloudSpatialAnchor"/>.
        /// </returns>
        /// <exception cref="System.ArgumentNullException">
        /// Thrown if <paramref name="anchor"/> is <see langword = "null" />.
        /// </exception>
        /// <remarks>
        /// This method is async because ARKit needs to process at least one
        /// frame before any requested anchor is fully created. This method
        /// will return only after any underlying native processes are
        /// complete.
        /// </remarks>
        public static async Task<CloudSpatialAnchor> ToCloud(this ARAnchor anchor)
        {
            // Validate
            if (anchor == null) { throw new ArgumentNullException(nameof(anchor)); }

            // Create the cloud version
            CloudSpatialAnchor cloudSpatialAnchor = new CloudSpatialAnchor();

            // Set the local pointer
            cloudSpatialAnchor.LocalAnchor = await anchor.GetPointer();

            // Add to anchor lookup
            SpatialAnchorManager.anchorLookup.AddPlatformKeyToAnchorMapping(anchor.nativePtr.GetPlatformPointer().GetPlatformKey(), anchor);

            // Done!
            return cloudSpatialAnchor;
        }
    }
}

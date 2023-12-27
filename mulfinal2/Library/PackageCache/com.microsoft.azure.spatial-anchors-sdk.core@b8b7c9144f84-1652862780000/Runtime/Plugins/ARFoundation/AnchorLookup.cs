// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT license.
using System;
using System.Linq;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

namespace Microsoft.Azure.SpatialAnchors.Unity.ARFoundation
{
    /// <summary>
    /// The internal mapping between CloudSpatialAnchors and ARAnchors used by SpatialAnchorManager.
    /// 
    /// Anchors that are located by the ASA SDK on mobile platforms will automatically surface
    /// as ARAnchors in the ARAnchorManager.anchorsChanged event. This means that during the
    /// CloudSpatialAnchorSession.AnchorLocated callback, we must store the mapping between the
    /// CloudSpatialAnchor identifier and the platform key using AddIdentifierToPlatformKeyMapping().
    /// Later, durng the anchorsChanged event, we'll also store the platform key to ARAnchor mapping
    /// using AddPlatformKeyToAnchorMapping(). 
    /// 
    /// Anchors that are located by the ASA SDK on windows platforms will not be surfaced
    /// automatically by the ARAnchorManager.anchorsChanged event, so instead we immediately
    /// create a brand new ARAnchor at the pose of the returned CloudSpatialAnchor. Since we
    /// have the entire mapping at this point, we will call AddAnchor() to include the anchor in the
    /// internal maps maintained by this class.
    /// </summary>
    /// 
    /// <remarks>
    /// The platform key is the platform-specific pointer to the platform anchor. The ARAnchor.nativePtr
    /// can be unpacked to retrieve the platform anchor pointer and platform key.
    /// </remarks>
    internal class AnchorLookup
    {
        /// <summary>
        /// Lock for making AnchorLookup threadsafe.
        /// </summary>
        private static System.Object lockObject = new System.Object();

        /// <summary>
        /// The mapping between and CloudSpatialAnchor identifier and the platform key.
        /// </summary>
        private static Dictionary<string, string> identifiersToPlatformKeys = new Dictionary<string, string>();

        /// <summary>
        /// The mapping between a platform key and an ARAnchor.
        /// </summary>
        private static Dictionary<string, ARAnchor> platformKeysToARAnchors = new Dictionary<string, ARAnchor>();

#if WINDOWS_UWP || UNITY_WSA
        /// <summary>
        /// Anchors located on Windows devices immediately have access to the full mapping and can
        /// use this function to update both maps.
        /// </summary>
        internal void AddAnchorToLookup(string anchorIdentifier, string platformKey, ARAnchor arAnchor)
        {
            AddIdentifierToPlatformKeyMapping(anchorIdentifier, platformKey);
            AddPlatformKeyToAnchorMapping(platformKey, arAnchor);
        }
#endif

        /// <summary>
        /// Anchors located on mobile platforms wil have their platform key available immediately
        /// but it will take time to surface the ARAnchor via the ARAnchorManager.anchorsChanged
        /// event. Use this function to store the CloudSpatialAnchor identifer to platform key
        /// mapping first and then follow-up once the ARAnchor becomes available.
        /// </summary>
        internal void AddIdentifierToPlatformKeyMapping(string anchorIdentifier, string platformKey)
        {
            lock (lockObject)
            {
                if (identifiersToPlatformKeys.ContainsKey(anchorIdentifier))
                {
                    throw new InvalidOperationException("A new ARAnchor was surfaced with the same anchor identifier as an existing ARAnchor.");
                }
                identifiersToPlatformKeys[anchorIdentifier] = platformKey;
            }
        }

        /// <summary>
        /// Anchors that are created or anchors that are located on mobile platforms will have
        /// ARAnchors automatically surafaced via the ARAnchorManager.anchorsChanged event. Use
        /// this function to update the mapping between a platform key and an ARAnchor.
        /// </summary>
        internal void AddPlatformKeyToAnchorMapping(string platformKey, ARAnchor arAnchor)
        {
            lock (lockObject)
            {
                // We will check for a collision here but we only want to warn the application if the
                // existing ARAnchor is still enabled. It is possible to have stale ARAnchors so we
                // want to silently replace the values in those circumstances where the ARAnchor
                // has become null or disabled.
                if (platformKeysToARAnchors.ContainsKey(platformKey))
                {
                    ARAnchor existingARAnchor = platformKeysToARAnchors[platformKey];
                    if (existingARAnchor)
                    {
                        if (arAnchor != existingARAnchor)
                        {
                            if (existingARAnchor.enabled)
                            {
                                Debug.LogWarning("A new ARAnchor was surfaced with the same platform key as an existing ARAnchor.");
                            }
                        }
                    }
                }
                platformKeysToARAnchors[platformKey] = arAnchor;
            }
        }

        /// <summary>
        /// Used at the beginning of SpatialAnchorManager.OnAnchorLocated to clear the existing
        /// references to the CloudSpatialAnchor that was just successfully located. This makes
        /// sure that we do not accidentally use stale lookup references.
        /// </summary>
        internal void RemoveAnchorFromLookup(string anchorIdentifier)
        {
            lock (lockObject)
            {
                if (identifiersToPlatformKeys.ContainsKey(anchorIdentifier))
                {
                    string platformKey = identifiersToPlatformKeys[anchorIdentifier];
                    if (platformKeysToARAnchors.ContainsKey(platformKey))
                    {
                        platformKeysToARAnchors.Remove(platformKey);
                    }
                    identifiersToPlatformKeys.Remove(anchorIdentifier);
                }
            }
        }

        /// <summary>
        /// Used when an ARAnchor is destroyed or removed from the scene. This makes sure that we 
        /// do no accidentally use stale lookup references. There exist scenarios where ARAnchors
        /// are not properly disposed of, so this function never gets called. That is why we must
        /// call RemoveByIdentifier() immmediately once an anchor has been located.
        /// </summary>
        internal void RemoveAnchorFromLookup(ARAnchor arAnchor)
        {
            lock (lockObject)
            {
                foreach (var item in platformKeysToARAnchors.Where(kvp => kvp.Value == arAnchor).ToList())
                {
                    string platformKey = item.Key;
                    platformKeysToARAnchors.Remove(platformKey);
                    foreach (var item2 in identifiersToPlatformKeys.Where(kvp => kvp.Value == platformKey).ToList())
                    {
                        string identifier = item2.Key;
                        identifiersToPlatformKeys.Remove(identifier);
                    }
                }
            }
        }

        /// <summary>
        /// Clear the lookup completely.
        /// </summary>
        internal void Clear()
        {
            lock (lockObject)
            {
                identifiersToPlatformKeys.Clear();
                platformKeysToARAnchors.Clear();
            }
        }

        /// <summary>
        /// Retrieve the ARAnchor given the CloudSpatialAnchor identifier. Can be used to check
        /// if the lookup contains the complete lookup for a CloudSpatialAnchor.
        /// </summary>
        internal ARAnchor GetAnchorFromLookupUsingIdentifier(string anchorIdentifier)
        {
            lock (lockObject)
            {
                if (identifiersToPlatformKeys.ContainsKey(anchorIdentifier))
                {
                    if (platformKeysToARAnchors.ContainsKey(identifiersToPlatformKeys[anchorIdentifier]))
                    {
                        return platformKeysToARAnchors[identifiersToPlatformKeys[anchorIdentifier]];
                    }
                }
            }
            return null;
        }

        /// <summary>
        /// Can be used to get the pose of a CloudSpatialAnchor by leveraging CloudSpatialAnchor's 
        /// GetPose() extension. Will return null if the ARAnchor has yet to be surfaced by the
        /// system or if the ARAnchor removed from the scene.
        /// </summary>
        internal ARAnchor GetAnchorFromLookupUsingPlatformKey(string platformKey)
        {
            lock (lockObject)
            {
                if (platformKeysToARAnchors.ContainsKey(platformKey))
                {
                    return platformKeysToARAnchors[platformKey];
                }
            }
            return null;
        }
    }
}

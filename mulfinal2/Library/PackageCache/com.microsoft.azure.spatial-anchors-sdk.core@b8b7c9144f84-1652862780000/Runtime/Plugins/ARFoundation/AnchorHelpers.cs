// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT license.
using System;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

namespace Microsoft.Azure.SpatialAnchors.Unity.ARFoundation
{
    internal static class AnchorHelpers
    {
        /// <summary>
        /// Gets an anchor <see cref="Pose"/> from the specified <see cref="CloudSpatialAnchor"/>.
        /// </summary>
        /// <param name="anchor">The anchor.</param>
        /// <returns><see cref="Pose"/>.</returns>
        public static Pose GetPose(CloudSpatialAnchor cloudSpatialAnchor)
        {
            if (cloudSpatialAnchor == null)
            {
                throw new ArgumentNullException(nameof(cloudSpatialAnchor));
            }

            if (cloudSpatialAnchor.LocalAnchor == IntPtr.Zero)
            {
                throw new InvalidOperationException("CloudSpatialAnchor did not have a valid local anchor.");
            }

            string platformKey = cloudSpatialAnchor.LocalAnchor.GetPlatformKey();
            if (String.IsNullOrEmpty(platformKey))
            {
                throw new InvalidOperationException("CloudSpatialAnchor did not have a valid platform key.");
            }

            ARAnchor arAnchor = SpatialAnchorManager.anchorLookup.GetAnchorFromLookupUsingPlatformKey(platformKey);
            if (arAnchor == null)
            {
                throw new InvalidOperationException("Could not find an ARAnchor associated with the CloudSpatialAnchor.");
            }

            return GetPose(arAnchor);
        }

        /// <summary>
        /// Gets a <see cref="Pose"/> from the specified <see cref="ARAnchor"/>.
        /// </summary>
        /// <param name="anchor">The anchor.</param>
        /// <returns><see cref="Pose"/>.</returns>
        public static Pose GetPose(ARAnchor anchor)
        {
            return new Pose(anchor.transform.position, anchor.transform.rotation);
        }
    }
}

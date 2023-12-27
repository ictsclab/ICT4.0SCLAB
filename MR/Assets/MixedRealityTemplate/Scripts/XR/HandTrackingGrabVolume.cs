using System.Collections.Generic;
using UnityEngine;

namespace Chiligames.MixedRealityTemplate
{
    public class HandTrackingGrabVolume : MonoBehaviour
    {
        [SerializeField] private Transform indexFingertip;
        [SerializeField] private Transform thumbFingertip;

        void Update()
        {
            transform.position = (indexFingertip.transform.position + thumbFingertip.transform.position ) / 2;
        }
    }
}

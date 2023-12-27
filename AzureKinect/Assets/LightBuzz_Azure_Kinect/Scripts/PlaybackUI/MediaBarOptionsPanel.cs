using System;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;


namespace LightBuzz.Kinect4Azure
{
    public class MediaBarOptionsPanel : MonoBehaviour
    {
        [SerializeField] private Toggle[] speedToggles;

        public EnableEvent onLoopChanged;
        public MultiplierEvent onSpeedChanged;

        /// <summary>
        /// Invokes event if the loop is enabled or disabled.
        /// </summary>
        /// <param name="newLoop"></param>
        public void UpdateLoop(bool newLoop)
        {
            onLoopChanged?.Invoke(newLoop);
        }

        /// <summary>
        /// Checks which speed is selected and invokes event to notify of the speed.
        /// </summary>
        /// <param name="arg0"></param>
        public void UpdateSpeed(bool arg0)
        {
            if (!arg0) return; // Avoid two invokes by ingoring the toggle that was disabled.

            for (int i = 0; i < speedToggles.Length; i++)
            {
                if (speedToggles[i].isOn)
                {
                    onSpeedChanged?.Invoke(speedToggles[i].GetComponent<SpeedToggle>().SpeedMultiplier);
                    break;
                }
            }
        }

        [Serializable]
        public class EnableEvent : UnityEvent<bool>
        {

        }

        [Serializable]
        public class MultiplierEvent : UnityEvent<float>
        {

        }
    }
}

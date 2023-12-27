using UnityEngine;


namespace LightBuzz.Kinect4Azure
{
    /// <summary>
    /// Indicates the speed the video should play if the toggle is enabled.
    /// </summary>
    public class SpeedToggle : MonoBehaviour
    {
        [SerializeField] private float speedMultiplier;
        public float SpeedMultiplier
        {
            get { return speedMultiplier; }
        }
    }
}

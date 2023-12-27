using UnityEngine;
using UnityEngine.PlayerLoop;
using UnityEngine.UI;


namespace LightBuzz.Kinect4Azure
{
    /// <summary>
    /// Handles the arc image and the text.
    /// </summary>
    public class AngleArc : MonoBehaviour
    {
        [SerializeField] private Image img;
        [SerializeField] private Text text;
         
        
     
        /// <summary>
        /// Updates the world position of the AngleArc.
        /// </summary>
        /// <param name="newPosition"></param>
        public void UpdatePosition(Vector3 newPosition)
        { 
            transform.position = newPosition;
            
            
        }

        /// <summary>
        /// Updates the arc image rotation and fill amount.
        /// Updates the text.
        /// </summary>
        /// <param name="rotationAngle"></param>
        /// <param name="stickmanAngle"></param>
        /// <param name="jointAngle"></param>
        public void UpdateArc(float rotationAngle, float stickmanAngle, float jointAngle)
        {
            img.transform.rotation = Quaternion.Euler(0f, 0f, rotationAngle);
            img.fillAmount = stickmanAngle / 360f;

            text.text = jointAngle.ToString("N0") + "°";
            
        }
    }
}

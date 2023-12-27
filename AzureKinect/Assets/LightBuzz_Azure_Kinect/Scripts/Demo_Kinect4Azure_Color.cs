/**
 *
 * @brief Azure Kinect 에서 업데이트 되는 Frame에 Color값을 입혀주는 코드
 * @author Woosung Shim
 * @date 2021-11-03
 * @version 1.0.0
 * 
 */
using UnityEngine;


namespace LightBuzz.Kinect4Azure
{
    public class Demo_Kinect4Azure_Color : MonoBehaviour
    {
        [SerializeField] private Configuration _configuration;
        [SerializeField] private UniformImage _image;
        [SerializeField] private StickmanManager _stickmanManager;

        private KinectSensor _sensor;

        private void Start()
        {
            _sensor = KinectSensor.Create(_configuration);

            if (_sensor == null)
            {
                Debug.LogError("Sensor not connected!");
                return;
            }

            _sensor.Open();
        }

        private void Update()
        {
            if (_sensor == null || !_sensor.IsOpen) return;

            Frame frame = _sensor.Update();

            if (frame != null)
            {
                if (frame.ColorFrameSource != null)
                {
                    _image.Load(frame.ColorFrameSource);
                }

                if (frame.BodyFrameSource != null)
                {
                    _stickmanManager.Load(frame.BodyFrameSource.Bodies);
                }
            }
        }

        private void OnDestroy()
        {
            _sensor?.Close();
        }
    }
}

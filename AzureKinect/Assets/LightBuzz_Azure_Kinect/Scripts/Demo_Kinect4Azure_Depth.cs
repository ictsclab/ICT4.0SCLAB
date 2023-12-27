/**
 *
 * @brief Azure Kinect Sensor에 업데이트 되는 Frame에 Depth 정보를 입혀주는 코드
 * @author Woosung Shim
 * @date 2021-11-03
 * @version 1.0.0
 * 
 */
using UnityEngine;


namespace LightBuzz.Kinect4Azure
{
    public class Demo_Kinect4Azure_Depth : MonoBehaviour
    {
        [SerializeField] private Configuration _configuration;
        [SerializeField] [Range(1000, 10000)] private ushort _maxDepth = 8000;
        [SerializeField] private DepthVisualization _visualization = DepthVisualization.Grayscale;
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
                if (frame.DepthFrameSource != null)
                {
                    _image.Load(frame.DepthFrameSource, _maxDepth, _visualization);
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

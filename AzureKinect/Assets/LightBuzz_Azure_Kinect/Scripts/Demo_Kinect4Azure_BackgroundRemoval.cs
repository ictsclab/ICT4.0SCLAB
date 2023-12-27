/**
 *
 * @brief Unity 카메라 배경 Default 설정
 * @author Woosung Shim
 * @date 2021-11-03
 * @version 1.0.0
 * 
 */
using Microsoft.Azure.Kinect.Sensor;
using UnityEngine;


namespace LightBuzz.Kinect4Azure
{
    public class Demo_Kinect4Azure_BackgroundRemoval : MonoBehaviour
    {
        [SerializeField] private Configuration _configuration;
        [SerializeField] private UniformImage _image;
        [SerializeField] private StickmanManager _stickmanManager;
        
        private KinectSensor _sensor;
        private Color32[] _colors;

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
                if (frame.ColorFrameSource != null && frame.UserFrameSource != null &&
                    frame.ColorFrameSource.PointCloud != null && frame.UserFrameSource.Data != null)
                {
                    BGRA[] colorData = frame.ColorFrameSource.PointCloud;
                    byte[] userData = frame.UserFrameSource.Data;

                    int width = frame.UserFrameSource.Width;
                    int height = frame.UserFrameSource.Height;
                    int size = width * height;

                    if (_colors == null) _colors = new Color32[size];

                    if (colorData != null && userData != null)
                    {
                        for (int i = 0; i < size; i++)
                        {
                            if (userData[i] != UserFrameSource.Background)
                            {
                                _colors[i].b = colorData[i].B;
                                _colors[i].g = colorData[i].G;
                                _colors[i].r = colorData[i].R;
                                _colors[i].a = colorData[i].A;
                            }
                            else
                            {
                                _colors[i] = Color.green;
                            }
                        }

                        _image.Load(_colors, width, height);
                    }
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

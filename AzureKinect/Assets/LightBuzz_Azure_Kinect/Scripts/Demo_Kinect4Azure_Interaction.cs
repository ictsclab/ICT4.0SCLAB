/**
 *
 * @brief 사용자가 Unity를 실행했을때 상호작용을 관리하는 Default 설정 값
 * @author Woosung Shim
 * @date 2021-11-03
 * @version 1.0.0
 * 
 */
using UnityEngine;
using UnityEngine.UI;

namespace LightBuzz.Kinect4Azure
{
    public class Demo_Kinect4Azure_Interaction: MonoBehaviour
    {
        [SerializeField] private Configuration _configuration;
        [SerializeField] private UniformImage _image;
        [SerializeField] private StickmanManager _stickmanManager;
        [SerializeField] private HandCursor _cursor;
        [SerializeField] private HandButton[] _buttons;

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

                    Body body = frame.BodyFrameSource.Bodies?.Closest();

                    _cursor.Load(body, _image);

                    foreach (HandButton button in _buttons)
                    {
                        button.Load(_cursor);
                    }
                }
            }
        }

        private void OnDestroy()
        {
            _sensor?.Close();
        }

        public void Button1_Click()
        {
            Debug.Log("Clicked Button 1");
        }

        public void Button2_Click()
        {
            Debug.Log("Clicked Button 2");
        }
    }
}

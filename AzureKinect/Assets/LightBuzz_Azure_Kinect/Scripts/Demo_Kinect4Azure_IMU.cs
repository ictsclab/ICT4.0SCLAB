/**
 *
 * @brief Unity Gyro_Sensor를 이용한 IMU Data 받아오는 Default 코드
 * @author Woosung Shim
 * @date 2021-11-03
 * @version 1.0.0
 * 
 */
using UnityEngine;
using UnityEngine.UI;

namespace LightBuzz.Kinect4Azure
{
    public class Demo_Kinect4Azure_IMU : MonoBehaviour
    {
        [SerializeField] private Configuration _configuration;
        [SerializeField] private Text _temperatureText;

        [SerializeField] private Transform _sensorModel;

        [SerializeField] private Transform _accelerometerGizmo;
        [SerializeField] private Transform _gyroscopeGizmo;

        [SerializeField] private Text _pitchText;
        [SerializeField] private Text _yawText;
        [SerializeField] private Text _rollText;

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

        private void OnDestroy()
        {
            _sensor?.Close();
        }

        private void Update()
        {
            if (_sensor == null || !_sensor.IsOpen) return;

            Frame frame = _sensor.Update();

            if (frame != null)
            {
                UpdateTemperature(frame.IMUFrameSource.Temperature);

                IMU accelerometer = frame.IMUFrameSource.Accelerometer;
                IMU gyroscope = frame.IMUFrameSource.Gyroscope;

                UpdateAccelerometerGizmo(accelerometer);
                UpdateGyroscopeGizmo(gyroscope);

                UpdateKinectRotation(accelerometer);
            }
        }

        private void UpdateGyroscopeGizmo(IMU imu)
        {
            _gyroscopeGizmo.transform.rotation = Quaternion.Euler(-imu.Pitch(), imu.Yaw(), imu.Roll());
        }

        private void UpdateAccelerometerGizmo(IMU imu)
        {
            _accelerometerGizmo.transform.rotation = Quaternion.Euler(-imu.Pitch(), imu.Yaw(), imu.Roll());
        }

        private void UpdateKinectRotation(IMU imu)
        {
            _sensorModel.transform.rotation = Quaternion.Euler(-imu.Pitch(), imu.Yaw(), imu.Roll());

            _pitchText.text = "Pitch: " + imu.Pitch().ToString("N0") + "°";
            _yawText.text = "Yaw: " + imu.Yaw().ToString("N0") + "°";
            _rollText.text = "Roll: " + imu.Roll().ToString("N0") + "°";
        }

        private void UpdateTemperature(float celcius)
        {
            float fahrenheit = celcius * 1.8f + 32.0f;

            _temperatureText.text = "Temperature: " + celcius.ToString("N0") + "°C (" + fahrenheit.ToString("N0") + "°F)";
        }
    }
}

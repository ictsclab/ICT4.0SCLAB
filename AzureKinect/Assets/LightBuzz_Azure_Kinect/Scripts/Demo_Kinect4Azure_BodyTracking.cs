/**
 *
 * @brief Azure Kinect Body Tracking Default 설정
 * @author Woosung Shim
 * @date 2021-11-03
 * @version 1.0.0
 * 
 */
using LightBuzz.Kinect4Azure;
using System.Collections.Generic;
using UnityEngine;

public class Demo_Kinect4Azure_BodyTracking : MonoBehaviour
{
    [SerializeField] private Configuration _configuration;
    [SerializeField] private StickmanManager _stickmanManager;

    [Tooltip("The rotation and zoom speed when using the left/right/top/down arrow keys or the mouse wheel.")]
    [Range(0.0f, 1.0f)]
    [SerializeField] private float _speed = 0.5f;

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
            List<Body> bodies = frame.BodyFrameSource?.Bodies;

            _stickmanManager.Load(bodies);
        }
    }

    private void LateUpdate()
    {
        Vector3 cameraPosition = Camera.main.transform.localPosition;
        Vector3 originPosition = Vector3.zero;
        float angle = _speed * 100.0f * Time.deltaTime;

        if (Input.GetKey(KeyCode.RightArrow))
        {
            Camera.main.transform.RotateAround(originPosition, Vector3.up, angle);
        }

        if (Input.GetKey(KeyCode.LeftArrow))
        {
            Camera.main.transform.RotateAround(originPosition, Vector3.down, angle);
        }

        if (Input.GetKey(KeyCode.UpArrow))
        {
            Camera.main.transform.RotateAround(originPosition, Vector3.right, angle);
        }

        if (Input.GetKey(KeyCode.DownArrow))
        {
            Camera.main.transform.RotateAround(originPosition, Vector3.left, angle);
        }

        if (Input.mouseScrollDelta != Vector2.zero)
        {
            Camera.main.transform.localPosition = new Vector3(cameraPosition.x, cameraPosition.y, cameraPosition.z + Input.mouseScrollDelta.y * _speed);
        }
    }
}

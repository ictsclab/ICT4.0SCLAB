/**
 *
 * @brief Default 설정값
 * @author Woosung Shim
 * @date 2021-11-03
 * @version 1.0.0
 * 
 */
using System.Collections.Generic;
using UnityEngine;


namespace LightBuzz.Kinect4Azure
{
    public class Demo_Kinect4Azure_Floor : MonoBehaviour
    {
        [SerializeField] private Configuration _configuration;
        [SerializeField] private UniformImage _image;
        [SerializeField] private Transform _terrain;
        
        private Dictionary<JointType, JointType> _parentJointMap = new Dictionary<JointType, JointType>
        {
            { JointType.Pelvis, JointType.Head },
            { JointType.SpineNaval, JointType.Pelvis },
            { JointType.SpineChest, JointType.SpineNaval },
            { JointType.Neck, JointType.SpineChest },
            { JointType.ClavicleLeft, JointType.SpineChest },
            { JointType.ShoulderLeft, JointType.ClavicleLeft },
            { JointType.ElbowLeft, JointType.ShoulderLeft },
            { JointType.WristLeft, JointType.ElbowLeft },
            { JointType.HandLeft, JointType.WristLeft },
            { JointType.HandtipLeft, JointType.HandLeft },
            { JointType.ThumbLeft, JointType.HandLeft },
            { JointType.ClavicleRight, JointType.ClavicleRight },
            { JointType.ShoulderRight, JointType.ClavicleRight },
            { JointType.ElbowRight, JointType.ShoulderRight },
            { JointType.WristRight, JointType.ElbowRight },
            { JointType.HandRight, JointType.WristRight },
            { JointType.HandtipRight, JointType.HandRight },
            { JointType.ThumbRight, JointType.HandRight },
            { JointType.HipLeft, JointType.Pelvis },
            { JointType.KneeLeft, JointType.HipLeft },
            { JointType.AnkleLeft, JointType.KneeLeft },
            { JointType.FootLeft, JointType.AnkleLeft },
            { JointType.HipRight, JointType.Pelvis },
            { JointType.KneeRight, JointType.HipRight },
            { JointType.AnkleRight, JointType.KneeRight },
            { JointType.FootRight, JointType.AnkleRight },
            { JointType.Head, JointType.Neck },
            { JointType.Nose, JointType.Head },
            { JointType.EyeLeft, JointType.Head },
            { JointType.EarLeft, JointType.Head },
            { JointType.EyeRight, JointType.Head },
            { JointType.EarRight, JointType.Head },
        };

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

                if (frame.FloorFrameSource != null)
                {
                    UpdateFloor(frame.FloorFrameSource.Floor);
                }
            }
        }

        private void OnDestroy()
        {
            _sensor?.Close();
        }

        private void UpdateFloor(Floor floor)
        {
            //var q = Quaternion.LookRotation(new Vector3(floor.X, floor.Y, floor.Z));
            //q.EulerAngles = new Vector3(q.eulerAngles.x, q.eulerAngles.y, q.eulerAngles.z);

            _terrain.position = new Vector3(0f, -floor.Height, 0f);
            _terrain.rotation = UnityEngine.Quaternion.LookRotation(new Vector3(floor.X, floor.Y, floor.Z));
        }
    }
}

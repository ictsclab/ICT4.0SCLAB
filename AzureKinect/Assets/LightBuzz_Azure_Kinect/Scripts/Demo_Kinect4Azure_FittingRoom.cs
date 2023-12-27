/**
 *
 * @brief Default 설정값
 * @author Woosung Shim
 * @date 2021-11-03
 * @version 1.0.0
 * 
 */
using LightBuzz.Kinect4Azure.Avateering;
using UnityEngine;
using Avatar = LightBuzz.Kinect4Azure.Avateering.Avatar;

namespace LightBuzz.Kinect4Azure
{
    public class Demo_Kinect4Azure_FittingRoom : MonoBehaviour
    {
        [SerializeField] private Configuration _configuration;
        [SerializeField] private UniformImage _image;
        [SerializeField] private Avatar[] _avatars;

        private KinectSensor _sensor;

        [Range(-1.0f, 1.0f)]
        [SerializeField] private float _scaleModifier = 0.25f;

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
                    _image.Load(frame.ColorFrameSource);

                if (frame.BodyFrameSource != null)
                {
                    var bodies = frame.BodyFrameSource.Bodies;

                    for (int i = 0; i < bodies.Count; i++)
                    {
                        UpdateAvatar(_avatars[i], bodies[i]);
                    }
                }
            }
        }

        private void UpdateAvatar(Avatar avatar, Body body)
        {
            if (body == null) return;

            Vector2 neck = _image.GetPosition(body.Joints[JointType.Neck].PositionColor);
            Vector2 pelvis = _image.GetPosition(body.Joints[JointType.Pelvis].PositionColor);

            Vector3 stickmanDist = neck - pelvis;

            Vector3 centerPos = pelvis;
            centerPos *= _image.transform.lossyScale.x;
            centerPos.x *= -1f;
            centerPos += _image.transform.position;

            avatar.Update(body);
            avatar.PositionBonesAtPoint(centerPos);

            Bone b1 = avatar.GetBone(HumanBodyBones.Neck);
            Bone b2 = avatar.GetBone(HumanBodyBones.Hips);

            if (b1 == null || b2 == null) return;

            Vector3 avatarDist = b1.OriginalPosition - b2.OriginalPosition;

            float scale = stickmanDist.magnitude / avatarDist.magnitude;
            scale *= _scaleModifier;

            avatar.ApplyScaleAtBones(scale);
        }

        private void OnDestroy()
        {
            _sensor?.Close();
        }
    }
}

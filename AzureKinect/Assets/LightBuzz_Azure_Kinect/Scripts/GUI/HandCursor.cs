using UnityEngine;
using UnityEngine.UI;

namespace LightBuzz.Kinect4Azure
{
    public class HandCursor : MonoBehaviour
    {
        private Image _cursorImage;

        private Vector2 _previous = Vector2.zero;

        private void Start()
        {
            _cursorImage = GetComponent<Image>();
        }

        public void Load(Body body, UniformImage image)
        {
            if (body == null) return;
            if (image == null) return;

            int width = image.Width;
            int height = image.Height;

            Joint elbowLeft = body.Joints[JointType.ElbowLeft];
            Joint elbowRight = body.Joints[JointType.ElbowRight];
            Joint wristLeft = body.Joints[JointType.WristLeft];
            Joint wristRight = body.Joints[JointType.WristRight];

            bool left = wristLeft.TrackingState != TrackingState.None && wristLeft.PositionColor.Y < wristRight.PositionColor.Y;

            Vector2D elbow = left ? elbowLeft.PositionColor : elbowRight.PositionColor;
            Vector2D wrist = left ? wristLeft.PositionColor : wristRight.PositionColor;

            Vector2D shoulderLeft = body.Joints[JointType.ShoulderLeft].PositionColor;
            Vector2D shoulderRight = body.Joints[JointType.ShoulderRight].PositionColor;

            float distance = Calculations.Distance(shoulderLeft, shoulderRight);

            float minX = elbow.X - distance;
            if (minX < 0.0f) minX = 0.0f;

            float maxX = elbow.X + distance;
            if (maxX > width) maxX = width;

            float minY = elbow.Y - distance;
            if (minY < 0.0f) minY = 0.0f;

            float maxY = elbow.Y + distance;
            if (maxY > height) maxY = height;

            float factorX = minX != maxX ? (wrist.X - minX) / (maxX - minX) : 0.0f;
            float factorY = minY != maxY ? (wrist.Y - minY) / (maxY - minY) : 0.0f;

            float x = width * factorX;
            float y = height * factorY;

            float angle = 90.0f - Calculations.Rotation(elbow, wrist, Axis.Z);
            if (wrist.X > elbow.X) angle = -angle;

            Vector3 position = Vector2.Lerp(_previous, new Vector2(x, y), 0.2f);
            Vector3 rotation = new Vector3(0.0f, 0.0f, angle);
            Vector3 scale = new Vector3(left ? 1.0f : -1.0f, 1.0f, 1.0f);

            _previous = position;

            _cursorImage.transform.localPosition = image.GetPosition(position);
            _cursorImage.transform.localRotation = UnityEngine.Quaternion.Euler(rotation);
            _cursorImage.transform.localScale = scale;
        }
    }
}
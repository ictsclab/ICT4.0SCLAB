using System;
using System.IO;
using System.Net.NetworkInformation;
using System.Text;
using System.Threading;
using UnityEngine;
using UnityEngine.ParticleSystemJobs;
using UnityEngine.UIElements;

namespace LightBuzz.Kinect4Azure
{
    public enum CoordinateSpace
    {
        World,
        Color,
        Depth
    }

    public class Stickman : MonoBehaviour
    {

        
        [SerializeField] private CoordinateSpace _space = CoordinateSpace.World;
        [SerializeField] private Transform[] _points = new Transform[Enum.GetValues(typeof(JointType)).Length];
        [SerializeField] private LineRenderer[] _lines = new LineRenderer[Enum.GetValues(typeof(JointType)).Length];
        protected Image image;
        float count = 0;
        float p6;
        private readonly Tuple<JointType, JointType>[] _bones =
        {
            Tuple.Create(JointType.EarLeft, JointType.EyeLeft),
            Tuple.Create(JointType.EyeLeft, JointType.Nose),
            Tuple.Create(JointType.Nose, JointType.EyeRight),
            Tuple.Create(JointType.EyeRight, JointType.EarRight),
            Tuple.Create(JointType.Nose, JointType.Head),
            Tuple.Create(JointType.Head, JointType.Neck),
            Tuple.Create(JointType.Neck, JointType.SpineChest),
            Tuple.Create(JointType.Neck, JointType.ClavicleLeft),
            Tuple.Create(JointType.Neck, JointType.ClavicleRight),
            Tuple.Create(JointType.ClavicleLeft, JointType.ShoulderLeft),
            Tuple.Create(JointType.ClavicleRight, JointType.ShoulderRight),
            Tuple.Create(JointType.ClavicleRight, JointType.ShoulderRight),
            Tuple.Create(JointType.ShoulderLeft, JointType.ElbowLeft),
            Tuple.Create(JointType.ShoulderRight, JointType.ElbowRight),
            Tuple.Create(JointType.ElbowLeft, JointType.WristLeft),
            Tuple.Create(JointType.ElbowRight, JointType.WristRight),
            Tuple.Create(JointType.WristLeft, JointType.HandLeft),
            Tuple.Create(JointType.WristRight, JointType.HandRight),
            Tuple.Create(JointType.HandLeft, JointType.HandtipLeft),
            Tuple.Create(JointType.HandRight, JointType.HandtipRight),
            Tuple.Create(JointType.HandLeft, JointType.ThumbLeft),
            Tuple.Create(JointType.HandRight, JointType.ThumbRight),
            Tuple.Create(JointType.SpineChest, JointType.SpineNaval),
            Tuple.Create(JointType.SpineNaval, JointType.Pelvis),
            Tuple.Create(JointType.Pelvis, JointType.HipLeft),
            Tuple.Create(JointType.Pelvis, JointType.HipRight),
            Tuple.Create(JointType.HipLeft, JointType.KneeLeft),
            Tuple.Create(JointType.HipRight, JointType.KneeRight),
            Tuple.Create(JointType.KneeLeft, JointType.AnkleLeft),
            Tuple.Create(JointType.KneeRight, JointType.AnkleRight),
            Tuple.Create(JointType.AnkleLeft, JointType.FootLeft),
            Tuple.Create(JointType.AnkleRight, JointType.FootRight),
        };

        /// <summary>
        /// Gets or set the coordinate space of the stick figure.
        /// </summary>
        public CoordinateSpace Space
        {
            get => _space;
            set => _space = value;
        }

        internal Transform[] Points => _points;
        internal LineRenderer[] Lines => _lines;

        private void Start()
        {
            if (_space == CoordinateSpace.World) return;

            // Enlarge the visual objects when in 2D space.
            foreach (Transform point in _points)
            {
                point.localScale *= 1000.0f;
            }

            foreach (LineRenderer line in _lines)
            {
                line.startWidth *= 10.0f;
                line.endWidth *= 10.0f;
            }
            
        }

        /// <summary>
        /// Loads the specified body object to the current stickman (WORLD position).
        /// </summary>
        /// <param name="body">The body object to load.</param>
        public void Load(Body body)
        {
            for (int i = 0; i < _points.Length; i++)
            {
                Joint joint = body.Joints[(JointType) i];
                Vector3 position = joint.Position;

                _points[i].position = new Vector3(position.x, -position.y, position.z);
            }

            for (int i = 0; i < _bones.Length; i++)
            {
                Joint joint1 = body.Joints[_bones[i].Item1];
                Joint joint2 = body.Joints[_bones[i].Item2];

                Vector3 position1 = new Vector3(joint1.Position.X, -joint1.Position.Y, joint1.Position.Z);
                Vector3 position2 = new Vector3(joint2.Position.X, -joint2.Position.Y, joint2.Position.Z);
                
                _lines[i].SetPosition(0, position1);
                _lines[i].SetPosition(1, position2);
            }
        }
        public Vector2 GetPosition(Vector2 point)
        {
            // Calculate local position
            Vector3 pos = Vector3.zero;
            Transform t = transform;
            bool hasParent = t.parent != null;
            while (hasParent)
            {
                pos += t.localPosition;
                t = t.parent;
                hasParent = t.parent != null;
            }
            image = GetComponent<Image>();
            float scaledWidth = t.localPosition.x * t.localPosition.z;
            float scaledHeight = t.localPosition.y * t.localPosition.z;

            return new Vector2(
                (point.x / scaledWidth - scaledWidth * 0.5f) + pos.x,
                (point.y / scaledHeight - scaledHeight * 0.5f) + pos.y);
            
        }
        /// <summary>
        /// Loads the specified body object to the current stickman (Color or Depth position).
        /// </summary>
        /// <param name="body">The body object to load.</param>
        /// <param name="image">The image to overlay the body on.</param>
        public void Load(Body body, UniformImage image)
        {
            

            for (int i = 0; i < _points.Length; i++)
            {
                _points[i].localPosition = GetPositionOfJointInImage(body.Joints[(JointType) i], image);
            }

            for (int i = 0; i < _lines.Length; i++)
            {
                Tuple<JointType, JointType> pair = _bones[i];

                Vector2 p1 = _points[(int) pair.Item1].localPosition;
                Vector2 p2 = _points[(int) pair.Item2].localPosition;

               
                
                
                _lines[i].enabled = true;
                _lines[i].SetPosition(0, p1);
                _lines[i].SetPosition(1, p2);
                
                float p3 = p1.x;
                float p4 = p1.x -1;
                float p5 = (float)((p3/p4) - 0.052);
                if ( 0.94 <p5)
                {

                    if (p5 < 1)
                    {
                        count++;
                        p6 += p5;
                        float cp = p6 / count;
                        //Debug.Log(p6);
                        //Debug.Log(count);
                        Debug.Log(cp +" mAp");
                       
            }
                    }
                }
               
                        
        }
        

        /// <summary>
        /// Calculates the local position in the image of a joint.
        /// </summary>
        /// <param name="joint">The body object.</param>
        /// <param name="image">The uniform image.</param>
        /// <returns>The local position of the joint in the image.</returns>
        public Vector3 GetPositionOfJointInImage(Joint joint, UniformImage image)
        {
            Vector2D point = _space == CoordinateSpace.Color ? joint.PositionColor : joint.PositionDepth;

            return image.GetPosition(point);
        }
    }
}
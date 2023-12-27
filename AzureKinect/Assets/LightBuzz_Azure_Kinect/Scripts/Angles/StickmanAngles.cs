using System.Threading;
using UnityEditor.UIElements;
using UnityEngine;
using System.Collections.Generic;
using System;


namespace LightBuzz.Kinect4Azure
{
    /// <summary>
    /// Shows angle arcs in selected joints.
    /// </summary>
    public class StickmanAngles : MonoBehaviour
    {
       /* [System.Serializable]
        public class JointData
        {
            public string name;
            public string positions;
        }
       [System.Serializable]
        public class JointDataListWrapper
        {
            public JointData[] jointsDatas;
            
        }
         
        [Header("- JointDataWrite Setting")]
        [SerializeField] private JointDataWriteDescriptor jointDataWriteDescriptor;
        private List<JointData> jointDatas = new List<JointData>();
        private struct JointDataWriteDescriptor
        {
            public string filePathAndName;
            public bool isActive;
        }*/
        private const double V = 0.02;
        private Stickman stickman;
        [SerializeField] private GameObject angleArcPrefab;
        float sum = 0;
        float deltaTime = 0;
        float a;
        
        float c;
        float e;
        int count = 0;
        /// <summary>
        /// List of arcs to show.
        /// </summary>
        [SerializeField] private ArcJoints[] arcJoints;

        private void Update()
        {
            deltaTime += (Time.deltaTime - deltaTime) * 0.1f;
            
        }
        ///<summary>Contains angle arcs for elbows, and knees.</summary>
        private AngleArc[] angleArcs;

        public void RegisterStickman(Stickman newStickman)
        {
            stickman = newStickman;

            if (angleArcs != null)
            {
                for (int i = 0; i < angleArcs.Length; i++)
                {
                    Destroy(angleArcs[i]);
                    
                }
            }

            angleArcs = new AngleArc[arcJoints.Length];
            for (int i = 0; i < arcJoints.Length; i++)
            {
                angleArcs[i] = Instantiate(angleArcPrefab, transform).GetComponent<AngleArc>();
                
            }
        }

        /// <summary>
        /// Updates the arc in the joints.
        /// </summary>
        /// <param name="body"></param>
        public void UpdateAngles(Body body)
        {
            
            for (int i = 0; i < angleArcs.Length; i++)
            {
                count++;
                UpdateJoint(angleArcs[i], body, arcJoints[i]);
                
                a += deltaTime * 1000.0f*32;
               /* float b = a / count;
                
            float d = a / count-1;
                float f = d/b;
                c = (float)(f-0.02);
                e = c;
               Debug.Log(c +"실제 수치");*/
               // Debug.Log(e+"평균");
          
                
            }

            
               
                 
            // ms
            
            //Debug.Log("fps" + 1.0f/(32*deltaTime));
              
          
            
        }
        
        /// <summary>
        /// Calculates the angle of the joints.
        /// Calculates the angle of the stickman to show the arc correctly.
        /// Shows the angle in the text.
        /// </summary>
        /// <param name="arc"></param>
        /// <param name="body"></param>
        /// <param name="arcJoints"></param>
        private void UpdateJoint(AngleArc arc, Body body, ArcJoints arcJoints)
        {
            
            Vector3 stickmanJointCenter = stickman.Points[(int)arcJoints.jointCenter].position;
            arc.UpdatePosition(stickmanJointCenter);
            

            // Calculate angle.
            Vector3 start = body.Joints[arcJoints.jointStart].Position;
            Vector3 center = body.Joints[arcJoints.jointCenter].Position;
            Vector3 end = body.Joints[arcJoints.jointEnd].Position;

            Vector3 vectorA = start - center;
            Vector3 vectorB = end - center;
            float angle = Vector3.Angle(vectorA, vectorB);

            // Show arc
            Vector3 stickmanStart = stickman.Points[(int)arcJoints.jointStart].position;
            Vector3 stickmanEnd = stickman.Points[(int)arcJoints.jointEnd].position;
            Vector3 stickmanAngleDirection = stickmanJointCenter - stickmanStart;
            float rotationAngle = Mathf.Atan2(stickmanAngleDirection.y, stickmanAngleDirection.x) * Mathf.Rad2Deg;
            Vector3 stickmanVA = stickmanStart - stickmanJointCenter;
            Vector3 stickmanVB = stickmanEnd - stickmanJointCenter;
            float stickmanAngle = Vector3.Angle(stickmanVA, stickmanVB);
            float sign = Mathf.Sign(stickmanVA.x * stickmanVB.y - stickmanVA.y * stickmanVB.x);

            if (sign < 0f)
                rotationAngle -= 90f;
            else
                rotationAngle += stickmanAngle - 90f;

            arc.UpdateArc(rotationAngle, stickmanAngle, angle);
            
           
        }
        
    }

    /// <summary>
    /// Joints that are calculated for the arc.
    /// </summary>
    [System.Serializable]
    public struct ArcJoints
    {
        public JointType jointStart;
        public JointType jointCenter;
        public JointType jointEnd;

    }
}

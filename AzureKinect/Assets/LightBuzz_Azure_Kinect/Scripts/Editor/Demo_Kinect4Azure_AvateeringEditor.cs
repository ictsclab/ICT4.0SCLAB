using UnityEditor;
using UnityEngine;

namespace LightBuzz.Kinect4Azure.Avateering_Editor
{
    [CustomEditor(typeof(Demo_Kinect4Azure_Avateering))]
    public class Demo_Kinect4Azure_AvateeringEditor : Editor
    {
        public override void OnInspectorGUI()
        {
            DrawDefaultInspector();

            Demo_Kinect4Azure_Avateering script = (Demo_Kinect4Azure_Avateering)target;

            if (!Application.isPlaying)
            {
                if (GUILayout.Button("Do T-Pose"))
                {
                    script.DoTPose();
                }
            }
        }
    }
}
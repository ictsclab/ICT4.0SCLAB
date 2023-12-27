using UnityEngine;

namespace LightBuzz.Kinect4Azure
{
    public class LookAtObject : MonoBehaviour
    {
        [SerializeField] private Transform lookAtThis;

        // Update is called once per frame
        void Update()
        {
            transform.LookAt(lookAtThis);
        }
    }
}

using UnityEngine;

public class HandUITarget : MonoBehaviour
{
    [SerializeField] Vector3 handtrackingPos;
    [SerializeField] Vector3 handtrackingRot;
    [SerializeField] Vector3 controllersgPos;
    [SerializeField] Vector3 controllersRot;


    private void Update()
    {
        if (OVRPlugin.GetHandTrackingEnabled())
        {
            transform.localPosition = handtrackingPos;
            transform.localRotation = Quaternion.Euler(handtrackingRot);
        }
        else
        {
            transform.localPosition = controllersgPos;
            transform.localRotation = Quaternion.Euler(controllersRot);
        }
    }
}

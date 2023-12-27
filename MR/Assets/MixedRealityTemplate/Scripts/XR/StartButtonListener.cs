using UnityEngine;
using UnityEngine.Events;

/// <summary>
/// Class to listen to the Start button (Left hand gesture) and invoke an event.
/// </summary>
public class StartButtonListener : MonoBehaviour
{
    [SerializeField] private UnityEvent OnStartButtonPressed;
    void Update()
    {
        if (OVRInput.GetDown(OVRInput.Button.Start, OVRInput.Controller.LTouch))
        {
            OnStartButtonPressed.Invoke();
        }
    }   
}

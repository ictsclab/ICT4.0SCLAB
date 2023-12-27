using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

/// <summary>
/// This class calculates a diamond gesture with hand tracking, and invokes the OnDiamondPinchGesture when a pinch is done while doing the gesture.
/// Inspired in https://youtu.be/OkxyWVT0hoY?t=109
/// </summary>
public class HandTrackingDiamond : MonoBehaviour
{
    [SerializeField] Transform leftIndexFingerTip;
    [SerializeField] Transform righttIndexFingerTip;
    [SerializeField] Transform leftThumbFingerTip;
    [SerializeField] Transform rightThumbFingerTip;
    [SerializeField] OVRHand rightHand;
    [SerializeField] OVRHand leftHand;

    [SerializeField] float fingerMinimumDistance = 0.05f;
    private float gestureCooldown = 0.5f;
    private bool onCooldown;
    private float cooldownTimer = 0;

    [SerializeField] Transform centerEyeAnchor;

    public Transform diamondGesturePosition;

    [HideInInspector] public bool IsShowing;
    public UnityEvent OnDiamondPinchGesture;

    void Update()
    {
        //If handtracking enabled
        if (OVRInput.IsControllerConnected(OVRInput.Controller.Hands))
        {
            if (onCooldown)
            {
                HideGesture();
                cooldownTimer += Time.deltaTime;
                if (cooldownTimer >= gestureCooldown)
                {
                    cooldownTimer = 0;
                    onCooldown = false;
                }
            }
            else
            {
                if (Vector3.Distance(leftIndexFingerTip.position, righttIndexFingerTip.position) < fingerMinimumDistance &&
                        Vector3.Distance(leftThumbFingerTip.position, rightThumbFingerTip.position) < fingerMinimumDistance)
                {
                    IsShowing = true;
                    diamondGesturePosition.transform.position = (leftThumbFingerTip.position + righttIndexFingerTip.position) / 2;
                    diamondGesturePosition.transform.forward = diamondGesturePosition.transform.position - centerEyeAnchor.transform.position;

                    if(rightHand.IsDataHighConfidence && leftHand.IsDataHighConfidence)
                    {
                        if (Vector3.Distance(leftIndexFingerTip.position, leftThumbFingerTip.position) < 0.03f &&
                        Vector3.Distance(righttIndexFingerTip.position, rightThumbFingerTip.position) < 0.03f)
                        {
                            OnDiamondPinchGesture.Invoke();
                            onCooldown = true;
                            HideGesture();
                        }
                    }
                }
                else
                {
                    HideGesture();
                }
            }
        }
    }

    private void HideGesture()
    {
        diamondGesturePosition.transform.position = new Vector3(0, -10, 0);
        IsShowing = false;
    }
}

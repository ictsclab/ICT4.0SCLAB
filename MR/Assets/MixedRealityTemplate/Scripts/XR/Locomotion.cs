using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Chiligames.MixedRealityTemplate
{
    public class Locomotion : MonoBehaviour
    {
        [Header("Continuous Movemet")]
        [SerializeField] bool ContinuousMovementEnabled;
        [SerializeField] float continuousMovementSpeed = 1;
        [SerializeField] float snapTurnRotationAngle = 45f;
        [SerializeField] float snapTurnCooldown = 0.5f;
        private bool snapTurnOnCooldown;
        private float snapTurnCounter;
        //Which controller thumbstick will be used for controlling movement
        [SerializeField] OVRInput.Controller continuousMovementController = OVRInput.Controller.LTouch;
        //Which controller thumbstick will be used for controlling snap rotation
        [SerializeField] OVRInput.Controller snapTurnController = OVRInput.Controller.RTouch;

        [Header("Teleportation")]
        [SerializeField] bool TeleportingEnabled;
        //The mesh that represents the point to teleport
        [SerializeField] MeshRenderer teleportPoint;
        //Which controller thumbstick will be able to trigger teleporting
        [SerializeField] OVRInput.Controller teleportController = OVRInput.Controller.LTouch;
        [SerializeField] OVRInput.Button buttonForTeleportation = OVRInput.Button.PrimaryThumbstickUp;
        //The points from where the teleport ray starts. 0 is left hand, 1 is right hand.
        [SerializeField] private Transform[] teleportingStartPointControllers;
        [SerializeField] private HandTrackingDiamond handTrackingDiamondGesture;
        private bool ableToTeleport;
        private bool teleportWasPressedLastFrame;
        //The layer where teleporting is permitted
        [SerializeField] private LayerMask teleportLayermask;

        [Header("References")]
        [SerializeField] Transform OVRRig;
        [SerializeField] Transform centerEyeAnchor;
        [SerializeField] private CapsuleCollider bodyCollider;
        [SerializeField] private Rigidbody rigidBody;
        [SerializeField] CurvedLaser curvedLaser;
        

        private bool isMoving;

        private void Awake()
        {
            rigidBody.isKinematic = true;
            bodyCollider.isTrigger = true;
            handTrackingDiamondGesture.OnDiamondPinchGesture.AddListener(Teleport);
        }

        void Update()
        {            
            if (ContinuousMovementEnabled && OVRInput.IsControllerConnected(OVRInput.Controller.Touch)) //only if controllers detected
            {
                CheckForContinuousMovement();
                CheckForSnapTurn();
                CheckForCollider();
            }
            if (TeleportingEnabled)
            {
                CheckIfTeleportButton();
            }
        }

        private void CheckIfTeleportButton()
        {
            //If handtracking active
            if (OVRInput.IsControllerConnected(OVRInput.Controller.Hands))
            {
                if (handTrackingDiamondGesture.IsShowing)
                {
                    ShowPointerHandTracking(handTrackingDiamondGesture.diamondGesturePosition.position, handTrackingDiamondGesture.diamondGesturePosition.forward);
                }
                else
                {
                    HidePointer();
                    ableToTeleport = false;
                }
            }
            //If controllers active
            else
            {
                if (OVRInput.Get(buttonForTeleportation, teleportController))
                {
                    ShowPointerController();
                    teleportWasPressedLastFrame = true;
                }
                else
                {
                    if (teleportWasPressedLastFrame)
                    {
                        Teleport();
                        HidePointer();
                        teleportWasPressedLastFrame = false;
                    }
                }
            }
        }

        //Show curve and pointer when using controllers
        private void ShowPointerController()
        {
            RaycastHit hit;
            Transform startingPoint = null;
            if(teleportController == OVRInput.Controller.LTouch)
            {
                startingPoint = teleportingStartPointControllers[0];
            }
            else if (teleportController == OVRInput.Controller.RTouch)
            {
                startingPoint = teleportingStartPointControllers[1];
            }

            if (Physics.Raycast(startingPoint.position, startingPoint.forward, out hit, 10))
            {
                if (teleportPoint.enabled == false)
                {
                    teleportPoint.enabled = true;
                    teleportPoint.transform.position = hit.point;
                }
                var _teleportPoint = hit.point;
                teleportPoint.transform.position = Vector3.Lerp(teleportPoint.transform.position, hit.point, 0.5f);

                if (((1 << hit.collider.gameObject.layer) & teleportLayermask) != 0)
                {
                    teleportPoint.material.color = Color.green;
                    ableToTeleport = true;
                    curvedLaser.DrawCurveValid(startingPoint.position, teleportPoint.transform.position);
                }
                else
                {
                    teleportPoint.material.color = Color.red;
                    ableToTeleport = false;
                    curvedLaser.DrawCurveDenied(startingPoint.position, teleportPoint.transform.position);
                }
            }
            else
            {
                ableToTeleport = false;
                HidePointer();
            }
        }

        //Hide pointer target and curve
        private void HidePointer()
        {
            curvedLaser.Activate(false);
            teleportPoint.enabled = false;
        }

        //Show the point target when using hand tracking
        private void ShowPointerHandTracking(Vector3 _startPoint, Vector3 _direction)
        {
            RaycastHit hit;

            if (Physics.Raycast(_startPoint, _direction, out hit, 10))
            {
                if(teleportPoint.enabled == false)
                {
                    teleportPoint.enabled = true;
                    teleportPoint.transform.position = hit.point;
                }
                var _teleportPoint = hit.point;
                teleportPoint.transform.position = Vector3.Lerp(teleportPoint.transform.position, hit.point, 0.1f);

                if (((1 << hit.collider.gameObject.layer) & teleportLayermask) != 0)
                {
                    teleportPoint.material.color = Color.green;
                    ableToTeleport = true;
                }
                else
                {
                    teleportPoint.material.color = Color.red;
                    ableToTeleport = false;
                }
            }
        }

        //Teleport to teleport point destination
        private void Teleport()
        {
            if (ableToTeleport)
            {
                OVRRig.transform.position = teleportPoint.transform.position;
            }
        }

        //Handle controller continuous movement
        private void CheckForContinuousMovement()
        {
            Vector2 movement = OVRInput.Get(OVRInput.Axis2D.PrimaryThumbstick, continuousMovementController);
            if (movement != Vector2.zero)
            {
                isMoving = true;
                OVRRig.transform.position += (Vector3.ProjectOnPlane(centerEyeAnchor.forward, Vector3.up).normalized * movement.y) * Time.deltaTime * continuousMovementSpeed;
                OVRRig.transform.position += (Vector3.ProjectOnPlane(centerEyeAnchor.right, Vector3.up).normalized * movement.x) * Time.deltaTime * continuousMovementSpeed;

                bodyCollider.height = centerEyeAnchor.position.y;
                bodyCollider.center = new Vector3(centerEyeAnchor.localPosition.x, centerEyeAnchor.localPosition.y / 2, centerEyeAnchor.localPosition.z);
            }
            else
            {
                isMoving = false;
            }
        }

        //Handle snap turn
        private void CheckForSnapTurn()
        {
            if (snapTurnOnCooldown)
            {
                snapTurnCounter += Time.deltaTime;
                if (snapTurnCounter >= snapTurnCooldown)
                {
                    snapTurnOnCooldown = false;
                    snapTurnCounter = 0;
                }
            }
            else
            {
                Vector2 snapTurn = OVRInput.Get(OVRInput.Axis2D.PrimaryThumbstick, snapTurnController);

                if (snapTurn != Vector2.zero)
                {
                    if (snapTurn.x > 0.6f || snapTurn.x < -0.6f)
                    {
                        OVRRig.transform.rotation = Quaternion.Euler(new Vector3(0, transform.rotation.eulerAngles.y + Mathf.Round(snapTurn.x) * snapTurnRotationAngle));
                        snapTurnOnCooldown = true;
                    }
                }
            }
        }

        //enable/disable collider when moving while using continuous movement
        private void CheckForCollider()
        {
            if (isMoving)
            {
                bodyCollider.isTrigger = false;
                rigidBody.isKinematic = false; ;
            }
            else
            {
                rigidBody.isKinematic = true;
                bodyCollider.isTrigger = true;
            }
        }

        private void OnDestroy()
        {
            handTrackingDiamondGesture.OnDiamondPinchGesture.RemoveListener(Teleport);
        }
    }
}

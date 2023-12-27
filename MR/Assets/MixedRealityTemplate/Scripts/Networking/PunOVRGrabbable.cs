using UnityEngine;
using UnityEngine.Events;
using Photon.Pun;
using System;
/// <summary>
/// Class to handle grabbing and object and passing on ownership.
/// </summary>
namespace Chiligames.MixedRealityTemplate
{
    [RequireComponent(typeof(PhotonView))]
    public class PunOVRGrabbable : OVRGrabbable
    {
        public UnityEvent OnGrabbed;
        public event Action<GameObject> OnGrabbedAction;
        public UnityEvent OnReleased;

        private PhotonView photonView;
        private Rigidbody rigidBody;
        [SerializeField] float throwMultiplier = 1;
        private int latestGrabber;

        private void Awake()
        {
            photonView = GetComponent<PhotonView>();
        }

        protected override void Start()
        {
            base.Start();
            rigidBody = gameObject.GetComponent<Rigidbody>();
        }

        override public void GrabBegin(OVRGrabber hand, Collider grabPoint)
        {
            m_grabbedBy = hand;
            m_grabbedCollider = grabPoint;

            photonView.TransferOwnership(PhotonNetwork.LocalPlayer);
            //Change the kinematic state of the object for everyone
            photonView.RPC(nameof(RPC_SetKinematic), RpcTarget.All, true);
            photonView.RPC(nameof(RPC_SaveLastGrabber), RpcTarget.All, PhotonNetwork.LocalPlayer.ActorNumber);

            OnGrabbed.Invoke();
        }

        override public void GrabEnd(Vector3 linearVelocity, Vector3 angularVelocity)
        {
            //We only set the kinematic back to false to us, so physics are only calculated in one client (the owner of the object).
            if(latestGrabber == PhotonNetwork.LocalPlayer.ActorNumber)
            {
                rigidBody.isKinematic = false;
                rigidBody.velocity = linearVelocity * throwMultiplier;
                rigidBody.angularVelocity = angularVelocity;
            }

            m_grabbedBy = null;
            m_grabbedCollider = null;

            OnReleased.Invoke();
            OnGrabbedAction?.Invoke(gameObject);
        }

        public void SetBusy(bool b, OVRGrabber grabber = null)
        {
            if (b)
            {
                m_grabbedBy = grabber;
            }
            else
            {
                m_grabbedBy = null;
            }
        }

        public void SetKinematic(bool b)
        {
            photonView.RPC(nameof(RPC_SetKinematic), RpcTarget.All, b);
        }

        [PunRPC]
        public void RPC_SetKinematic(bool b)
        {
            gameObject.GetComponent<Rigidbody>().isKinematic = b;
        }

        [PunRPC]
        private void RPC_SaveLastGrabber(int n)
        {
            latestGrabber = n;
        }
    }
}


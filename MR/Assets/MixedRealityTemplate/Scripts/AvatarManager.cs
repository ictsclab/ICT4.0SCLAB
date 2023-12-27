using Oculus.Avatar2;
using Oculus.Platform;
using Photon.Pun;
using System.Collections;
using UnityEngine;

/// <summary>
/// This class handles creating each user/player's Avatar (and connecting to the OculusPlatform)
/// </summary>
namespace Chiligames.MixedRealityTemplate
{
    public class AvatarManager : MonoBehaviourPunCallbacks
    {
        [SerializeField] GameObject OVRCameraRig;
        [SerializeField] MeshRenderer fadeOutSphere;
        [SerializeField] Transform centerEyeAnchor;
        [SerializeField] Transform[] spawnPoints;
        private Tweener tweener;
        [SerializeField] GameObject avatarPrefab;
        [SerializeField] GameObject avatarTestPrefab;

        [SerializeField] GameObject photonVoiceSetupPrefab;

        [HideInInspector] public ulong userID = 0;

        bool hasJoinedRoom = false;
        bool userIsEntitled = false;

        private GameObject myAvatarEntity;

        private void Awake()
        {
            tweener = FindObjectOfType<Tweener>();
            fadeOutSphere.gameObject.SetActive(true);

            //Initialize the oculus platform
            try
            {
                Debug.Log("Initializing Core Oculus platform");
                Core.AsyncInitialize().OnComplete(CheckEntitlement);
            }
            catch (UnityException e)
            {
                Debug.LogError("Platform failed to initialize due to exception.");
                Debug.LogException(e);
            }
        }

        private void CheckEntitlement(Message<Oculus.Platform.Models.PlatformInitialize> message)
        {
            Debug.Log("Core Oculus platform initialized");
            Entitlements.IsUserEntitledToApplication().OnComplete(EntitlementCallback);
        }

        void EntitlementCallback(Message msg)
        {
            Debug.Log("Entitlemen tCallback");
            if (msg.IsError)
            {
                Debug.LogError("You are NOT entitled to use this app. Please check if you added the correct ID's and credentials in Oculus>Platform");
                //UnityEngine.Application.Quit();
            }
            else
            {
                Debug.Log("You are entitled to use this app.");
                GetTokens();
            }
        }

        public override void OnJoinedRoom()
        {

            OVRCameraRig.transform.position = spawnPoints[PhotonNetwork.LocalPlayer.ActorNumber % 4].transform.position;
            OVRCameraRig.transform.rotation = spawnPoints[PhotonNetwork.LocalPlayer.ActorNumber % 4].transform.rotation;

            tweener.FadeMaterialColor(fadeOutSphere.material, 0, 1, () => fadeOutSphere.gameObject.SetActive(false));

            hasJoinedRoom = true;
        }

        //Get Access token and user ID from Oculus Platform
        private void GetTokens()
        {
            Users.GetAccessToken().OnComplete(message =>
            {
                if (!message.IsError)
                {
                    OvrAvatarEntitlement.SetAccessToken(message.Data);
                    Users.GetLoggedInUser().OnComplete(message =>
                    {
                        if (!message.IsError)
                        {
                            userID = message.Data.ID;
                            userIsEntitled = true;
                            StartCoroutine(SpawnAvatar());
                        }
                        else
                        {
                            var e = message.GetError();
                        }
                    });
                }
                else
                {
                    var e = message.GetError();
                }
            });
        }

        IEnumerator SpawnAvatar()
        {

            //Wait for all the entitlements and the runner to be ready to spawn
            while (!userIsEntitled || !OvrAvatarEntitlement.AccessTokenIsValid() || !hasJoinedRoom)
            {
                yield return null;
            }
            //Avatar spawning and seting its parent to be the OVR Camera Rig.
            myAvatarEntity = PhotonNetwork.Instantiate(avatarPrefab.name, OVRCameraRig.transform.position, OVRCameraRig.transform.rotation);
            myAvatarEntity.transform.SetParent(OVRCameraRig.transform);
            myAvatarEntity.transform.localPosition = Vector3.zero;
            myAvatarEntity.transform.localRotation = Quaternion.identity;

            //Send an rpc with the Oculus UserID so other users can access to it and load our avatar.
            myAvatarEntity.GetComponent<PhotonView>().RPC(nameof(PunAvatarEntity.RPC_SetOculusID), RpcTarget.AllBuffered, (long)userID);

            //Instantiate the voice setup and set it as a child of the center eye anchor (head).
            var voiceSetup = PhotonNetwork.Instantiate(photonVoiceSetupPrefab.name, centerEyeAnchor.transform.position, centerEyeAnchor.transform.rotation);
            voiceSetup.transform.SetParent(centerEyeAnchor);
            voiceSetup.transform.localPosition = Vector3.zero;
            voiceSetup.transform.localRotation = Quaternion.identity;

            //Lipsync setup for our avatar
            myAvatarEntity.GetComponent<PunAvatarEntity>().SetLipSync(voiceSetup.GetComponent<OvrAvatarLipSyncContext>());
            voiceSetup.GetComponent<OvrAvatarLipSyncContext>().CaptureAudio = true;
        }

        public void ChangeMyAvatar(string assetPath)
        {
            if (myAvatarEntity == null) return;
            myAvatarEntity.GetComponent<PunAvatarEntity>().LoadNewAvatar(assetPath);
        }
    }
}

using Photon.Pun;
using Photon.Realtime;
using UnityEngine;

namespace MRTK.Tutorials.MultiUserCapabilities
{
    public class PhotonRoom : MonoBehaviourPunCallbacks, IInRoomCallbacks
    {
        public static PhotonRoom Room;

        [SerializeField] private GameObject photonUserPrefab = default;
        [SerializeField] private GameObject roverExplorerPrefab = default;
        [SerializeField] private Transform roverExplorerLocation = default;
        [SerializeField] private Transform roverExplorerLocation180 = default;
        [SerializeField] private GameObject Count = default;
        [SerializeField] private GameObject Timer = default;
        [SerializeField] private GameObject Menu = default;
        [SerializeField] private GameObject Timest = default;
        [SerializeField] private GameObject Menuclose = default;

        // private PhotonView pv;
        private Player[] photonPlayers;
        private int playersInRoom;
        private int myNumberInRoom;

        // private GameObject module;
        // private Vector3 moduleLocation = Vector3.zero;

        public override void OnPlayerEnteredRoom(Player newPlayer)
        {
            base.OnPlayerEnteredRoom(newPlayer);
            photonPlayers = PhotonNetwork.PlayerList;
            playersInRoom++;
        }

        private void Awake()
        {
            if (Room == null)
            {
                Room = this;
            }
            else
            {
                if (Room != this)
                {
                    Destroy(Room.gameObject);
                    Room = this;
                }
            }
        }

        public override void OnEnable()
        {
            base.OnEnable();
            PhotonNetwork.AddCallbackTarget(this);
        }

        public override void OnDisable()
        {
            base.OnDisable();
            PhotonNetwork.RemoveCallbackTarget(this);
        }

        private void Start()
        {
            // pv = GetComponent<PhotonView>();

            // Allow prefabs not in a Resources folder
            if (PhotonNetwork.PrefabPool is DefaultPool pool)
            {
                if (photonUserPrefab != null) pool.ResourceCache.Add(photonUserPrefab.name, photonUserPrefab);

                if (roverExplorerPrefab != null) pool.ResourceCache.Add(roverExplorerPrefab.name, roverExplorerPrefab);
                if (Count != null) pool.ResourceCache.Add(Count.name, Count);
                if (Timer != null) pool.ResourceCache.Add(Timer.name, Timer);
                if (Menu != null) pool.ResourceCache.Add(Menu.name, Menu);
                if (Timest != null) pool.ResourceCache.Add(Timest.name, Timest);
                if (Menuclose != null) pool.ResourceCache.Add(Menuclose.name, Menuclose);
            }
        }

        public override void OnJoinedRoom()
        {
            base.OnJoinedRoom();

            photonPlayers = PhotonNetwork.PlayerList;
            playersInRoom = photonPlayers.Length;
            myNumberInRoom = playersInRoom;
            PhotonNetwork.NickName = myNumberInRoom.ToString();

            StartGame();
        }

        private void StartGame()
        {
            CreatPlayer();

            if (!PhotonNetwork.IsMasterClient) return;

            if (TableAnchor.Instance != null) CreateInteractableObjects();
        }

        private void CreatPlayer()
        {
            var player = PhotonNetwork.Instantiate(photonUserPrefab.name, Vector3.zero, Quaternion.identity);
        }

        private void CreateInteractableObjects()
        {
            var position = roverExplorerLocation.position;
            var positionOnTopOfSurface = new Vector3(position.x, position.y + roverExplorerLocation.localScale.y / 2,
                position.z);
            var positionOnTopOfSurface2 = new Vector3(0, 0 + roverExplorerLocation.localScale.y/2,
               position.z);
            var positionOnTopOfSurface3 = new Vector3(1/2, 1/2 + roverExplorerLocation.localScale.y/2,
               position.z);

            var go = PhotonNetwork.Instantiate(roverExplorerPrefab.name, positionOnTopOfSurface,
                roverExplorerLocation.rotation);
            var go2 = PhotonNetwork.Instantiate(Count.name, positionOnTopOfSurface2,
                roverExplorerLocation.rotation);
            var go3 = PhotonNetwork.Instantiate(Timer.name, positionOnTopOfSurface3,
                roverExplorerLocation180.rotation);
            var go4 = PhotonNetwork.Instantiate(Menu.name, positionOnTopOfSurface,
                roverExplorerLocation.rotation);
            var go5 = PhotonNetwork.Instantiate(Timest.name, positionOnTopOfSurface,
                roverExplorerLocation.rotation);
            var go6 = PhotonNetwork.Instantiate(Menuclose.name, positionOnTopOfSurface,
                roverExplorerLocation.rotation);
           
        }

        // private void CreateMainLunarModule()
        // {
        //     module = PhotonNetwork.Instantiate(roverExplorerPrefab.name, Vector3.zero, Quaternion.identity);
        //     pv.RPC("Rpc_SetModuleParent", RpcTarget.AllBuffered);
        // }
        //
        // [PunRPC]
        // private void Rpc_SetModuleParent()
        // {
        //     Debug.Log("Rpc_SetModuleParent- RPC Called");
        //     module.transform.parent = TableAnchor.Instance.transform;
        //     module.transform.localPosition = moduleLocation;
        // }
    }
}

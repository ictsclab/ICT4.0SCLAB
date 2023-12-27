using Photon.Pun;
using UnityEngine;
using Photon.Realtime;

public class memorycounter : MonoBehaviour
{
    void Update()
    {
        if (PhotonNetwork.IsConnected && PhotonNetwork.NetworkingClient.LoadBalancingPeer != null)
        {
            Debug.Log("Ping: " + PhotonNetwork.GetPing() + " ms");
            Debug.Log("Incoming Total Bytes: " + PhotonNetwork.NetworkingClient.LoadBalancingPeer.TrafficStatsIncoming.TotalPacketBytes);
            Debug.Log("Outgoing Total Bytes: " + PhotonNetwork.NetworkingClient.LoadBalancingPeer.TrafficStatsOutgoing.TotalPacketBytes);
        }
    }
}

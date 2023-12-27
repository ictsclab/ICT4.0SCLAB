using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using TMPro;

public class ConnectionUI : MonoBehaviour
{
    public TMP_InputField ipInputField; // Drag the IP InputField in the inspector.
    public TMP_InputField portInputField; // Drag the Port InputField in the inspector.

    private Simulatermodified simulator; // Reference to the Simulatermodified script

    private void Awake()
    {
        simulator = GetComponent<Simulatermodified>();
        if (simulator == null)
        {
            Debug.LogError("Failed to get Simulatermodified component");
        }

        ipInputField.text = PlayerPrefs.GetString("SavedIP", "");
        portInputField.text = PlayerPrefs.GetString("SavedPort", "");
    }

    public void OnConnectButtonClick()
    {
        string ip = ipInputField.text;
        int port = int.Parse(portInputField.text);
        Debug.Log($"Received IP: {ip} and Port: {port} from input fields");

        simulator.StoreConnectionInfo(ip, port);
        simulator.ConnectToServer(ip, port); // 추가: 서버에 연결

        PlayerPrefs.SetString("SavedIP", ip);
        PlayerPrefs.SetString("SavedPort", port.ToString());
        PlayerPrefs.Save();
        Debug.Log("Connection info saved to PlayerPrefs");
    }
}

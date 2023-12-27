using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine.UI;

public class Scene : MonoBehaviour
{
    // Start is called before the first frame update
    public void OnMouseUpAsButton()
    {
        SceneManager.LoadScene("Multi");
    }
    public void st()
    {
         SceneManager.LoadScene("Start Scene");
         
    }
    public void Disconnect() => PhotonNetwork.Disconnect();
    public void tuto()
    {
        
        SceneManager.LoadScene("Tutorial");
    }

    public void exitgame()
    {

        Application.Quit();

    }
}

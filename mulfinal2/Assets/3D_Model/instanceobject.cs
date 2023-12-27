using MRTK.Tutorials.MultiUserCapabilities;
using System;
using System.Collections;
using Photon.Pun;
using System.Collections.Generic;
using UnityEngine;

public class instanceobject : MonoBehaviour
{

    GameObject ForDestroy;
    GameObject ForDestroy2;
    GameObject ForDestroy3;
    GameObject ForDestroy4;
    GameObject ForDestroy5;
    [SerializeField] private Transform roverExplorerLocation = default;
    public GameObject hidebt;

    private void Update()
    {
        ForDestroy = GameObject.Find("leglegleg Variant(Clone)");
        ForDestroy2 = GameObject.Find("LeftLeg_HaThae(Clone)");
        ForDestroy3 = GameObject.Find("LeftLeg_DaeThae(Clone)");
        ForDestroy4 = GameObject.Find("RightLeg_DaeThae(Clone)");
        ForDestroy5 = GameObject.Find("RightLeg_HaThae(Clone)");

    }
    
    public void legin()
    {
        var position = roverExplorerLocation.position;
            var positionOnTopOfSurface = new Vector3(position.x, position.y + roverExplorerLocation.localScale.y / 2,
                position.z);
        Destroy(ForDestroy2);
        Destroy(ForDestroy3);
        Destroy(ForDestroy4);
        Destroy(ForDestroy5);
        PhotonNetwork.Instantiate("leglegleg Variant", positionOnTopOfSurface,
                roverExplorerLocation.rotation);

    }

    public void lefthain()
    {
        var position = roverExplorerLocation.position;
            var positionOnTopOfSurface = new Vector3(position.x +1, position.y + roverExplorerLocation.localScale.y / 2,
                position.z);
        Destroy(ForDestroy);
        Destroy(ForDestroy3);
        Destroy(ForDestroy4);
        Destroy(ForDestroy5);
        PhotonNetwork.Instantiate("LeftLeg_HaThae", positionOnTopOfSurface,
                roverExplorerLocation.rotation);

    }
    public void leftdain()
    {
        var position = roverExplorerLocation.position;
            var positionOnTopOfSurface = new Vector3(position.x, position.y + roverExplorerLocation.localScale.y / 2,
                position.z);
        Destroy(ForDestroy);
        Destroy(ForDestroy2);
        Destroy(ForDestroy4);
        Destroy(ForDestroy5);
        PhotonNetwork.Instantiate("LeftLeg_DaeThae",  positionOnTopOfSurface,
                roverExplorerLocation.rotation);

    }

    public void rightdain()
    {
        var position = roverExplorerLocation.position;
            var positionOnTopOfSurface = new Vector3(position.x, position.y + roverExplorerLocation.localScale.y / 2,
                position.z);
        Destroy(ForDestroy);
        Destroy(ForDestroy2);
        Destroy(ForDestroy3);
        Destroy(ForDestroy5);
        PhotonNetwork.Instantiate("RightLeg_DaeThae",  positionOnTopOfSurface,
                roverExplorerLocation.rotation);
    }
    public void righthain()
    {

        var position = roverExplorerLocation.position;
            var positionOnTopOfSurface = new Vector3(position.x, position.y + roverExplorerLocation.localScale.y / 2,
                position.z);
       Destroy(ForDestroy);
        Destroy(ForDestroy2);
        Destroy(ForDestroy3);
        Destroy(ForDestroy4);
        PhotonNetwork.Instantiate("RightLeg_HaThae",  positionOnTopOfSurface,
                roverExplorerLocation.rotation);
    }
    public void adel()
    {
        Destroy(ForDestroy);
        Destroy(ForDestroy2);
        Destroy(ForDestroy3);
        Destroy(ForDestroy4);
        Destroy(ForDestroy5);
    }
    public void hide()
    {
         if (hidebt.activeSelf == false)
        {
            hidebt.SetActive(true);

        }
        else {
             hidebt.SetActive(false);

        }
        
    }
 }



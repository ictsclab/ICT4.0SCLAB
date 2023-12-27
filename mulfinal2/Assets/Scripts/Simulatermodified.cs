using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;

using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

using System.Diagnostics;
using System.Text.RegularExpressions;
using System.Net;
using System.Net.Sockets;
using System.Threading;

using Debug = UnityEngine.Debug;
using System.Text;
using System.IO;
using TMPro;

public class Simulatermodified : MonoBehaviour
{
    int i;
   
    public TextMeshPro tx2;
    public TextMeshPro complete;
    
    private ConnectionHelper connHelper;
    private Socket kinectSocket;

    private PyConn pyConn;
    
    private Socket pySocket;

    
    public Animator animator;
    public Text tx;
    public Text count;
    
    public string ip;

    private bool isNowUp = false;
    


    private bool threadStopFlag = false;


    public float TimeLeft = 2.0f;
    public float nextTime = 0.0f;


    void Start()
    {
      pyConn = new PyConn("192.168.137.132", 50003);
       
        pySocket = pyConn.CreateServerConnection_OrNull();
        
        bool pySocketNull = pySocket == null;
        if (pySocketNull) { Debug.LogWarning($"{nameof(pySocketNull)}"); return; }

        pySocket.SendTimeout = 100;
        pySocket.ReceiveTimeout = 100;



    }
 
    void FixedUpdate()
    {

       
       if (pySocket != null)
        {
             
            if (Time.time > nextTime)
            {
                nextTime = Time.time + TimeLeft / 2;
                try
                {

                    pyConn.Send(pySocket, new byte[] { 0 });
                    string ret = pyConn.Receive(pySocket);
                    /*float ret2 = Convert.ToSingle(ret);*/

                    if (ret.Equals("1"))
                    {
                        
                        AnimBool(true);



                    }
                   
                }
                catch (Exception ex)
                {

                }

            }


        }
        
    }   
    private void OnDisable()
    {
        threadStopFlag = true;
    }

    public void AnimBool(bool tmp)
    {
        Debug.Log(tmp);
        isNowUp = !isNowUp;
        var _nextActivationTrigger = isNowUp ? "tUp" : "tDown";
        animator.SetTrigger(_nextActivationTrigger);
        //animator2.SetTrigger(_nextActivationTrigger);
    }
}

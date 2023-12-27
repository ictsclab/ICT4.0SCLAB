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
using JetBrains.Annotations;
using UnityEngine.EventSystems;

public class text : MonoBehaviour
{
    int i;
    public TextMeshPro tx;
    public TextMeshPro tx2;
    
    float timer;
    float now = 0;
    float nowt;
    private PyConn pyConn;

    private Socket pySocket;

    public float TimeLeft = 2.0f;
    public float nextTime = 0.0f;

    private bool isNowUp = false;
    private void Start()
    {
        
        //Simulatermodified _simulationmodified;
        //_simulationmodified.grstart()
        pyConn = new PyConn("192.168.137.132", 50002);
        pySocket = pyConn.CreateServerConnection_OrNull();
        tx.text = "Complete : ";

        bool pySocketNull = pySocket == null;
        if (pySocketNull) { Debug.LogWarning($"{nameof(pySocketNull)}"); return; }

        pySocket.SendTimeout = 1;
        pySocket.ReceiveTimeout = 1;

    }
   
    // Update is called once per frame
    /*void Update()
    {
        now += Time.deltaTime;
        nowt = now % 2;
        Debug.Log(nowt);
        
            if (Input.GetKeyDown(KeyCode.K))
        {
            i++;
            tx.text = "Complete : "+ i + "";
            tx2.text = "Complete";
        }
        if (nowt>1.8)
        {
            tx2.text = " ";
        }

    }*/
  
    void FixedUpdate()
    {
        
        now += Time.deltaTime;
        nowt = now % 2;
        if (nowt > 1.8)
        {
            tx2.text = " ";
        }
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
                        i++;
                        tx.text = "Complete : " + i + "";
                        tx2.text = "Complete";


                    }if (i==20)
                    {
                        i = 0;
                        tx.text = "Complete : " + i + "";

                    }
                    
                   
                }
                catch (Exception ex)
                {

                }
            }
            
       }
    }
    
    
}



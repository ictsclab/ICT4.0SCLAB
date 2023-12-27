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

using Photon.Pun;


public class Simulatermodified : MonoBehaviour
{
    private ConnectionHelper connHelper;
    private Socket kinectSocket;

    private PyConn pyConn;

    private Socket pySocket;

    public Text count;

    private string storedIp;
    private int storedPort;

    private bool isNowUp = false;

    private bool threadStopFlag = false;

    public float TimeLeft = 2.0f;
    private float timer;
    public float nextTime = 0.0f;

    // 데이터 수신 간격을 설정합니다.
    public float dataReceiveInterval = 0.5f;
   

    // 비동기 소켓 통신을 위한 스레드 생성
    private Thread socketThread;
    private bool animationTriggered = false;

    private int countInt = 0; // 카운트 정수 변수 추가

    // 각 오브젝트의 Animator 컴포넌트를 저장할 배열
    public Animator[] objectAnimators;

    void Start()
    {
        timer = TimeLeft; // 타이머 초기화
    }

    void Update()
    {
        // 데이터 수신 간격에 따라 애니메이션을 업데이트
        if (animationTriggered)
        {
            AnimBool(true);
            IncreaseCount(); // 카운트 증가
            animationTriggered = false;
        }
    }

    public void StoreConnectionInfo(string ip, int port)
    {
        storedIp = ip;
        storedPort = port;
        objectAnimators = GetObjectAnimators(); // Update objectAnimators array
    }
    private Animator[] GetObjectAnimators()
{
    return GameObject.FindObjectsOfType<Animator>();
}

    public void ConnectToServer(string ip, int port)
    {
        Debug.Log($"Connecting to server with IP: {ip}, Port: {port}");
        pyConn = new PyConn(storedIp, storedPort);
        pySocket = pyConn.CreateServerConnection_OrNull();

        bool pySocketNull = pySocket == null;
        if (pySocketNull)
        {
            Debug.LogWarning($"{nameof(pySocketNull)}");
            return;
        }

        pySocket.SendTimeout = 100;
        pySocket.ReceiveTimeout = 100;

        socketThread = new Thread(SocketCommunication);
        socketThread.Start();
    }

    public void stserver()
    {
        pyConn = new PyConn(storedIp, storedPort);
        pySocket = pyConn.CreateServerConnection_OrNull();

        bool pySocketNull = pySocket == null;
        if (pySocketNull)
        {
            Debug.LogWarning($"{nameof(pySocketNull)}");
            return;
        }

        pySocket.SendTimeout = 100;
        pySocket.ReceiveTimeout = 100;

        socketThread = new Thread(SocketCommunication);
        socketThread.Start();
    }

    void SocketCommunication()
    {
        while (!threadStopFlag)
        {
            if (pySocket != null)
            {
                try
                {
                    pyConn.Send(pySocket, new byte[] { 0 });
                    string ret = pyConn.Receive(pySocket);

                    if (ret.Equals("1"))
                    {
                        // 애니메이션 트리거를 설정합니다.
                        animationTriggered = true;
                    }
                }
                catch (Exception ex)
                {
                    Debug.Log("Error in socket communication: " + ex.Message);
                }
            }
        }
    }

    void OnDestroy()
    {
        // 스레드 정리
        threadStopFlag = true;
        if (socketThread != null && socketThread.IsAlive)
        {
            socketThread.Join();
        }
    }

    // 카운트를 증가시키고 텍스트를 업데이트하는 메서드 추가
    public void IncreaseCount()
    {
        countInt++;
        count.text = "Count : " + countInt.ToString();
    }

    // 카운트를 0으로 초기화하는 메서드 추가
    public void ResetCount()
    {
        countInt = 0;
        count.text = "Count : " + countInt.ToString();
    }

    // 초기화 버튼을 위한 메서드 추가
    public void OnResetButtonClick()
    {
        ResetCount();
    }

    public void AnimBool(bool tmp)
    {
        Debug.Log(tmp);
        isNowUp = !isNowUp;
        var _nextActivationTrigger = isNowUp ? "tUp" : "tDown";

        // 각 오브젝트의 Animator 컴포넌트에 애니메이션 트리거를 전달하여 동작시킵니다.
        foreach (var animator in objectAnimators)
        {
            if (animator != null)
            {
                animator.SetTrigger(_nextActivationTrigger);
            }
        }
    }
}

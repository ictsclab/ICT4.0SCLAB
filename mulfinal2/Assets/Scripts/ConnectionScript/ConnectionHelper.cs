using System.Collections;
using System.Collections.Generic;
using System;
using System.Text;
using System.Net;
using System.Net.Sockets;
using System.Threading;

using UnityEngine;

public class ConnectionHelper
{
	// Server literal
	protected int bufferSize;

	protected readonly string TAG = "[ Client_cs ]";
	protected string SERVER_IP;
	protected int SERVER_PORT;
	
	public ConnectionHelper(string ip, int port)
	{
		SERVER_IP = ip;
		SERVER_PORT = port;
		bufferSize = 1024;
	}

	public Socket CreateServerConnection_OrNull()
	{
		Socket retSock = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);
		IPEndPoint ep = new IPEndPoint(IPAddress.Parse(SERVER_IP), SERVER_PORT);
        try
        {
            retSock.Connect(ep);
        }
        catch(Exception e)
        {
            Debug.LogWarning($"{e.GetType()} : {e.Message}");
            return null;
        }
		return retSock;
	}

	public string Receive(Socket socket)
	{
		if (socket == null) return TAG + "socket is null";

		byte[] buff = new byte[bufferSize];
		int n = socket.Receive(buff);
		string data = Encoding.UTF8.GetString(buff, 0, n);

		return data;
	}

	public void Send(Socket socket, string msg)
	{
		if (socket == null) return;
		byte[] buff = Encoding.UTF8.GetBytes(msg);
		socket.Send(buff, SocketFlags.None);
	}
	
	// 유니티 Start 함수는 Init 과정.
	// 모든 Init 과정이 끝나고 Log 업데이트
	// 따라서 중간중간 값을 순서대로 확인하기 위해 스레딩
	private void ThreadTask()
	{
		using (Socket sock = CreateServerConnection_OrNull())
		{
			string recvMsg = Receive(sock);
			Debug.Log(recvMsg);
		}
	}

    // 유니티 시작 시 호출 함수
    void Start()
    {
        Thread conn = new Thread(new ThreadStart(ThreadTask));
        conn.Start();
    }
}

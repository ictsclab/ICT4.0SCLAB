using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using System;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Threading;

public class T5_1_Server : MonoBehaviour
{
	// 서버 제어
	private Thread threadServer;
	private bool server_flag;

	// 유니티 Start 함수는 Init 과정.
	// 모든 Init 과정이 끝나고 Log 업데이트
	// 따라서 중간중간 값을 순서대로 확인하기 위해 스레딩 처리
	void ThreadServerTask()
	{
		// 소켓 객체 생성(TCP 소켓)
		using (Socket sock = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp))
		{
			// 포트에 바인드
			IPEndPoint ep = new IPEndPoint(IPAddress.Parse("127.0.0.1"), 8888);
			sock.Bind(ep);
			Debug.Log("EP ip : " + ep.Address);

			// 포트 Listenening 시작
			sock.Listen(10);

			// 연결을 받아들여 새 소켓 생성 (하나의 연결만 받아들임)
			Socket clientsocket = sock.Accept();

			byte[] buff = new byte[1024];

			int n = clientsocket.Receive(buff);
			Debug.Log("recv data count n : " + n);

			string data = Encoding.UTF8.GetString(buff, 0, n);
			Debug.Log(data);
			clientsocket.Send(buff, 0, n, SocketFlags.None);
			
			clientsocket.Close();
		}
	}

	// 유니티 시작 시 호출
    void Start()
    {
		threadServer = new Thread(new ThreadStart(ThreadServerTask));
		threadServer.Start();
	}
}

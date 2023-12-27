using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using System.Net.Sockets;
using System.Text;

public class PyConn : ConnectionHelper
{
	public PyConn(string ip, int port) : base(ip, port)
	{
		bufferSize = 8;
	}

	public byte[] ReceiveBytes(Socket socket)
	{
		if (socket == null) Debug.Log(TAG + "socket is null");

		byte[] buff = new byte[bufferSize];
		int n = socket.Receive(buff);

		return n == 0 ? null : buff;
	}

	public void Send(Socket socket, byte[] msg)
	{
		if (socket == null) return;
		socket.Send(msg, SocketFlags.None);
	}
}

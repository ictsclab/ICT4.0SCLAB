using System;
using System.Threading;
using System.Threading.Tasks;
using System.Net.WebSockets;
using UnityEngine;
using System.Text;

public class WebSocketUnityClient : MonoBehaviour
{
    private ClientWebSocket websocket = new ClientWebSocket();
    private CancellationTokenSource cancellation;

    async void Start()
    {
        cancellation = new CancellationTokenSource();

        try
        {
            await websocket.ConnectAsync(new Uri("ws://10.178.0.2:8765"), cancellation.Token);
            Debug.Log("Connected to the server");
            StartReceiving();
        }
        catch (Exception e)
        {
            Debug.LogError("Error: " + e.Message);
        }
    }

    async void StartReceiving()
    {
        var buffer = new byte[1024];

        while (websocket.State == WebSocketState.Open)
        {
            var result = await websocket.ReceiveAsync(new ArraySegment<byte>(buffer), cancellation.Token);

            if (result.MessageType == WebSocketMessageType.Text)
            {
                var message = Encoding.UTF8.GetString(buffer, 0, result.Count);
                Debug.Log("Received: " + message);

                // Handle received message here...
            }
        }
    }

    async void OnDestroy()
    {
        cancellation.Cancel();

        if (websocket != null && websocket.State == WebSocketState.Open)
        {
            await websocket.CloseAsync(WebSocketCloseStatus.NormalClosure, "", CancellationToken.None);
        }
    }
}

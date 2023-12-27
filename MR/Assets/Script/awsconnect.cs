using System;
using System.Collections.Concurrent;
using UnityEngine;
using System.Text;
using UnityEngine.UI;
using WebSocketSharp;

public class awsconnect : MonoBehaviour
{
    private string serverUrl = "wss://3.36.112.128:443/";
    public Animator[] objectAnimators; // 변경 없음
    public Text count; 
    private int countInt = 0;
    private WebSocket ws;
    private ConcurrentQueue<Action> actionQueue = new ConcurrentQueue<Action>();

    private void Start()
    {
        objectAnimators = GameObject.FindObjectsOfType<Animator>(); // 애니메이터 배열 캐싱
        ws = new WebSocket(serverUrl);

        ws.OnOpen += (sender, e) =>
        {
            Debug.Log("Connection Opened");
           // ws.Send("1");
           
        };

        ws.OnMessage += (sender, e) =>
        {
            string data = e.Type == Opcode.Binary ? Encoding.UTF8.GetString(e.RawData) : e.Data; // 중복 코드 제거

            if (data == "1") // 문자열 처리 최적화
            {
                actionQueue.Enqueue(() =>
                {
                    AnimBool(true);
                    IncreaseCount();
                });
            }
        };

        ws.OnError += (sender, e) =>
        {
            Debug.LogError("WebSocket Error: " + e.Message); // 에러 처리 추가
        };

        ws.ConnectAsync(); 
    }

    private void Update()
    {
        while (actionQueue.TryDequeue(out Action action)) 
        {
            action.Invoke();
        }
    }

    private void OnDestroy()
    {
        ws.CloseAsync();
    }

    public void IncreaseCount() 
    {
        countInt++;
        count.text = "Count : " + countInt.ToString();
    }

    public void AnimBool(bool tmp) 
    {
        var _nextActivationTrigger = tmp ? "tUp" : "tDown";
        foreach (var animator in objectAnimators)
        {
            if (animator != null)
            {
                animator.SetTrigger(_nextActivationTrigger);
            }
        }
    }
}

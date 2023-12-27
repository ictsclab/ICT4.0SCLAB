using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO; /* StreamWriter */
using System; /* DateTime */

public class log : MonoBehaviour
{
    StreamWriter writer;

    void saveLog(string logString, string stackTrace, LogType type)
    {
        string currentTime = DateTime.Now.ToString(("HH:mm:ss"));
        writer.WriteLine($"[{currentTime}] {logString}");
    }

    void Awake()
    {
        writer = new StreamWriter("Assets/mAP/map.txt");
        Application.logMessageReceived += saveLog;

        
    }

    void Start()
    {
        Debug.Log("Start!!");
    }

    void OnDisable()
    {
        Debug.Log("OnDisable!!");

        Application.logMessageReceived -= saveLog;

        writer.Flush();
        writer.Close();
    }
}
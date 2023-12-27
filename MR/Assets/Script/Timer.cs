using Newtonsoft.Json.Converters;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class Timer : MonoBehaviour
{
    public Button toggleButton;
    public GameObject timer;
    public Text time;
    public GameObject menu;
    public GameObject Count;
    public Text ct;
    int count;
   
    
    
    float tim;
    // Start is called before the first frame update
    void Start()
    {
    }
    public void ToggleText()
    {
        // TextMeshProUGUI 게임 오브젝트의 활성화 상태를 토글
        time.gameObject.SetActive(!time.gameObject.activeSelf);
        // 텍스트가 활성화되면 내용을 "0"으로 설정
        if (time.gameObject.activeSelf)
        {
            tim = 0;
            time.text = "Timer : "+(int) tim + " sec";
            
        }
    }
     public void ToggleCount()
    {
        // TextMeshProUGUI 게임 오브젝트의 활성화 상태를 토글
        Count.gameObject.SetActive(!time.gameObject.activeSelf);
        // 텍스트가 활성화되면 내용을 "0"으로 설정
        if (ct.gameObject.activeSelf)
        {
            count = 0;
            ct.text = "Count : " + count;
            
        }
    }
    // Update is called once per frame
    void Update()
    {
        tim += Time.deltaTime;
        time.text = "Timer : "+(int) tim + " sec";
    }
    public void mactive()
    {
        if (menu.activeSelf == true)
        {
            menu.gameObject.SetActive(false);
        }
        else
        {
            menu.gameObject.SetActive(true);
        }
    }
}

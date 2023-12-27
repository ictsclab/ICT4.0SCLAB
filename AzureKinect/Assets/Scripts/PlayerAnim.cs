using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Text;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;

//¾ÈµÊ¾ÈµÊ
public class PlayerAnim : MonoBehaviour
{
    int i;
    float timer;
    int timer2;
    public Text tx;
    public Text count;
    public TextMeshPro Timer;
    public TextMeshPro Count;
    public Animator animator;
    private bool isNowUp = false;
     void Update()
    {
         timer += Time.deltaTime;
        timer2 = (int)(50 - timer);
       if(Input.GetKeyDown(KeyCode.K))
        
        {
            i++;
            AnimBool(true);
            count.text = "Complete";

        }
       
    
        

    }
   
        
    public void AnimBool(bool tmp)
    {
        Debug.Log(tmp);
        isNowUp = !isNowUp;
        var _nextActivationTrigger = isNowUp ? "tUp" : "tDown";
        animator.SetTrigger(_nextActivationTrigger);
    }
     
}

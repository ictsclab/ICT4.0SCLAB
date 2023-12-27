using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class animation : MonoBehaviour
{
     public Animator animator;
    public GameObject leg;
    private bool isNowUp = false;
    float TimeLeft = 2.0f;
    float nexttime = 0f;

    // Start is called before the first frame update
    void Start()
    {
        leg.SetActive(true);
    }
    private void Update()
    {
        
        if(Time.time > nexttime )
        {
            nexttime = Time.time + TimeLeft;
            AnimBool(true);
        }
    }
    public void AnimBool(bool tmp)
    {
        Debug.Log(tmp);
        isNowUp = !isNowUp;
        var _nextActivationTrigger = isNowUp ? "tUp" : "tDown";
        animator.SetTrigger(_nextActivationTrigger);
        //animator2.SetTrigger(_nextActivationTrigger);
    }

}

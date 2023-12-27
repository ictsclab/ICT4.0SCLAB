/**
 *
 * @brief Ghost 모델의 동작 시뮬레이션 확인과 인공지능 데이터를 받아오기 위한 코드
 * @author Woosung Shim
 * @date 2021-11-03
 * @version 1.0.0
 * 
 */
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Net.Sockets;
using System.Text;

public class Simulatermodified : MonoBehaviour
{
    // @see 시뮬레이션 오브젝트
    public HumanoidData leftForeArm;
    public HumanoidData Head;
    public Transform target;
    public Transform righthand;

    private ConnectionHelper connHelper;
    private Socket kinectSocket;

    private PyConn pyConn;
    private Socket pySocket;

    private Animator animator;

    public enum Part { Lupper,Llower,Lfoot, Rupper, Rlower, Rfoot };
    public Part select;
    //public bool preaction;

    //Vector3 hipos;
    //[SerializeField] private Transform hip;

    // Start is called before the first frame update
    void Start()
    {
       

        //connHelper = new ConnectionHelper("192.168.0.5", 50003);
        //kinectSocket = connHelper.CreateServerConnection();

        //pyConn = new PyConn("192.168.0.6", 22222);
        pyConn = new PyConn("192.168.0.10", 50003);
        pySocket = pyConn.CreateServerConnection();

    }

    // Update is called once per frame
    void Update()
    {
        //leftForeArm.startJointTransform.rotation = QuaternionOperationWithOther(leftForeArm);
        //Head.startJointTransform.rotation = QuaternionOperationWithOther(Head);
        //if (kinectSocket != null)
        //{
        //    string[] jointPos = connHelper.Receive(kinectSocket).Split(',');
        //    float x, y, z;
        //    x = float.Parse(jointPos[0]);
        //    y = float.Parse(jointPos[1]);
        //    z = float.Parse(jointPos[2]);

        //    Vector3 v = new Vector3();
        //    Head.startJointTransform.rotation = QuaternionOperationWithOther(Head);
        //}

        if (pySocket != null)
        {
            pyConn.Send(pySocket, new byte[] { 0 });
            string ret = pyConn.Receive(pySocket);
            Debug.Log(ret);
            if (ret.Equals("1"))
            {
                
                AnimBool(true);
            }
            else
                AnimBool(false);
        }

        righthand.rotation = Quaternion.LookRotation(righthand.position - leftForeArm.endJointTransform.position);
        

    }

    public void AnimBool(bool tmp)
    {
        switch (select)
        {
            case Part.Rupper: animator.SetBool("Rupperlegup", tmp); break;
            case Part.Rlower: animator.SetBool("Rlowerlegup", tmp); break;
            case Part.Rfoot: animator.SetBool("Rfootup", tmp); break;
            case Part.Lupper: animator.SetBool("Lupperlegup", tmp); break;
            case Part.Llower: animator.SetBool("Llowerlegup", tmp); break;
            case Part.Lfoot: animator.SetBool("Lfootup", tmp); break;
        }
    }

    public void AnimBool(string name, bool tmp)
    {
        animator.SetBool(name, tmp);
    }

    public void SetAnimSpeed(float value)
    {
        animator.speed = 2  / value;
    }
   
    private void JointInit(HumanoidData data)
    {
        data.init.position = data.endJointTransform.position - data.startJointTransform.position;
        data.init.rotation = Quaternion.LookRotation(data.endJointTransform.position - data.startJointTransform.position);
    }

    private Quaternion QuaternionOperationWithOther(HumanoidData data)
    {
        Quaternion q1, q2;
        q1 = Quaternion.LookRotation(target.position - data.startJointTransform.position);
        q2 = data.init.rotation;
        return q1 * q2;
    }

    private Quaternion QuaternionOperationWithOther(HumanoidData data, Vector3 v)
    {
        Quaternion q1, q2;
        q1 = Quaternion.LookRotation(v - data.startJointTransform.position);
        q2 = data.init.rotation;
        return q1 * q2;
    }

    private Quaternion QuaternionOperation(HumanoidData data)
    {
        Quaternion q1, q2;
        q1 = Quaternion.LookRotation(data.endJointTransform.position - data.startJointTransform.position);
        q2 = data.init.rotation;
        return q1 * q2;
    }

    

}

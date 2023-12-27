using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Net.Sockets;

public class Simulater : MonoBehaviour
{
	public HumanoidData leftForeArm;
	public HumanoidData leftArm;
	public HumanoidData leftShoulder;
	public HumanoidData Head;
	public Transform target;
	public Transform righthand;

	private ConnectionHelper connHelper;
	private Socket kinectSocket;

	private PyConn pyConn;
	private Socket pySocket;

	private Animator animator;
	
    // Start is called before the first frame update
    void Start()
    {
		animator = GetComponent<Animator>();
		JointInit(leftForeArm);
		JointInit(Head);
		JointInit(leftArm);
		JointInit(leftShoulder);

		//connHelper = new ConnectionHelper("127.0.0.1", 8888);
		//kinectSocket = connHelper.CreateServerConnection();

		pyConn = new PyConn("192.168.0.9", 50002);
		//pyConn = new PyConn("127.0.0.1", 9999);
		//pySocket = pyConn.CreateServerConnection();
	}

    // Update is called once per frame
    void Update()
    {
		leftForeArm.startJointTransform.rotation = QuaternionOperationWithOther(leftForeArm);
		leftArm.startJointTransform.rotation = QuaternionOperationWithOther(leftArm);
		Head.startJointTransform.rotation = QuaternionOperationWithOther(Head);
		if (kinectSocket != null)
		{
			string[] jointPos = connHelper.Receive(kinectSocket).Split(',');
			float x,y,z;
			x = float.Parse(jointPos[0]);
			y = float.Parse(jointPos[1]);
			z = float.Parse(jointPos[2]);

			//Vector3 v = new Vector3();
			Head.startJointTransform.rotation = QuaternionOperationWithOther(Head);
		}

		if(pySocket != null)
		{
			pyConn.Send(pySocket, new byte[] { 1 });
			string ret = pyConn.Receive(pySocket);
			Debug.Log(ret);
			if (ret.Equals("1"))
			{
				animator.SetBool("IsRightForeArmActionStop", false);
			}
			else
				animator.SetBool("IsRightForeArmActionStop", true);
		}
		
        if (Input.GetMouseButton(0))
        {
			animator.SetBool("IsRightForeArmActionStop", false);
		}
		else
			animator.SetBool("IsRightForeArmActionStop", true);
	
	}

	private void JointInit(HumanoidData data)
	{
		data.init.position = data.endJointTransform.position - data.startJointTransform.position;
		data.init.rotation = Quaternion.LookRotation(data.endJointTransform.position - data.startJointTransform.position);
	}

	private Quaternion QuaternionOperationWithOther(HumanoidData data)
	{
		Quaternion q1, q2;
		q1 = Quaternion.LookRotation(data.target.position - data.startJointTransform.position);
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
/*
	private void OnAnimatorIK()
    {
		animator.SetIKPositionWeight(AvatarIKGoal.LeftHand, 1);
		animator.SetIKRotationWeight(AvatarIKGoal.LeftHand, 1);
		animator.SetIKPosition(AvatarIKGoal.LeftHand, righthand.position);
		animator.SetIKRotation(AvatarIKGoal.LeftHand, righthand.rotation);
    }
	*/
	private void OnGUI()
	{
		if (GUI.Button(new Rect(0, 0, 100, 24), "Hand Signal"))
		{
			animator.SetBool("IsRightForeArmActionStop", false);
		}
		else
			animator.SetBool("IsRightForeArmActionStop", true);
	}
	
}

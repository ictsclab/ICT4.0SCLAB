using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

[Serializable]
public class HumanoidData
{
	public struct HumanoidInitData
	{
		public Vector3 position;
		public Quaternion rotation;
	}

	public Transform startJointTransform;
	public Transform endJointTransform;
	public HumanoidInitData init;

	public Transform target;
}

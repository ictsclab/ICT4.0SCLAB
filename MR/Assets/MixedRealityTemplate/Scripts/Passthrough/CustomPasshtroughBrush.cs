using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CustomPasshtroughBrush : MonoBehaviourPun
{
    private OVRHand hand;

    [SerializeField] private GameObject lineSegmentPrefab;
    private GameObject lineContainer;
    private bool isEnabled;
    private CenterEyeAnchor centerEyeAnchor;
    LineRenderer currentLineSegment = null;
    List<Vector3> inkPositions = new List<Vector3>();
    float minInkDist = 0.01f;
    float strokeWidth = 0.1f;
    float strokeLength = 0.0f;

    private void Start()
    {
        centerEyeAnchor = FindObjectOfType<CenterEyeAnchor>();
        lineContainer = FindObjectOfType<BrushLineContainer>().gameObject;
        if (photonView.IsMine)
        {
            hand = FindObjectOfType<RightHand>().GetComponent<OVRHand>();
        }
    }

    public enum BrushState
    {
        Idle = 0,
        Inking = 1
    };
    BrushState brushStatus = BrushState.Idle;

    private void OnDisable()
    {
        brushStatus = BrushState.Idle;
    }

    public void EnableBrush(bool b)
    {
        photonView.RPC("RPC_EnalbeBrush", RpcTarget.AllBuffered, b);
    }

    [PunRPC]
    private void RPC_EnalbeBrush(bool b)
    {
        isEnabled = b;
    }

    void LateUpdate()
    {
        if (!isEnabled) return;

        // face camera
        if (photonView.IsMine)
        {
            transform.rotation = Quaternion.LookRotation(transform.position - centerEyeAnchor.transform.position);
        }

        switch (brushStatus)
        {
            case BrushState.Idle:
                if (photonView.IsMine)
                {
                    if (hand.GetFingerIsPinching(OVRHand.HandFinger.Index))
                    {
                        photonView.RPC("StartLine", RpcTarget.AllBuffered);
                        photonView.RPC("SetBrushState", RpcTarget.AllBuffered, 1);
                        brushStatus = BrushState.Inking;
                    }
                }
                break;
            case BrushState.Inking:
                // every frame, draw line
                UpdateLine();
                if (photonView.IsMine)
                {
                    if (!hand.GetFingerIsPinching(OVRHand.HandFinger.Index))
                    {
                        photonView.RPC("SetBrushState", RpcTarget.AllBuffered, 0);
                    }
                }
                break;
        }
    }

    [PunRPC]
    private void SetBrushState(int state)
    {
        if(state == 0)
        {
            brushStatus = BrushState.Idle;
        }
        else if (state == 1)
        {
            brushStatus = BrushState.Inking;
        }
    }

    [PunRPC]
    void StartLine()
    {
        var inkPos = transform.position;
        GameObject newLine = Instantiate(lineSegmentPrefab, inkPos, Quaternion.identity);
        currentLineSegment = newLine.GetComponent<LineRenderer>();
        currentLineSegment.positionCount = 1;
        currentLineSegment.SetPosition(0, inkPos);
        strokeWidth = currentLineSegment.startWidth;
        strokeLength = 0.0f;
        inkPositions.Clear();
        inkPositions.Add(inkPos);
        newLine.transform.parent = lineContainer.transform;
    }

    void UpdateLine()
    {
        var inkPos = transform.position;
        float segmentLength = (inkPos - inkPositions[inkPositions.Count - 1]).magnitude;
        if (segmentLength >= minInkDist)
        {
            inkPositions.Add(inkPos);
            currentLineSegment.positionCount = inkPositions.Count;
            currentLineSegment.SetPositions(inkPositions.ToArray());
            strokeLength += segmentLength;
            // passing the line length to the shader ensures that the tail/end fades are consistent width
            currentLineSegment.material.SetFloat("_LineLength", strokeLength / strokeWidth);
        }
    }

    public void ClearLines()
    {
        for (int i = 0; i < lineContainer.transform.childCount; i++)
        {
            Destroy(lineContainer.transform.GetChild(i).gameObject);
        }
    }

    public void UndoInkLine()
    {
        if (lineContainer.transform.childCount >= 1)
        {
            Destroy(lineContainer.transform.GetChild(lineContainer.transform.childCount - 1).gameObject);
        }
    }
}

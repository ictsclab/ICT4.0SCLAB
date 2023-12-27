using System.Collections.Generic;
using UnityEngine;

public class CurvedLaser : MonoBehaviour
{
	[SerializeField] private LineRenderer _lineRenderer;
	public Gradient _colorValid;
	public Gradient _colorDenied;

	// bezier curve
	private List<Vector3> _pointList = new List<Vector3>();
	private int _resolution = 24;

	public void Activate(bool activate)
	{
		_lineRenderer.startWidth = 0.005f;
		_lineRenderer.endWidth = 0.005f;
		_lineRenderer.enabled = activate;
	}

	public void DrawCurveValid(Vector3 start, Vector3 end)
	{
		DrawCurve(start, end, _colorValid);
	}

	public void DrawCurveDenied(Vector3 start, Vector3 end)
	{
		DrawCurve(start, end, _colorDenied);
	}

	public void DrawLine(Vector3 start, Vector3 end, Gradient _color)
	{
		Activate(true);
		_pointList.Clear();

		for (float r = 0; r <= 1; r += 1.0f / _resolution)
		{
			Vector3 _bezierPoint = Vector3.Lerp(start, end, r);

			_pointList.Add(_bezierPoint);
		}

		_lineRenderer.positionCount = _pointList.Count;
		_lineRenderer.SetPositions(_pointList.ToArray());
		_lineRenderer.colorGradient = _color;
	}

	private void DrawCurve(Vector3 start, Vector3 end, Gradient color)
	{
		Activate(true);
		_pointList.Clear();
		for (float r = 0; r <= 1; r += 1.0f / _resolution)
		{
			Vector3 _middlePoint = new Vector3((start.x + end.x) / 2, start.y, (start.z + end.z) / 2);
			Vector3 _tangentStart = Vector3.Lerp(start, _middlePoint, r);
			Vector3 _tangentEnd = Vector3.Lerp(_middlePoint, end, r);
			Vector3 _bezierPoint = Vector3.Lerp(_tangentStart, _tangentEnd, r);

			_pointList.Add(_bezierPoint);
		}

		_lineRenderer.positionCount = _pointList.Count;
		_lineRenderer.SetPositions(_pointList.ToArray());
		_lineRenderer.colorGradient = color;
	}
}

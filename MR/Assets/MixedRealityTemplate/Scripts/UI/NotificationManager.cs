using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

[Serializable]
public class Notification
{
    public string message;
    public float duration;
}

public class NotificationManager : MonoBehaviour
{
    private Queue<Notification> _notificationQueue = new Queue<Notification>();
    [SerializeField] TextMeshProUGUI _notificationText;
    [SerializeField] Animator _notificationAnimator;
    [SerializeField] AudioSource _audioSource;
    [SerializeField] Transform _notificationParent;
    private bool _notificationIsPlaying;
    private Transform _centerEye;
 
    public static NotificationManager instance;

    private void Awake()
    {
        if (instance != null && instance != this)
        {
            Destroy(gameObject);
        }
        else
        {
            instance = this;
        }
    }

    private void Start()
    {
        _centerEye = FindObjectOfType<CenterEyeAnchor>().transform;
        _notificationAnimator.transform.position = Vector3.zero;
        _notificationAnimator.transform.rotation = Quaternion.identity;
    }

    public void AddNotificationToQueue(string _message, float _duration)
    {
        Notification newNotification = new Notification() { message = _message, duration = _duration };
        _notificationQueue.Enqueue(newNotification);
        ShowNotification();
    }

    private void ShowNotification()
    {
        if (_notificationIsPlaying) return;
        if(_notificationQueue.Count > 0)
        {
            _notificationIsPlaying = true;
            var notification = _notificationQueue.Dequeue();
            _notificationText.text = notification.message;
            StartCoroutine(PlayNotification(notification.duration));
        }
    }

    IEnumerator PlayNotification(float duration)
    {
        _notificationParent.transform.position = _centerEye.position;
        _notificationParent.transform.rotation = Quaternion.LookRotation(Vector3.ProjectOnPlane(_centerEye.forward, Vector3.up), Vector3.up);


        _notificationAnimator.SetBool("showing", true);
        yield return new WaitForSeconds(0.5f);
        _audioSource.Play();
        yield return new WaitForSeconds(duration);
        _notificationAnimator.SetBool("showing", false);
        yield return new WaitForSeconds(0.5f);
        _notificationIsPlaying = false;
        ShowNotification();
    }
}

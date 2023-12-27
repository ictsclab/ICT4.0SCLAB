using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OnCollisionSound : MonoBehaviourPun
{
    [SerializeField] private AudioSource audioSource;
    [SerializeField] private AudioClip[] audioClips;
    private Rigidbody rigidBody;

    private void Awake()
    {
        rigidBody = GetComponent<Rigidbody>();
    }

    private void OnCollisionEnter(Collision collision)
    {
        if(collision.impulse.magnitude > 0.2f * rigidBody.mass)
        {
            photonView.RPC(nameof(PlayAudio), RpcTarget.All, collision.impulse.magnitude, rigidBody.mass);
        }
    }

    [PunRPC]
    private void PlayAudio(float impulse, float mass)
    {
        audioSource.PlayOneShot(audioClips[Random.Range(0, audioClips.Length)], impulse / 2);
    }
}

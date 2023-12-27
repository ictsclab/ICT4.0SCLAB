using System;
using System.Collections;

using UnityEngine;
using UnityEditor;
using UnityEngine.XR.WindowsMR;

using UnityEngine.XR.Management;

namespace UnityEngine.XR.WindowsMR
{
    internal class WindowsMRRemotingConnector : MonoBehaviour
    {
        string m_RemoteMachineName = "";
        bool m_EnableAudio = false;
        bool m_EnableVideo = false;
        int m_MaxBitRateKbps = 0;


        IEnumerator StartRemotingSession()
        {
            var xrManager = XRGeneralSettings.Instance?.Manager ?? null;

            if (xrManager != null && xrManager.activeLoader != null)
            {
                xrManager.StopSubsystems();
                xrManager.DeinitializeLoader();
            }

            yield return null;

            yield return TryConnect();

        }

        IEnumerator TryConnect()
        {
            WindowsMRRemoting.remoteMachineName = m_RemoteMachineName;
            WindowsMRRemoting.isAudioEnabled = m_EnableAudio;
            WindowsMRRemoting.isVideoEnabled = m_EnableVideo;
            WindowsMRRemoting.maxBitRateKbps = m_MaxBitRateKbps;

            WindowsMRRemoting.Connect();

            yield return new WaitForEndOfFrame();
            ConnectionState connectionState = ConnectionState.Disconnected;

            int connectionTryCount = 0;

            while (WindowsMRRemoting.TryGetConnectionState(out connectionState) && connectionTryCount < 30)
            {
                connectionTryCount++;
                if (connectionState == ConnectionState.Connecting)
                {
                    Debug.Log($"Still connecting to {WindowsMRRemoting.remoteMachineName}...");
                    yield return new WaitForSeconds(1);
                    continue;
                }
                break;
            }

            switch (connectionState)
            {
                case ConnectionState.Connected:
                    Debug.Log($"Successfully connected to {WindowsMRRemoting.remoteMachineName} after {connectionTryCount} seconds.");

                    yield return XRGeneralSettings.Instance.Manager.InitializeLoader();
                    if (XRGeneralSettings.Instance.Manager.activeLoader != null)
                        XRGeneralSettings.Instance.Manager.activeLoader.Start();
                    break;

                case ConnectionState.Disconnected:
                    Debug.LogError($"Unable to connect to {WindowsMRRemoting.remoteMachineName} after {connectionTryCount} seconds");
                    ConnectionFailureReason failureReason = ConnectionFailureReason.None;
                    WindowsMRRemoting.TryGetConnectionFailureReason(out failureReason);
                    Debug.LogError($"Connection Failure Reason {failureReason}");
                    break;
            }
        }

        public void StartRemotingConnection(string remoteMachineName, bool enableAudio, bool enableVideo, int maxBitRateKbps)
        {
            m_RemoteMachineName = remoteMachineName;
            m_EnableAudio = enableAudio;
            m_EnableVideo = enableVideo;
            m_MaxBitRateKbps = maxBitRateKbps;
            StartCoroutine(StartRemotingSession());
        }

        public void StopRemotingConnection()
        {
            var xrManager = XRGeneralSettings.Instance?.Manager ?? null;
            if (xrManager != null)
            {
                xrManager.StopSubsystems();
                xrManager.DeinitializeLoader();
            }
            WindowsMRRemoting.Disconnect();
        }
    }
}

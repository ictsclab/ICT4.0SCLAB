using System;
using System.IO;

using UnityEditor;
using UnityEngine;
using UnityEngine.XR.WindowsMR;

using UnityEngine.XR.Management;
using UnityEditor.XR.Management;

namespace UnityEditor.XR.WindowsMR
{

    [Serializable]
    class RemoteSettings : ScriptableObject
    {
        [SerializeField]
        public string m_RemoteMachineName = "";
        [SerializeField]
        public bool m_EnableAudio = true;
        [SerializeField]
        public bool m_EnableVideo = true;
        [SerializeField]
        public int m_MaxBitRateKbps = 99999;
    }

    /// <summary>
    /// Remoting Window Class, GUI content and callbacks to WMRRemoting apis.
    /// </summary>
    public class WindowsMRRemotingWindow : EditorWindow
    {
        /// <summary>
        /// Initializes the Remoting Window class
        /// </summary>
        [MenuItem("Window/XR/Windows XR Plugin Remoting")]
        public static void Init()
        {
            GetWindow<WindowsMRRemotingWindow>(false);
        }

        static GUIContent s_ConnectionStatusText = EditorGUIUtility.TrTextContent("Connection Status");
        static GUIContent s_EmulationModeText = EditorGUIUtility.TrTextContent("Emulation Mode");
        static GUIContent s_RemoteMachineText = EditorGUIUtility.TrTextContent("Remote Machine");
        static GUIContent s_EnableVideoText = EditorGUIUtility.TrTextContent("Enable Video");
        static GUIContent s_EnableAudioText = EditorGUIUtility.TrTextContent("Enable Audio");
        static GUIContent s_MaxBitrateText = EditorGUIUtility.TrTextContent("Max Bitrate (kbps)");

        static GUIContent s_ConnectionButtonConnectText = EditorGUIUtility.TrTextContent("Connect");
        static GUIContent s_ConnectionButtonDisconnectText = EditorGUIUtility.TrTextContent("Disconnect");

        static GUIContent s_ConnectionStateDisconnectedText = EditorGUIUtility.TrTextContent("Disconnected");
        static GUIContent s_ConnectionStateConnectingText = EditorGUIUtility.TrTextContent("Connecting");
        static GUIContent s_ConnectionStateConnectedText = EditorGUIUtility.TrTextContent("Connected");

        static GUIContent s_RemotingSettingsReminder = EditorGUIUtility.TrTextContent("The Editor uses player settings from the 'Standalone' platform for play mode and a remoting connection can be established without 'Windows Mixed Reality' enabled.");
        static GUIContent s_RemotingConnectionHelp = EditorGUIUtility.TrTextContent("Remoting will connect/disconnect automatically when you enter/exit play mode in editor.");

        ConnectionState previousConnectionState = ConnectionState.Disconnected;

        static GUIContent[] s_ModeStrings = new GUIContent[]
        {
            EditorGUIUtility.TrTextContent("None"),
            EditorGUIUtility.TrTextContent("Remote to Device")
        };

        static WindowsMRRemotingConnector s_Connector = null;

        static WindowsMRRemotingConnector GetConnector()
        {
            if (s_Connector == null)
            {
                var go = GameObject.Find("~wmrconnector");
                if (go == null)
                {
                    go = new GameObject("~wmrconnector");
                    go.hideFlags = HideFlags.HideAndDontSave;
                }
                s_Connector = go.AddComponent<WindowsMRRemotingConnector>();
            }
            return s_Connector;
        }

        static RemoteSettings s_RemoteSettings = null;

        const string s_SettingsPath = "UserSettings";
        const string s_SettingsFileName = "WindowsMRRemoteSettings.asset";

        internal static void LoadSettings()
        {
            if (s_RemoteSettings == null)
            {
                s_RemoteSettings = ScriptableObject.CreateInstance(typeof(RemoteSettings)) as RemoteSettings;
            }

            if (s_RemoteSettings == null)
                return;

            string packageInitPath = Path.Combine(s_SettingsPath, s_SettingsFileName);

            if (File.Exists(packageInitPath))
            {
                using (StreamReader sr = new StreamReader(packageInitPath))
                {
                    string settings = sr.ReadToEnd();
                    JsonUtility.FromJsonOverwrite(settings, s_RemoteSettings);
                }
            }
        }


        internal static void SaveSettings()
        {
            if (s_RemoteSettings == null)
                return;

            string packageInitPath = Path.Combine(s_SettingsPath, s_SettingsFileName);
            using (StreamWriter sw = new StreamWriter(packageInitPath))
            {
                string settings = JsonUtility.ToJson(s_RemoteSettings, true);
                sw.Write(settings);
            }
        }

        void OnEnable()
        {
            titleContent = EditorGUIUtility.TrTextContent("Windows Mixed Reality");
            LoadSettings();
            EditorApplication.playModeStateChanged += OnPlayModeStateChanged;
        }

        void onDisable()
        {
            SaveSettings();
            EditorApplication.playModeStateChanged -= OnPlayModeStateChanged;
        }

        static void OnPlayModeStateChanged(PlayModeStateChange stateChange)
        {
            var connector = GetConnector();

            switch (stateChange)
            {
                case PlayModeStateChange.EnteredEditMode:
                    LoadSettings();
                    break;

                case PlayModeStateChange.ExitingEditMode:
                    SaveSettings();
                    break;

                case PlayModeStateChange.EnteredPlayMode:
                    LoadSettings();
                    if (WindowsMREmulation.mode == WindowsMREmulationMode.Remoting && connector)
                    {
                        if (string.IsNullOrEmpty(s_RemoteSettings.m_RemoteMachineName))
                        {
                            Debug.LogError("Atempting to initiate remoting connection with no valid machine name set.");
                            return;
                        }
                        connector.StartRemotingConnection(
                            s_RemoteSettings.m_RemoteMachineName,
                            s_RemoteSettings.m_EnableAudio,
                            s_RemoteSettings.m_EnableVideo,
                            s_RemoteSettings.m_MaxBitRateKbps);
                    }

                    break;

                case PlayModeStateChange.ExitingPlayMode:
                    if (WindowsMREmulation.mode == WindowsMREmulationMode.Remoting && WindowsMRRemoting.isConnected && connector)
                    {
                        connector.StopRemotingConnection();
                        GameObject.Destroy(s_Connector);
                        s_Connector = null;
                    }
                    break;
            }
        }

        void DrawEmulationModeOnGUI()
        {
            EditorGUI.BeginDisabledGroup(EditorApplication.isPlayingOrWillChangePlaymode);
            EditorGUI.BeginChangeCheck();
            WindowsMREmulationMode previousMode = WindowsMREmulation.mode;
            WindowsMREmulationMode currentMode = (WindowsMREmulationMode)EditorGUILayout.Popup(s_EmulationModeText, (int)previousMode, s_ModeStrings);
            if (EditorGUI.EndChangeCheck())
            {
                if (previousMode == WindowsMREmulationMode.Remoting)
                    WindowsMRRemoting.Disconnect();
                WindowsMREmulation.mode = currentMode;
            }
            EditorGUI.EndDisabledGroup();
        }

        void DrawRemotingOnGUI()
        {
            EditorGUILayout.HelpBox(s_RemotingSettingsReminder);
            EditorGUILayout.HelpBox(s_RemotingConnectionHelp);

            EditorGUI.BeginDisabledGroup(WindowsMRRemoting.isConnected);
            s_RemoteSettings.m_RemoteMachineName = EditorGUILayout.TextField(s_RemoteMachineText, s_RemoteSettings.m_RemoteMachineName);
            s_RemoteSettings.m_EnableAudio = EditorGUILayout.Toggle(s_EnableVideoText, s_RemoteSettings.m_EnableAudio);
            s_RemoteSettings.m_EnableVideo = EditorGUILayout.Toggle(s_EnableAudioText, s_RemoteSettings.m_EnableVideo);
            s_RemoteSettings.m_MaxBitRateKbps = EditorGUILayout.IntSlider(s_MaxBitrateText, s_RemoteSettings.m_MaxBitRateKbps, 1024, s_RemoteSettings.m_MaxBitRateKbps);
            EditorGUI.EndDisabledGroup();

            GUIContent labelContent;
            GUIContent buttonContent;
            ConnectionState connectionState;
            if (!WindowsMRRemoting.TryGetConnectionState(out connectionState))
            {
                Debug.Log("Failed to get connection state! Exiting remoting-window drawing.");
                return;
            }

            if (previousConnectionState == ConnectionState.Connecting && connectionState == ConnectionState.Disconnected)
            {
                ConnectionFailureReason failureReason;
                WindowsMRRemoting.TryGetConnectionFailureReason(out failureReason);

                Debug.Log("Connection Failure Reason: " + failureReason);
            }

            previousConnectionState = connectionState;

            switch (connectionState)
            {
                case ConnectionState.Disconnected:
                default:
                    labelContent = s_ConnectionStateDisconnectedText;
                    buttonContent = s_ConnectionButtonConnectText;
                    break;

                case ConnectionState.Connecting:
                    labelContent = s_ConnectionStateConnectingText;
                    buttonContent = s_ConnectionButtonDisconnectText;
                    break;

                case ConnectionState.Connected:
                    labelContent = s_ConnectionStateConnectedText;
                    buttonContent = s_ConnectionButtonDisconnectText;
                    break;
            }

            EditorGUILayout.BeginHorizontal();
            EditorGUILayout.PrefixLabel(s_ConnectionStatusText, "Button");
            float iconSize = EditorGUIUtility.singleLineHeight;
            Rect iconRect = GUILayoutUtility.GetRect(iconSize, iconSize, GUILayout.ExpandWidth(false));
            EditorGUILayout.LabelField(labelContent);
            EditorGUILayout.EndHorizontal();


        }

        void OnGUI()
        {
            DrawEmulationModeOnGUI();
            if (WindowsMREmulation.mode == WindowsMREmulationMode.Remoting)
                DrawRemotingOnGUI();
        }
    }
}

using System.Collections.Generic;
using UnityEngine;

namespace LightBuzz.Kinect4Azure
{
    public class StickmanManager : MonoBehaviour
    {
        [SerializeField] private GameObject _stickmanPrefab;
        [SerializeField] private CoordinateSpace _space = CoordinateSpace.World;
        [SerializeField] private UniformImage _image;

        private readonly List<Stickman> _stickmen = new List<Stickman>();

        /// <summary>
        /// The number of stick figures available right now.
        /// </summary>
        public int Count => _stickmen?.Count ?? 0;

        /// <summary>
        /// Returns the stick figure at the specified index.
        /// </summary>
        /// <param name="index">The position of the stick figure object in the array.</param>
        /// <returns>The corresponding stick figure element, or null.</returns>
        public Stickman this[int index]
        {
            get
            {
                if (_stickmen == null || _stickmen.Count == 0) return null;

                return _stickmen[index];

            }

        }

        /// <summary>
        /// Update the list of stick figures according to the specified list of bodies.
        /// </summary>
        /// <param name="bodies">A list of bodies.</param>
        public void Load(List<Body> bodies)
        {
            
            if (bodies == null) return;

            if (_stickmen.Count != bodies.Count)
            {
                foreach (Stickman stickman in _stickmen)
                {
                    Destroy(stickman.gameObject);
                }

                _stickmen.Clear();

                foreach (Body body in bodies)
                {
                    GameObject go = Instantiate(_stickmanPrefab, transform);
                    Stickman stickman = go.GetComponent<Stickman>();
                    stickman.Space = _space;

                    _stickmen.Add(stickman);
                }
            }

            for (int i = 0; i < bodies.Count; i++)
            {
                if (_space == CoordinateSpace.World)
                {
                    _stickmen[i].Load(bodies[i]);
                    
                    
                }
                else
                {
                    _stickmen[i].Load(bodies[i], _image);
                    
                }
                
            }
        }

        /// <summary>
        /// Toggles the visibility of the stick figures.
        /// </summary>
        /// <param name="value">True to show; false to hide.</param>
        public void Toggle(bool value)
        {
            if (_stickmen == null) return;

            foreach (Stickman stickman in _stickmen)
            {
                stickman.gameObject.SetActive(value);
                
            }
            
        }

        /// <summary>
        /// Show the stick figures (if hidden).
        /// </summary>
        public void Show()
        {
            Toggle(true);
        }

        /// <summary>
        /// Hides the stick figures (if visible).
        /// </summary>
        public void Hide()
        {
            Toggle(false);
        }

        /// <summary>
        /// Clears the list of stick figures.
        /// </summary>
        public void Clear()
        {
            if (_stickmen == null) return;

            foreach (Stickman stickman in _stickmen)
            {
                Destroy(stickman.gameObject);
            }

            _stickmen.Clear();
        }
    }
}
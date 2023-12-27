
namespace Chiligames.MixedRealityTemplate
{
    public class PunOVRGrabber : OVRGrabber
    {
        //HandTracking related
        private OVRHand trackingHand;
        private float pinchThreshold = 0.7f;

        protected override void Awake()
        {
            base.Awake();
            if(GetComponent<OVRHand>() != null)
            {
                trackingHand = GetComponent<OVRHand>();
            }
        }

        public override void Update()
        {
            base.Update();
            //If hand tracking component detected, check pinch for grabbing mechanism.
            if (trackingHand != null)
            {
                CheckPinch();

                if (!trackingHand.IsDataHighConfidence)
                {
                    GrabEnd();
                }
            }
        }

        //If the pinch strenght is bigger than the threshold, call GrabBegin(), if smaller, call GrabEnd().
        private void CheckPinch()
        {
            float pinchStrenght = trackingHand.GetFingerPinchStrength(OVRHand.HandFinger.Index);

            if(!m_grabbedObj && pinchStrenght > pinchThreshold && m_grabCandidates.Count > 0)
            {
                GrabBegin();
            }
            else if (pinchStrenght < pinchThreshold)
            {
                GrabEnd();
            }
        }
    }
}

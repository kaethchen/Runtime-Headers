@class NSTextField, NSScrollView, CAAttenuationView, CASurroundPannerView, NSView;

@interface AUPannerViewPriv : AUPannerView {
    struct OpaqueAudioComponentInstance { } *mAudioUnit;
    struct AUListenerBase { } *mAUEventListener;
    NSTextField *unitNameTextField;
    NSTextField *manufacturerTextField;
    NSTextField *azimuthTextField;
    NSTextField *distanceTextField;
    NSTextField *elevationTextField;
    NSTextField *gainTextField;
    CASurroundPannerView *pannerView;
    CAAttenuationView *attenuationView;
    NSTextField *referenceDistanceTextField;
    NSView *parametersView;
    NSScrollView *parameterScrollView;
    struct AUDistanceAttenuation_Data { unsigned int x0; struct AUDistanceAttenuationPair { float x0; float x1; } x1[1]; } *attenuationData;
}

- (struct OpaqueAudioComponentInstance { } *)audioUnit;
- (void)setAudioUnit:(struct OpaqueAudioComponentInstance { } *)a0;
- (BOOL)acceptsFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)mouseDown:(id)a0;
- (void)viewWillMoveToSuperview:(id)a0;
- (void)changeDistance:(id)a0;
- (void)priv_eventListener:(void *)a0 event:(const struct AudioUnitEvent { unsigned int x0; union { struct AudioUnitParameter { struct OpaqueAudioComponentInstance *x0; unsigned int x1; unsigned int x2; unsigned int x3; } x0; struct AudioUnitProperty { struct OpaqueAudioComponentInstance *x0; unsigned int x1; unsigned int x2; unsigned int x3; } x1; } x1; } *)a1 value:(float)a2;
- (void)changeAzimuth:(id)a0;
- (void)changeElevation:(id)a0;
- (void)changeGain:(id)a0;
- (void)changeReferenceDistance:(id)a0;
- (void)handleAttenuationDataChanged:(id)a0;
- (void)handleAzimuthAndDistanceChanged:(id)a0;
- (void)handleAzimuthChanged:(id)a0;
- (void)handleDistanceChanged:(id)a0;
- (void)handleElevationChanged:(id)a0;
- (void)priv_addListeners;
- (void)priv_removeListeners;
- (void)priv_synchronizeUIWithParameterValues;
- (void)updateAttenuationCurve;

@end

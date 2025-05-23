@protocol GCAdaptiveTriggers, GCControllerHIDInfo;

@interface GCDualSenseAdaptiveTrigger : GCControllerButtonInput {
    id<GCControllerHIDInfo> _hidInfo;
    id<GCAdaptiveTriggers> _adaptiveTriggers;
}

@property (nonatomic) int index;
@property (nonatomic) long long mode;
@property (nonatomic) long long status;
@property (nonatomic) float armPosition;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)updateStatus;
- (void)sendAdaptiveTriggerPayloadDict:(id)a0;
- (void)locateAdaptiveTriggerComponent;
- (void)locateControllerManagerApp;
- (void)observeChangesForAdaptiveTriggers:(id)a0;
- (void)sendAdaptiveTriggerPayload:(id)a0;
- (void)setModeFeedbackWithResistiveStrengths:(struct { float x0[10]; })a0;
- (void)setModeFeedbackWithStartPosition:(float)a0 resistiveStrength:(float)a1;
- (void)setModeOff;
- (void)setModeSlopeFeedbackWithStartPosition:(float)a0 endPosition:(float)a1 startStrength:(float)a2 endStrength:(float)a3;
- (void)setModeVibrationWithAmplitudes:(struct { float x0[10]; })a0 frequency:(float)a1;
- (void)setModeVibrationWithStartPosition:(float)a0 amplitude:(float)a1 frequency:(float)a2;
- (void)setModeWeaponWithStartPosition:(float)a0 endPosition:(float)a1 resistiveStrength:(float)a2;
- (void)stopObservingChangesForAdaptiveTriggers:(id)a0;

@end

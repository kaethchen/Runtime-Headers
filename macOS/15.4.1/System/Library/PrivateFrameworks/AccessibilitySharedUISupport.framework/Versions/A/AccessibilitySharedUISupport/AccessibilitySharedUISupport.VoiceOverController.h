@interface AccessibilitySharedUISupport.VoiceOverController : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ _recognizedCommandIdentifier;
    void /* unknown type, empty encoding */ _enabled;
    void /* unknown type, empty encoding */ _speakingRate;
    void /* unknown type, empty encoding */ _voiceOverEnabledChanged;
}

- (void)keyboardWillHideWithNotification:(id)a0;
- (void)keyboardWillShowWithNotification:(id)a0;
- (void)_voiceOverEnabledChangedMacWithNotification:(id)a0;
- (void)_votTrainingInfoDidUpdateWithNotification:(id)a0;
- (void)_votTrainingSpeakingRateDidUpdateWithNotification:(id)a0;
- (void)updateRecognizedGestureNotificationMacWithNotification:(id)a0;

@end

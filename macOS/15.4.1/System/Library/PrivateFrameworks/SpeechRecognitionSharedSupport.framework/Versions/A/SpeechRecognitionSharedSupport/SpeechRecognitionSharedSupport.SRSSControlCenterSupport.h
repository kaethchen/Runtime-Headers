@interface SpeechRecognitionSharedSupport.SRSSControlCenterSupport : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ _microphoneLevel;
    void /* unknown type, empty encoding */ _listening;
    void /* unknown type, empty encoding */ _activeMicrophones;
    void /* unknown type, empty encoding */ _activeLanguages;
    void /* unknown type, empty encoding */ lastPublishedMicrophoneLevel;
    void /* unknown type, empty encoding */ lastPublishedMicrophoneTime;
    void /* unknown type, empty encoding */ isMonitoringVoiceControl;
    void /* unknown type, empty encoding */ dictationConnection;
}

- (void)_updateMonitoring;
- (void)_updateLanguages;
- (void)_updateListeningWithNote:(id)a0;
- (void)_updateMicrophones;

@end

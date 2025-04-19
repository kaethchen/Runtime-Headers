@interface AdaptiveVoiceShortcuts.AVSAudioProvider : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ audioEngine;
    void /* unknown type, empty encoding */ audioSession;
    void /* unknown type, empty encoding */ inputNode;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ isListening;
    void /* unknown type, empty encoding */ audioSessionSubscribed;
    void /* unknown type, empty encoding */ audioSessionResetSubscribed;
}

- (void)handleAudioSessionInterruptionWithNotification:(id)a0;
- (void)handleAudioSessionResetWithNotification:(id)a0;

@end

@interface HeadGestures.HGCustomizedAudioPlayer : HeadGestures.HGAudioPlayer {
    void /* unknown type, empty encoding */ assetManager;
    void /* unknown type, empty encoding */ audioEngine;
    void /* unknown type, empty encoding */ backgroundAudioNode;
    void /* unknown type, empty encoding */ partGestureAudioNode;
    void /* unknown type, empty encoding */ headGestureAudioNode;
    void /* unknown type, empty encoding */ environmentNode;
    void /* unknown type, empty encoding */ renderAlgo;
}

- (void)handleAudioEngineConfigurationChangeWithNotification:(id)a0;
- (void)handleInterruptionWithNotification:(id)a0;

@end

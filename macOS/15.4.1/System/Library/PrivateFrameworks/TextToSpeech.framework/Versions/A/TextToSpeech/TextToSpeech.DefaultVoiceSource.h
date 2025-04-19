@interface TextToSpeech.DefaultVoiceSource : SwiftNativeNSObject <TTSAXResourceManagerObserver> {
    void /* unknown type, empty encoding */ executor;
    void /* unknown type, empty encoding */ voicesCache;
    void /* unknown type, empty encoding */ streamContinuation;
    void /* unknown type, empty encoding */ debouncer;
}

- (id)init;
- (void)resourceCacheDidReceiveUpdate;

@end

@class AVAudioFormat, AVSpeechSynthesisProviderVoice;

@interface TextToSpeech.TTSAURenderer : SwiftNativeNSObject {
    void /* unknown type, empty encoding */ executor;
    void /* unknown type, empty encoding */ renderDispatchQueue;
    void /* unknown type, empty encoding */ audioUnit;
    void /* unknown type, empty encoding */ audioFormat;
    void /* unknown type, empty encoding */ currentRequest;
    void /* unknown type, empty encoding */ chunkSize;
    void /* unknown type, empty encoding */ renderedFrames;
    void /* unknown type, empty encoding */ renderTask;
    void /* unknown type, empty encoding */ chainInitialized;
    void /* unknown type, empty encoding */ markerBuffer;
    void /* unknown type, empty encoding */ currentVoiceParameters;
    void /* unknown type, empty encoding */ trapAssertion;
    void /* unknown type, empty encoding */ effectChain;
}

+ (void)formatForVoice:(AVSpeechSynthesisProviderVoice *)a0 completionHandler:(void (^)(AVAudioFormat *))a1;

@end

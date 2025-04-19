@class ZMSpeechSynthesizer, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ZMOutputManager : NSObject {
    ZMSpeechSynthesizer *_synth;
    BOOL _shouldClearOutputQueue;
    NSObject<OS_dispatch_queue> *_outputQueue;
    NSDictionary *_speechSubstitutions;
}

@property BOOL isSpeaking;

- (id)init;
- (void).cxx_destruct;
- (void)speakString:(id)a0;
- (void)_clearOutputQueue;
- (id)_literalStringForString:(id)a0;
- (void)_speakString:(id)a0;
- (void)_speakStringLiterally:(id)a0;
- (id)_speechSubstitutions;
- (id)_stringToSpeakForString:(id)a0;
- (id)_synth;
- (void)handleDefaultVoiceChange;
- (void)performBlockOnOutputThread:(id /* block */)a0 waitUntilDone:(BOOL)a1;
- (void)speakStringLiterally:(id)a0;
- (void)stopAllJobs;

@end

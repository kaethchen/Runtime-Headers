@class NSString, NSArray, NSURL, TTSSpeechRequest, NSCondition, NSObject, TTSSpeechSynthesizer, TTSSpeechString, TTSSpeechVoice, NSNumber;
@protocol OS_dispatch_queue;

@interface BFSpeechChannel : NSObject <TTSSpeechSynthesizerDelegate>

@property (retain, nonatomic) TTSSpeechSynthesizer *synthesizer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *channelOperationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) TTSSpeechRequest *currentRequest;
@property (retain, nonatomic) TTSSpeechString *currentSpeechString;
@property (nonatomic) unsigned long long channelState;
@property (nonatomic) BOOL synthesizerShouldReset;
@property (nonatomic) BOOL processIsVo;
@property (copy, nonatomic) id /* block */ pendingStopBlock;
@property (retain, nonatomic) NSCondition *speechFinished;
@property (nonatomic) struct SpeechChannelRecord { long long x0[1]; } *legacyIdentifier;
@property (retain, nonatomic) TTSSpeechVoice *voice;
@property (retain, nonatomic) NSNumber *rate;
@property (retain, nonatomic) NSNumber *pitch;
@property (retain, nonatomic) NSNumber *volume;
@property (retain, nonatomic) NSNumber *pitchMod;
@property (readonly, nonatomic) NSNumber *supportsPhatics;
@property (retain, nonatomic) NSArray *phonemeSubstitutions;
@property (retain, nonatomic) NSURL *outputUrl;
@property (nonatomic) struct OpaqueExtAudioFile { } *audioFile;
@property (nonatomic) BOOL numberLiteralMode;
@property (nonatomic) BOOL characterLiteralMode;
@property (nonatomic) unsigned int audioDeviceId;
@property (nonatomic) void *refCon;
@property (retain, nonatomic) NSString *speechSource;
@property (nonatomic) BOOL speechActive;
@property (nonatomic) BOOL speechPaused;
@property (nonatomic) void /* function */ *cfWordCallback;
@property (nonatomic) void /* function */ *wordCallback;
@property (nonatomic) void /* function */ *syncCallback;
@property (nonatomic) void /* function */ *errorCallback;
@property (nonatomic) void /* function */ *phonemeCallback;
@property (nonatomic) void /* function */ *speechDoneCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)reset;
- (void)terminate;
- (id)initWithVoice:(id)a0;
- (short)stop:(int)a0;
- (void)_callSpeechDone;
- (void)_closeAudioFile;
- (struct OpaqueExtAudioFile { } *)_createExtFileForUrl:(id)a0;
- (void)_forceResetChannel;
- (void)_resetSynthesizer;
- (void)_safelyCallPendingStopBlock;
- (void)_subscribeToDefaultDeviceChanges;
- (id)badStartingCharacterSet;
- (short)continueSpeech;
- (short)pause:(int)a0;
- (short)speak:(id)a0;
- (void)speechSynthesizer:(id)a0 didContinueSpeakingRequest:(id)a1;
- (void)speechSynthesizer:(id)a0 didEncounterMarker:(id)a1 forRequest:(id)a2;
- (void)speechSynthesizer:(id)a0 didFinishSpeakingRequest:(id)a1 successfully:(BOOL)a2 phonemesSpoken:(id)a3 withError:(id)a4;
- (void)speechSynthesizer:(id)a0 didFinishSpeakingRequest:(id)a1 successfully:(BOOL)a2 withError:(id)a3;
- (void)speechSynthesizer:(id)a0 didPauseSpeakingRequest:(id)a1;

@end

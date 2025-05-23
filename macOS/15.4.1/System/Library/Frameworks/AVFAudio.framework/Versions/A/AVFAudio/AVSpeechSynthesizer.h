@class NSArray;
@protocol AVSpeechSynthesizerDelegate;

@interface AVSpeechSynthesizer : NSObject

@property (class, readonly, nonatomic) unsigned long long personalVoiceAuthorizationStatus;

@property (weak, nonatomic) id<AVSpeechSynthesizerDelegate> delegate;
@property (readonly, nonatomic, getter=isSpeaking) BOOL speaking;
@property (readonly, nonatomic, getter=isPaused) BOOL paused;
@property (retain, nonatomic) NSArray *outputChannels;
@property (nonatomic) BOOL usesApplicationAudioSession;
@property (nonatomic) BOOL mixToTelephonyUplink;

+ (void)initialize;
+ (void)requestPersonalVoiceAuthorizationWithCompletionHandler:(id /* block */)a0;

- (void).cxx_destruct;
- (BOOL)continueSpeaking;
- (BOOL)pauseSpeakingAtBoundary:(long long)a0;
- (BOOL)stopSpeakingAtBoundary:(long long)a0;
- (void)speakUtterance:(id)a0;
- (void)writeUtterance:(id)a0 toBufferCallback:(id /* block */)a1;
- (void)writeUtterance:(id)a0 toBufferCallback:(id /* block */)a1 toMarkerCallback:(id /* block */)a2;

@end

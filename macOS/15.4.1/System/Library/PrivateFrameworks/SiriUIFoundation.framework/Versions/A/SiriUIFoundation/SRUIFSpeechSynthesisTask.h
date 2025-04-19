@class NSString, SAUIAudioData, NSDictionary, SiriTTSBaseRequest, SAVoice, NSError;
@protocol SRUIFSpeechSynthesisTaskDelegate;

@interface SRUIFSpeechSynthesisTask : NSObject

@property (nonatomic, getter=isEligibleForSynthesis, setter=_setEligibleForSynthesis:) BOOL eligibleForSynthesis;
@property (nonatomic, getter=isEligibleForProcessing, setter=_setEligibleForProcessing:) BOOL eligibleForProcessing;
@property (readonly, nonatomic, getter=_completion) id /* block */ completion;
@property (copy, nonatomic, setter=_setText:) NSString *text;
@property (setter=_setPreparationBlockCompleted:) BOOL preparationBlockCompleted;
@property (setter=_setDurationHasElapsed:) BOOL durationHasElapsed;
@property (readonly, nonatomic) SAUIAudioData *audioData;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *sessionId;
@property (readonly, nonatomic) SAVoice *preferredVoice;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *gender;
@property (nonatomic) BOOL isPhonetic;
@property (readonly, nonatomic, getter=isProvisional) BOOL provisional;
@property (nonatomic, getter=isDelayed) BOOL delayed;
@property (nonatomic) BOOL canUseServerTTS;
@property (retain, nonatomic) SiriTTSBaseRequest *ttsSessionRequest;
@property (nonatomic) long long synthesisResult;
@property (retain, nonatomic) NSError *synthesisError;
@property (weak, nonatomic) id<SRUIFSpeechSynthesisTaskDelegate> delegate;
@property (readonly, nonatomic) NSDictionary *analyticsContext;
@property (retain, nonatomic) NSDictionary *speakableContextInfo;
@property (nonatomic) BOOL shouldCache;

- (id)description;
- (void).cxx_destruct;
- (void)_updateSynthesisEligibility;
- (void)executeCompletion;
- (id)initWithText:(id)a0 audioData:(id)a1 identifier:(id)a2 sessionId:(id)a3 preferredVoice:(id)a4 language:(id)a5 gender:(id)a6 provisional:(BOOL)a7 eligibleAfterDuration:(double)a8 delayed:(BOOL)a9 preparation:(id /* block */)a10 completion:(id /* block */)a11 analyticsContext:(id)a12 speakableContextInfo:(id)a13 canUseServerTTS:(BOOL)a14 eligibilityChangedQueue:(id)a15;

@end

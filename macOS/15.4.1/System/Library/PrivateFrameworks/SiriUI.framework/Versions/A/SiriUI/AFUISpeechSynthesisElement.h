@class NSString, SAUIAudioData;
@protocol AFUISpeechSynthesisElementDelegate;

@interface AFUISpeechSynthesisElement : NSObject

@property (nonatomic, getter=isEligibleForSynthesis, setter=_setEligibleForSynthesis:) BOOL eligibleForSynthesis;
@property (readonly, nonatomic, getter=_completion) id /* block */ completion;
@property (copy, nonatomic, setter=_setText:) NSString *text;
@property (setter=_setPreparationBlockCompleted:) BOOL preprationBlockCompleted;
@property (setter=_setDurationHasElapsed:) BOOL durationHasElapsed;
@property (readonly, nonatomic) SAUIAudioData *audioData;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) BOOL isPhonetic;
@property (nonatomic) BOOL isSilent;
@property (nonatomic) BOOL synthesizesWhileRecording;
@property (readonly, nonatomic, getter=isProvisional) BOOL provisional;
@property (nonatomic) long long synthesisResult;
@property (weak, nonatomic) id<AFUISpeechSynthesisElementDelegate> delegate;
@property (readonly, nonatomic) NSString *animationIdentifier;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)_updateSynthesisEligibility;
- (void)executeCompletion;
- (id)initWithText:(id)a0 audioData:(id)a1 identifier:(id)a2 isPhonetic:(BOOL)a3 isSilent:(BOOL)a4 synthesizesWhileRecording:(BOOL)a5 provisional:(BOOL)a6 eligibleAfterDuration:(double)a7 preparation:(id /* block */)a8 completion:(id /* block */)a9 animationIdentifier:(id)a10;

@end

@class SCROutputAction, NSString, NSDictionary, SCRSpeechSynthesizerOptions, NSLock;

@interface SCROutputSpeechSynthesizer : SCRSpeechSynthesizer <SCROutputSpeechSynthesizerProtocol>

@property (retain, nonatomic) NSLock *_synthesizerLock;
@property (retain, nonatomic) SCRSpeechSynthesizerOptions *synthesizerOptions;
@property (nonatomic) float rate;
@property (nonatomic) float pitchBase;
@property (nonatomic) float volume;
@property (retain, nonatomic) NSDictionary *perVoiceSettings;
@property (retain, nonatomic) id owner;
@property (retain, nonatomic) SCROutputAction *action;
@property (copy, nonatomic) NSString *category;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithVoice:(id)a0;
- (void)setVoice:(id)a0;
- (BOOL)canBePaused;
- (void)startAction;
- (void)lockSynthesizer;
- (void)_clearOptions;
- (void)_outputTestingLogging:(id)a0;
- (void)adjustOnTheFlyChangesForAction:(id)a0 adjustRate:(BOOL)a1 adjustPitch:(BOOL)a2 adjustVolume:(BOOL)a3 adjustVoice:(BOOL)a4 adjustingCurrentSpeech:(BOOL)a5 lastSpokenWordRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a6 speakResults:(BOOL)a7;
- (BOOL)shouldPostWhenSpeechCompletes;
- (void)unlockSynthesizer;

@end

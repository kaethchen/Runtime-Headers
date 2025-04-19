@class TTSSpeechSynthesizer, NSArray, AVAudioFile, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SCRSpeechSynthesizer : NSObject <TTSSpeechSynthesizerDelegate>

@property (nonatomic) BOOL _wordCallBackRegistered;
@property (nonatomic) BOOL synthPaused;
@property (retain, nonatomic) AVAudioFile *outputFile;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) struct __CFMessagePort { } *_speechSynthesizerConsoleRemoteMessagePort;
@property (retain, nonatomic) NSArray *characterRanges;
@property (retain, nonatomic) TTSSpeechSynthesizer *synthesizer;
@property (nonatomic) BOOL makeCallbacksOnTTSThread;
@property (weak, nonatomic) id delegate;
@property (copy, nonatomic) NSString *voice;
@property (readonly, nonatomic) BOOL isSpeaking;
@property (readonly, nonatomic) BOOL isPaused;
@property (readonly, nonatomic) NSArray *supportedCharacterRanges;
@property (readonly, nonatomic) NSArray *supportedLiteralCharacterRanges;
@property (readonly, nonatomic) float pitchBase;
@property (readonly, nonatomic) BOOL shouldPostWhenSpeechCompletes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)availableVoices;
+ (id)attributesForVoice:(id)a0;
+ (id)defaultVoice;
+ (id)combinedProsodyMarkupForIdentifier:(id)a0 string:(id)a1 rate:(id)a2 pitch:(id)a3 volume:(id)a4;
+ (id)speechMarkupStringForType:(long long)a0 forIdentifier:(id)a1 string:(id)a2;
+ (void)_setShouldShortCircuitSpeechSynthesizer:(BOOL)a0;
+ (id)bestVoiceForSelectedLanguage:(id)a0;
+ (id)bestVoiceForSelectedVoice:(id)a0 language:(id)a1;
+ (id)copyIdentifierStringForVoiceSpec:(struct VoiceSpec { unsigned int x0; unsigned int x1; } *)a0;
+ (unsigned int)creatorCodeForVoice:(id)a0;
+ (BOOL)localeHasSameLanguage:(id)a0 matchesLocale:(id)a1;
+ (BOOL)makeVoiceForIdentifier:(struct __CFString { } *)a0 voiceSpec:(struct VoiceSpec { unsigned int x0; unsigned int x1; } *)a1;
+ (BOOL)voiceIdentifier:(id)a0 matchesLocale:(id)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (float)_volume;
- (BOOL)_beginSpeakingString:(id)a0 optionallyToURL:(id)a1;
- (void)_continueSpeaking;
- (void)_pauseSpeakingAtBoundary:(unsigned int)a0;
- (float)_pitchBase;
- (float)_rate;
- (void)_setPitchBase:(float)a0;
- (void)_setRate:(float)a0;
- (void)_setVolume:(float)a0;
- (void)_stopSpeakingAtBoundary:(unsigned int)a0;
- (id)initWithVoice:(id)a0;
- (BOOL)startSpeakingString:(id)a0;
- (BOOL)startSpeakingString:(id)a0 toURL:(id)a1;
- (void)stopSpeaking;
- (void)speechSynthesizer:(id)a0 didContinueSpeakingRequest:(id)a1;
- (void)speechSynthesizer:(id)a0 didFinishSpeakingRequest:(id)a1 successfully:(BOOL)a2 withError:(id)a3;
- (void)speechSynthesizer:(id)a0 didPauseSpeakingRequest:(id)a1;
- (void)speechSynthesizer:(id)a0 willSpeakRangeOfSpeechString:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 forRequest:(id)a2;
- (unsigned int)_audioDeviceID;
- (void)_handleSpeechDoneCallback:(BOOL)a0;
- (id)_perVoiceSettings;
- (void)_setAudioDeviceID:(unsigned int)a0;
- (void)_setPerVoiceSettings:(id)a0;
- (void)_stopAllSpeechNotify:(id)a0;
- (void)_updateCharRanges;

@end

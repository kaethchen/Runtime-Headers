@class AXSSAudioInputDevice, AXSSAudioDeviceManager, AXSSSpeechSynthesisQueue, NSString, AXSSSpeechSynthesizer, AVSpeechSynthesisVoice;
@protocol AXSSSpeechSynthesisControllerDelegate;

@interface AXSSSpeechSynthesisController : NSObject <AVSpeechSynthesizerDelegate, AXSSAudioDeviceManagerDelegate>

@property (retain, nonatomic) AXSSSpeechSynthesizer *synth;
@property (readonly, weak, nonatomic) AXSSSpeechSynthesisQueue *speechQueue;
@property (retain, nonatomic) AXSSAudioDeviceManager *audioDeviceManager;
@property (retain, nonatomic) AXSSAudioInputDevice *currentInputDeviceCache;
@property (retain, nonatomic) AVSpeechSynthesisVoice *voice;
@property (nonatomic) BOOL speakToDefaultOutputDevice;
@property (nonatomic) int speechSynthesisBehavior;
@property (readonly, nonatomic, getter=isSpeaking) BOOL speaking;
@property (weak, nonatomic) id<AXSSSpeechSynthesisControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)stopSpeaking;
- (void)tearDown;
- (void)speak:(id)a0;
- (void)pauseSpeaking;
- (void)speechSynthesizer:(id)a0 didFinishSpeechUtterance:(id)a1;
- (void)speechSynthesizer:(id)a0 willSpeakRangeOfSpeechString:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 utterance:(id)a2;
- (void)_speak:(id)a0;
- (void)_prepareToSpeakIntoAccessibilityAggregateDevice;
- (void)_prepareToSpeakIntoDefaultOutputDevice;
- (void)audioDeviceManagerDefaultInputDeviceChanged:(id)a0;
- (void)audioDeviceManagerDefaultOutputDeviceChanged:(id)a0;
- (void)configureAudioOutputDevice;
- (void)prepareToSpeak;
- (void)restoreDefaultInputDevice;
- (void)resumeSpeaking;
- (void)setVoiceIdentifier:(id)a0 withLanguage:(id)a1;
- (void)setupSynthesizer;

@end

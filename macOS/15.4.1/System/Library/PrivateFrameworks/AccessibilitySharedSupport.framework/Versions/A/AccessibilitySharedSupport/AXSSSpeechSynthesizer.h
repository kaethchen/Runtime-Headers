@class AVSpeechSynthesisVoice, AVSpeechSynthesizer;

@interface AXSSSpeechSynthesizer : NSObject

@property (readonly, nonatomic) AVSpeechSynthesizer *synth;
@property (nonatomic) unsigned int audioDeviceId;
@property (readonly, nonatomic) BOOL speaking;
@property (retain, nonatomic) AVSpeechSynthesisVoice *voice;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)startSpeakingString:(id)a0;
- (void)stopSpeaking;
- (void)pauseSpeaking;
- (void)resumeSpeaking;

@end

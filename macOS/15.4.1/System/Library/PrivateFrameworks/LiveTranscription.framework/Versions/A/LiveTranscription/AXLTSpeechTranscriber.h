@class NSString, AXLTTranscriber, AVAudioSession, AVAudioEngine, NSDate;
@protocol AXLTTranscriberDelegateProtocol;

@interface AXLTSpeechTranscriber : NSObject <SFSpeechRecognizerDelegate, SFSpeechRecognitionTaskDelegate, AXLTTranscriberProtocol>

@property (weak, nonatomic) id<AXLTTranscriberDelegateProtocol> delegate;
@property (retain, nonatomic) AVAudioEngine *audioEngine;
@property (retain, nonatomic) AVAudioSession *audioSession;
@property (retain, nonatomic) AXLTTranscriber *transcriber;
@property (nonatomic) int pid;
@property (retain, nonatomic) NSDate *bufferLogTime;
@property (retain, nonatomic) NSDate *textLogTime;
@property (retain, nonatomic) NSDate *sessionStartTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isTranscribing;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)cleanUp;
- (void)setupAudioSession;
- (void)audioEngineConfigurationDidChange:(id)a0;
- (void)calcHistogramForBuffer:(id)a0;
- (void)initializeAudioTap;
- (void)mediaServicesWereReset:(id)a0;
- (void)resetTranscription;
- (void)setupTranscriberIfNeeded;
- (BOOL)startTranscription:(id *)a0;
- (BOOL)stopTranscription:(id *)a0;

@end

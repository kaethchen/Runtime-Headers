@class NSString, NSDictionary, SSRSpeakerRecognitionContext, SSRSpeakerAnalyzerPSR;
@protocol SSRSpeakerRecognizerDelegate;

@interface SSRSpeakerRecognizerPSR : NSObject <SSRSpeakerAnalyzerPSRDelegate, SSRSpeakerRecognizer>

@property (retain, nonatomic) SSRSpeakerRecognitionContext *spIdCtx;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSDictionary *lastSpeakerInfo;
@property (weak, nonatomic) id<SSRSpeakerRecognizerDelegate> delegate;
@property (retain, nonatomic) NSString *invocationStyleStr;
@property (nonatomic) unsigned long long extraSamplesAtStart;
@property (nonatomic) unsigned long long vtEndInSampleCount;
@property (nonatomic) unsigned long long endInSampleCount;
@property (nonatomic) unsigned long long numSamplesProcessed;
@property (nonatomic) BOOL processingEnded;
@property (nonatomic) unsigned long long totalNumSamplesReceived;
@property (retain, nonatomic) SSRSpeakerAnalyzerPSR *psrAnalyzer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *lastScoreCard;

- (void)dealloc;
- (void).cxx_destruct;
- (void)endAudio;
- (void)resetWithContext:(id)a0;
- (id)initWithContext:(id)a0 delegate:(id)a1;
- (void)_initializeWithContext:(id)a0;
- (unsigned long long)getSpeakerRecognizerProcessingTime;
- (void)processAudioData:(id)a0 numSamples:(unsigned long long)a1;
- (void)voiceRecognitionPSRAnalyzer:(id)a0 hasVoiceRecognitionInfo:(id)a1;
- (void)voiceRecognitionPSRAnalyzerFinishedProcessing:(id)a0 withVoiceRecognitionInfo:(id)a1;

@end

@class NSString, CAReporter;

@interface CSAdamSpeechMetricsManager : NSObject <NSObject>

@property (nonatomic) unsigned long long adamClientSessionId;
@property (retain, nonatomic) CAReporter *reporter;
@property BOOL isDisposed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (int)setAudioIssueDetectorFormat:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a0 numFrames:(unsigned int)a1;
- (int)audioIssueDetectorAnalyzeBuffer:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; })a0 numFrames:(unsigned int)a1 hostTime:(unsigned long long)a2;
- (void)stopAndDispose;
- (void)updateWithNewReporterID;

@end

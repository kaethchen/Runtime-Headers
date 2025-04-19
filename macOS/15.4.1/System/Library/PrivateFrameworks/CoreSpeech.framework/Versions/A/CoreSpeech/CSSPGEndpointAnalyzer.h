@protocol CSSPGEndpointAnalyzerDelegate;

@interface CSSPGEndpointAnalyzer : NSObject

@property (weak, nonatomic) id<CSSPGEndpointAnalyzerDelegate> delegate;

- (void).cxx_destruct;
- (void)start;
- (void)reset;
- (void)stop;
- (void)addAudio:(id)a0 numSamples:(unsigned long long)a1;
- (long long)getFrameDurationMs;
- (id)initWithAnalyzeMode;
- (id)initWithEndpointThreshold:(float)a0;

@end

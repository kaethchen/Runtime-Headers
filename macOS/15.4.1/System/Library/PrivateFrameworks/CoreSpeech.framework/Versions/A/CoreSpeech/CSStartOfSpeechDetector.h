@protocol CSStartOfSpeechDetectorDelegate;

@interface CSStartOfSpeechDetector : NSObject

@property (weak, nonatomic) id<CSStartOfSpeechDetectorDelegate> delegate;

- (void).cxx_destruct;
- (void)addAudio:(id)a0 numSamples:(unsigned long long)a1;
- (void)endAudio;
- (id)initWithConfig:(id)a0 samplingRate:(unsigned long long)a1 minSpeechFrames:(unsigned long long)a2 numLeadingFrames:(unsigned long long)a3 delegate:(id)a4;
- (void)resetForNewRequest;

@end

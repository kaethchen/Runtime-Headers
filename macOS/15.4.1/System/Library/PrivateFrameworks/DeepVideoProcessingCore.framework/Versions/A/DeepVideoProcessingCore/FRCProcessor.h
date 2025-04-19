@class VEOpticalFlowEstimator, OpticalFlowProcessor;
@protocol FrameSynthesizerProtocol;

@interface FRCProcessor : BaseProcessor {
    OpticalFlowProcessor *_opticalFlowProcessor;
    struct { struct __CVBuffer *forwardFlow; struct __CVBuffer *backwardFlow; } _synthesisFlowPair;
    struct CGSize { double width; double height; } _synthesisFlowDimension;
    struct { struct __CVBuffer *forwardFlow; struct __CVBuffer *backwardFlow; } _sharedFlowPair;
    struct CGSize { double width; double height; } _sharedFlowDimension;
    VEOpticalFlowEstimator *_flowAdaptation;
    id<FrameSynthesizerProtocol> _synthesis;
    long long _flowUsage;
    unsigned long long _frameWidth;
    unsigned long long _frameHeight;
    BOOL _usePrecomputedFlow;
    BOOL _adaptationLayerNeeded;
    BOOL _streamingMode;
    struct __CVBuffer { } *_sharedForwardFlow;
    struct __CVBuffer { } *_sharedBackwardFlow;
    struct __CVBuffer { } *_synthesisForwardFlow;
    struct __CVBuffer { } *_synthesisBackwardFlow;
}

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)finishProcessing;
- (BOOL)initFlowAdaptationWithError:(id *)a0;
- (BOOL)initOpticalFlowWithQualityPrioritization:(long long)a0 revision:(long long)a1 error:(id *)a2;
- (id)initWithFrameWidth:(long long)a0 FrameHeight:(long long)a1 usePrecomputedFlow:(BOOL)a2 revision:(long long)a3;
- (BOOL)processWithFrameRateParams:(id)a0 error:(id *)a1;
- (void)releaseInternalBuffers;
- (BOOL)startSessionWithFrameRateConfig:(id)a0 error:(id *)a1;

@end

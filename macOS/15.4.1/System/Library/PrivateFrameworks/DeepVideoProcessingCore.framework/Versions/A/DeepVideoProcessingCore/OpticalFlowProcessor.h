@class VEOpticalFlowEstimator, GenericFlow, FRCOpticalFlowEstimator;

@interface OpticalFlowProcessor : BaseProcessor {
    unsigned long long _width;
    unsigned long long _height;
    BOOL _onDemandOpticalFlowBuffersAllocation;
    BOOL _skipLastLevelFlow;
    FRCOpticalFlowEstimator *_opticalFlowSPI;
    VEOpticalFlowEstimator *_opticalFlow;
    GenericFlow *_genericFlow;
    BOOL _useHomographyInFlow;
    long long _usage;
    long long _rotation;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _preferredTransform;
}

@property (nonatomic) long long revision;
@property (nonatomic) BOOL streamingMode;
@property (nonatomic) BOOL EnableGpuWaitForComplete;
@property (nonatomic) BOOL flowOnlyMode;

- (void).cxx_destruct;
- (BOOL)finishProcessing;
- (long long)getFrameRotation:(long long)a0;
- (id)initWithFrameWidth:(long long)a0 FrameHeight:(long long)a1 revision:(long long)a2;
- (BOOL)opticalFlowsFrom:(id)a0 to:(id)a1 forwardFlow:(struct __CVBuffer { } *)a2 backwardFlow:(struct __CVBuffer { } *)a3 streamingMode:(BOOL)a4 error:(id *)a5;
- (BOOL)processWithOpticalFlowParams:(id)a0 error:(id *)a1;
- (BOOL)startSessionWithOpticalFlowConfig:(id)a0 error:(id *)a1;

@end

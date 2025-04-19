@class VEOpticalFlow, ImageProcessor, OFBackwarp;

@interface VEOpticalFlowEstimator : NSObject {
    VEOpticalFlow *_opticalFlow;
    ImageProcessor *_processor;
    BOOL _resourcePreAllocated;
    long long _usage;
    unsigned long long _width;
    unsigned long long _height;
    unsigned int _outputPixelFormat;
    BOOL _matchFlowDimensions;
    unsigned long long _inputWidth;
    unsigned long long _inputHeight;
    OFBackwarp *_backwarp;
    struct __CVBuffer { } *_intermediateFlow;
}

@property (readonly, nonatomic) unsigned long long flowWidth;
@property (readonly, nonatomic) unsigned long long flowHeight;
@property (nonatomic) long long inputRotation;
@property (nonatomic) BOOL streamingMode;
@property (nonatomic) BOOL isFirstFrameInStream;

- (void)dealloc;
- (void).cxx_destruct;
- (void)allocateResources;
- (void)releaseResources;
- (id)initWithUsage:(long long)a0;
- (struct __CVBuffer { } *)allocateFlowBufferFullSize:(BOOL)a0;
- (long long)flowAdaptationFrom:(struct __CVBuffer { } *)a0 to:(struct __CVBuffer { } *)a1 inputForwardFlow:(struct __CVBuffer { } *)a2 inputBackwardFlow:(struct __CVBuffer { } *)a3 outputForwardFlow:(struct __CVBuffer { } *)a4 outputBackwardFlow:(struct __CVBuffer { } *)a5;
- (id)initWithWidth:(long long)a0 height:(long long)a1 configuration:(id)a2;
- (struct __CVBuffer { } *)matchFlow:(struct __CVBuffer { } *)a0;
- (void)matchFlow:(struct __CVBuffer { } *)a0 toFullSizeFlow:(struct __CVBuffer { } *)a1;
- (struct __CVBuffer { } *)opticalFlowFrom:(struct __CVBuffer { } *)a0 to:(struct __CVBuffer { } *)a1;
- (long long)opticalFlowFrom:(struct __CVBuffer { } *)a0 to:(struct __CVBuffer { } *)a1 flow:(struct __CVBuffer { } *)a2;
- (id)opticalFlowsFrom:(struct __CVBuffer { } *)a0 to:(struct __CVBuffer { } *)a1;
- (long long)opticalFlowsFrom:(struct __CVBuffer { } *)a0 to:(struct __CVBuffer { } *)a1 forwardFlow:(struct __CVBuffer { } *)a2 backwardFlow:(struct __CVBuffer { } *)a3;
- (BOOL)skipFirstFramePreProcessing;
- (void)updateFlowOnlyMode:(BOOL)a0;

@end

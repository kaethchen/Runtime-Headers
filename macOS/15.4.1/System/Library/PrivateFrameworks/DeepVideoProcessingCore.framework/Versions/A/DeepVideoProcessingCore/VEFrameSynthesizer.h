@class NSString, FrameSynthesis, ImageProcessor;

@interface VEFrameSynthesizer : NSObject <FrameSynthesizerProtocol> {
    BOOL _resourcePreAllocated;
    long long _usage;
    FrameSynthesis *_synthesis;
    ImageProcessor *_processor;
    unsigned long long _width;
    unsigned long long _height;
    BOOL _featureCreated;
    long long _inputRotation;
    BOOL _inputFlowScaling;
    BOOL _scaledFlowBufferAllocated;
    struct __CVBuffer { } *_scaledForwardFlow;
    struct __CVBuffer { } *_scaledBackwardFlow;
}

@property (readonly, nonatomic) unsigned long long flowWidth;
@property (readonly, nonatomic) unsigned long long flowHeight;
@property (nonatomic) BOOL streamingMode;
@property (nonatomic) BOOL isFirstFrameInStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)allocateResources;
- (void)releaseResources;
- (id)errorWithErrorCode:(long long)a0;
- (id)initWithUsage:(long long)a0;
- (void)allocateScaledFlow;
- (BOOL)checkForwardFlow:(struct __CVBuffer { } *)a0 backwardFlow:(struct __CVBuffer { } *)a1;
- (BOOL)configureSynthesisWithMode:(long long)a0;
- (id)initWithUsage:(long long)a0 qualityMode:(long long)a1;
- (id)initWithUsage:(long long)a0 qualityMode:(long long)a1 useLegacyNormalization:(BOOL)a2;
- (void)releaseScaledFlow;
- (void)setFirstFrame:(struct __CVBuffer { } *)a0 secondFrame:(struct __CVBuffer { } *)a1 forwardFlow:(struct __CVBuffer { } *)a2 backwardFlow:(struct __CVBuffer { } *)a3;
- (BOOL)skipFirstFramePreProcessing;
- (void)synthesizeFrameForTimeScale:(float)a0 destination:(struct __CVBuffer { } *)a1;
- (void)synthesizeFrameFromFirstFrame:(struct __CVBuffer { } *)a0 secondFrame:(struct __CVBuffer { } *)a1 forwardFlow:(struct __CVBuffer { } *)a2 backwardFlow:(struct __CVBuffer { } *)a3 timeScale:(float)a4 destination:(struct __CVBuffer { } *)a5;
- (id)synthesizeFramesFromFirstFrame:(struct __CVBuffer { } *)a0 secondFrame:(struct __CVBuffer { } *)a1 forwardFlow:(struct __CVBuffer { } *)a2 backwardFlow:(struct __CVBuffer { } *)a3 numberOfFrames:(unsigned long long)a4 withError:(id *)a5;
- (id)synthesizeFramesFromFirstFrame:(struct __CVBuffer { } *)a0 secondFrame:(struct __CVBuffer { } *)a1 forwardFlow:(struct __CVBuffer { } *)a2 backwardFlow:(struct __CVBuffer { } *)a3 timeScales:(id)a4 withError:(id *)a5;
- (void)updateFlowSize;

@end

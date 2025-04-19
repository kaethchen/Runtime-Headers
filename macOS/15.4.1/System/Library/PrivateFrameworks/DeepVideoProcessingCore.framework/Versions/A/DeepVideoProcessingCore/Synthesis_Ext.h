@class NSString, Backwarp_VSA, ImageProcessUtility, Forwarp_Ext, Postprocess;
@protocol MTLCommandQueue, MTLDevice, MTLTexture;

@interface Synthesis_Ext : VEMetalBase {
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    Forwarp_Ext *_forwarp;
    Backwarp_VSA *_backwarp;
    Postprocess *_postprocessor;
    ImageProcessUtility *_imageProcessUtility;
    struct { struct __CVBuffer *image; struct __CVBuffer *depth; struct __CVBuffer *flow; struct __CVBuffer *smoothedVelocity; struct __CVBuffer *magnitude; struct __CVBuffer *edge; struct __CVBuffer *tileMaxVelocity; struct __CVBuffer *intermediateTileMaxVelocity; struct __CVBuffer *neighborMaxVelocity; struct __CVBuffer *kernelAlpha; struct __CVBuffer *output; id<MTLTexture> imageTexture; id<MTLTexture> depthTexture; id<MTLTexture> flowTexture; id<MTLTexture> magnitudeTexture; id<MTLTexture> smoothedVelocityTexture; id<MTLTexture> edgeTexture; id<MTLTexture> tileMaxVelocityTexture; id<MTLTexture> intermediateTileMaxVelocityTexture; id<MTLTexture> neighborMaxVelocityTexture; id<MTLTexture> kernelAlphaTexture; id<MTLTexture> outputTexture; unsigned long long tile_size; } _lowresStorage;
    struct { struct __CVBuffer *image; struct __CVBuffer *depth; struct __CVBuffer *flow; struct __CVBuffer *smoothedVelocity; struct __CVBuffer *magnitude; struct __CVBuffer *edge; struct __CVBuffer *tileMaxVelocity; struct __CVBuffer *intermediateTileMaxVelocity; struct __CVBuffer *neighborMaxVelocity; struct __CVBuffer *kernelAlpha; struct __CVBuffer *output; id<MTLTexture> imageTexture; id<MTLTexture> depthTexture; id<MTLTexture> flowTexture; id<MTLTexture> magnitudeTexture; id<MTLTexture> smoothedVelocityTexture; id<MTLTexture> edgeTexture; id<MTLTexture> tileMaxVelocityTexture; id<MTLTexture> intermediateTileMaxVelocityTexture; id<MTLTexture> neighborMaxVelocityTexture; id<MTLTexture> kernelAlphaTexture; id<MTLTexture> outputTexture; unsigned long long tile_size; } _highresStorage;
    struct { unsigned long long render_width; unsigned long long render_height; unsigned long long tilemap_width; unsigned long long tilemap_height; unsigned long long tile_size; unsigned long long intermediateTileMap_width; unsigned long long intermediateTileMap_height; unsigned long long intermediateTile_size; } _lowres;
    struct { unsigned long long render_width; unsigned long long render_height; unsigned long long tilemap_width; unsigned long long tilemap_height; unsigned long long tile_size; unsigned long long intermediateTileMap_width; unsigned long long intermediateTileMap_height; unsigned long long intermediateTile_size; } _highres;
    struct __CVBuffer { } *_inputImage;
    struct __CVBuffer { } *_forwardFlow;
    struct __CVBuffer { } *_backwardFlow;
    struct __CVBuffer { } *_fullresFlow;
    struct __CVBuffer { } *_remainedErrorMask;
    struct __CVBuffer { } *_depth;
    struct __CVBuffer { } *_forerunner;
    struct __CVBuffer { } *_smForerunner;
    struct __CVBuffer { } *_smKernelAlpha;
    id<MTLTexture> _forerunnerTexture;
    id<MTLTexture> _smForerunnerTexture;
    id<MTLTexture> _smKernelAlphaTexture;
    id<MTLTexture> _remainedErrorMaskTexture;
    id<MTLTexture> _inputImageTexture;
    id<MTLTexture> _forwardFlowTexture;
    id<MTLTexture> _backwardFlowTexture;
    id<MTLTexture> _fullresFlowTexture;
    id<MTLTexture> _depthTexture;
    BOOL _resourcesPreAllocated;
    unsigned long long _pyramidLevels;
}

@property (nonatomic) long long usage;
@property (nonatomic) BOOL framePipeline;
@property (nonatomic) unsigned long long synthesisMode;
@property (retain, nonatomic) NSString *debugImage;
@property (nonatomic) BOOL pseudoDepth;
@property (nonatomic) BOOL postprocessOutput;
@property (nonatomic) BOOL image2motion;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMode:(long long)a0;
- (void)releaseResources;
- (void)releaseFeatures;
- (long long)allocateAdditionalBuffersForHybridFromFullresResolution:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; })a0 LowresResolution:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; })a1;
- (long long)allocateResourcesFromWidth:(unsigned long long)a0 Height:(unsigned long long)a1;
- (long long)allocateSynthesisResources:(struct { struct __CVBuffer *x0; struct __CVBuffer *x1; struct __CVBuffer *x2; struct __CVBuffer *x3; struct __CVBuffer *x4; struct __CVBuffer *x5; struct __CVBuffer *x6; struct __CVBuffer *x7; struct __CVBuffer *x8; struct __CVBuffer *x9; struct __CVBuffer *x10; id x11; id x12; id x13; id x14; id x15; id x16; id x17; id x18; id x19; id x20; id x21; unsigned long long x22; } *)a0 Resolution:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; })a1 lowresRender:(BOOL)a2;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; })calculateSynthesisRenderResolutionFromInputWidth:(unsigned long long)a0 InputHeight:(unsigned long long)a1;
- (void)configSubModules:(BOOL)a0;
- (long long)createFeaturesFromImage:(struct __CVBuffer { } *)a0 flowForward:(struct __CVBuffer { } *)a1 flowBackward:(struct __CVBuffer { } *)a2 depth:(struct __CVBuffer { } *)a3 fullresFlow:(struct __CVBuffer { } *)a4 remainedErrorMask:(struct __CVBuffer { } *)a5;
- (BOOL)createModules;
- (long long)generateDownscaleInputs:(struct { struct __CVBuffer *x0; struct __CVBuffer *x1; struct __CVBuffer *x2; struct __CVBuffer *x3; struct __CVBuffer *x4; struct __CVBuffer *x5; struct __CVBuffer *x6; struct __CVBuffer *x7; struct __CVBuffer *x8; struct __CVBuffer *x9; struct __CVBuffer *x10; id x11; id x12; id x13; id x14; id x15; id x16; id x17; id x18; id x19; id x20; id x21; unsigned long long x22; } *)a0 highresImage:(id)a1 highresFlow:(id)a2 highresDepth:(id)a3 interleaveFactor:(unsigned long long)a4 commandBuffer:(id)a5;
- (id)initWithMode:(long long)a0 Device:(id)a1 CommandQueue:(id)a2;
- (long long)mapBufferToTextureWithInterleaveFactor:(unsigned long long)a0;
- (void)releaseAdditionalBufferForHybrid;
- (void)releaseSynthesisResources:(struct { struct __CVBuffer *x0; struct __CVBuffer *x1; struct __CVBuffer *x2; struct __CVBuffer *x3; struct __CVBuffer *x4; struct __CVBuffer *x5; struct __CVBuffer *x6; struct __CVBuffer *x7; struct __CVBuffer *x8; struct __CVBuffer *x9; struct __CVBuffer *x10; id x11; id x12; id x13; id x14; id x15; id x16; id x17; id x18; id x19; id x20; id x21; unsigned long long x22; } *)a0 lowres:(BOOL)a1;
- (BOOL)switchUsageTo:(long long)a0;
- (long long)synthesizeFrameForTimeScale:(float)a0 frameIndex:(unsigned long long)a1 destination:(struct __CVBuffer { } *)a2;
- (long long)synthesizeFrameFromInputImage:(id)a0 fullresFlow:(id)a1 depth:(id)a2 destination:(struct __CVBuffer { } *)a3 timeScale:(float)a4 frameIndex:(unsigned long long)a5;
- (long long)synthesizeFromImage:(id)a0 flow:(id)a1 depth:(id)a2 destination:(id)a3 timeScale:(float)a4 downscaleFactor:(unsigned long long)a5 storage:(struct { struct __CVBuffer *x0; struct __CVBuffer *x1; struct __CVBuffer *x2; struct __CVBuffer *x3; struct __CVBuffer *x4; struct __CVBuffer *x5; struct __CVBuffer *x6; struct __CVBuffer *x7; struct __CVBuffer *x8; struct __CVBuffer *x9; struct __CVBuffer *x10; id x11; id x12; id x13; id x14; id x15; id x16; id x17; id x18; id x19; id x20; id x21; unsigned long long x22; } *)a6 Resolution:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; })a7 commandBuffer:(id)a8;
- (long long)synthesizeImageWithVirtualShutterLinePredictionModeFromFirstImage:(struct __CVBuffer { } *)a0 secondImage:(struct __CVBuffer { } *)a1 flow:(struct __CVBuffer { } *)a2 timeScale:(float)a3 destination:(struct __CVBuffer { } *)a4;
- (long long)synthesizeImageWithVirtualShutterLinePredictionV2ModeFromImage:(id)a0 flow:(id)a1 depth:(id)a2 timeScale:(float)a3 destination:(struct __CVBuffer { } *)a4;

@end

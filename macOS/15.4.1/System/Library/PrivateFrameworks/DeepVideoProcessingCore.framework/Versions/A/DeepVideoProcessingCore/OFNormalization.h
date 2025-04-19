@class MTLSharedEventListener, NSObject;
@protocol MTLRenderPipelineState, MTLSharedEvent, OS_dispatch_queue, MTLComputePipelineState, MTLBuffer;

@interface OFNormalization : VEMetalBase {
    id<MTLComputePipelineState> _statisticsPlanarKernel;
    id<MTLComputePipelineState> _statisticsPackedKernel;
    id<MTLComputePipelineState> _statisticsYUV420Kernel;
    id<MTLComputePipelineState> _normalizePlanarToPlanarKernel;
    id<MTLComputePipelineState> _normalizePackedToPlanarKernel;
    id<MTLComputePipelineState> _normalizeYUV420ToPlanarKernel;
    id<MTLComputePipelineState> _normalizeLumaKernel;
    id<MTLComputePipelineState> _normalizeLumaPacked420Kernel;
    id<MTLComputePipelineState> _normalizeRGBKernel;
    id<MTLComputePipelineState> _denormalizeToPlanarKernel;
    id<MTLComputePipelineState> _denormalizeKernel;
    id<MTLComputePipelineState> _denormalizeRGBKernel;
    id<MTLRenderPipelineState> _denormalizeYCbCr8RenderKernel;
    id<MTLRenderPipelineState> _denormalizeYCbCr10RenderKernel;
    id<MTLRenderPipelineState> _denormalizeYCbCr10UnpackedRenderKernel;
    id<MTLComputePipelineState> _postprocessSRFrameYUV420_2PKernel;
    id<MTLComputePipelineState> _postprocessSRFrameYUV420Kernel;
    id<MTLBuffer> _vertsBuffer;
    struct { float sum; float sum_of_square; } _prevSecondStat;
    id<MTLBuffer> _prevStatsBuffer;
    id<MTLSharedEvent> _sharedEvent;
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
    MTLSharedEventListener *_sharedEventListener;
    unsigned long long _signalValue;
    id<MTLBuffer> _firstParamBuffer;
    id<MTLBuffer> _secondParamBuffer;
    BOOL _disableSIMDSum;
}

@property (nonatomic) BOOL selfNormalization;
@property (nonatomic) BOOL useSIMDSum;
@property (nonatomic) BOOL useFloatAtomic;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMode:(long long)a0;
- (void)setupMetal;
- (void)encodeDenormalizationToCommandBuffer:(id)a0 source:(id)a1 destination:(id)a2 params:(struct { float x0; float x1; int x2; })a3;
- (struct { float x0; float x1; })calcAnchorParamsFromNormParams:(struct { float x0; float x1; float x2[2]; float x3[2]; int x4; })a0 anchor:(int)a1;
- (struct { float x0; float x1; int x2; })calcDeNormParamsFromNormaParams:(struct { float x0; float x1; float x2[2]; float x3[2]; int x4; })a0 timeScale:(float)a1;
- (struct { float x0; float x1; })calcFrameStatistics:(struct __CVBuffer { } *)a0;
- (struct { float x0; float x1; })calcTextureStatistics:(id)a0;
- (struct { float x0; float x1; })calcTextureStatisticsFromStatsBuffer:(id)a0;
- (void)denormalizeFrame:(struct __CVBuffer { } *)a0 destination:(struct __CVBuffer { } *)a1 params:(const struct { float x0; float x1; float x2[2]; float x3[2]; int x4; } *)a2 timeScale:(float)a3 callback:(id /* block */)a4;
- (BOOL)denormalizeRGB:(struct __CVBuffer { } *)a0 to:(struct __CVBuffer { } *)a1;
- (void)encodeDenormalizationRenderToCommandBuffer:(id)a0 source:(id)a1 destination:(id)a2 params:(struct { float x0; float x1; int x2; })a3;
- (void)encodeDenormalizeRGBToCommandBuffer:(id)a0 source:(id)a1 destination:(id)a2;
- (void)encodeNormalizationRGBToCommandBuffer:(id)a0 source:(id)a1 destination:(id)a2;
- (void)encodeNormalizationToCommandBuffer:(id)a0 source:(id)a1 destination:(id)a2 configBuffer:(id)a3;
- (void)encodeNormalizationToCommandBuffer:(id)a0 source:(id)a1 destination:(id)a2 normParamBuffer:(id)a3;
- (void)encodeNormalizationToCommandBuffer:(id)a0 source:(id)a1 destination:(id)a2 params:(struct { float x0; float x1; })a3;
- (void)encodeNormalizeLumaToCommandBuffer:(id)a0 source:(id)a1 destination:(id)a2;
- (void)encodePostprocessSRFrameToCommandBuffer:(id)a0 srFrameY:(id)a1 bicubicY:(id)a2 bicubicUV:(id)a3 laplacianMask:(id)a4 outputY:(id)a5 outputUV:(id)a6;
- (void)encodeStatisticsToCommandBuffer:(id)a0 texture:(id)a1 stats:(id)a2;
- (void)normalizeFramesFirstInput:(struct __CVBuffer { } *)a0 secondInput:(struct __CVBuffer { } *)a1 firstOutput:(struct __CVBuffer { } *)a2 secondOutput:(struct __CVBuffer { } *)a3 callback:(id /* block */)a4;
- (BOOL)normalizeLumaFromFrame:(struct __CVBuffer { } *)a0 toTexture:(id)a1;
- (BOOL)normalizeRGB:(struct __CVBuffer { } *)a0 to:(struct __CVBuffer { } *)a1;
- (void)normalizeWithParmas:(struct { float x0; float x1; float x2[2]; float x3[2]; int x4; })a0 firstInput:(struct __CVBuffer { } *)a1 secondInput:(struct __CVBuffer { } *)a2 firstOutput:(struct __CVBuffer { } *)a3 secondOutput:(struct __CVBuffer { } *)a4;
- (BOOL)postprocessSRFrame:(struct __CVBuffer { } *)a0 bicubicYUV:(struct __CVBuffer { } *)a1 laplacianMask:(struct __CVBuffer { } *)a2 outputYUV:(struct __CVBuffer { } *)a3;
- (id)statsBufferForTexture:(id)a0;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })threadsPerGroupForStats;

@end

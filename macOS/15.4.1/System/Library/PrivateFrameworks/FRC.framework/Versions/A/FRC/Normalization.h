@class MTLSharedEventListener, NSObject;
@protocol MTLRenderPipelineState, MTLSharedEvent, OS_dispatch_queue, MTLComputePipelineState, MTLBuffer;

@interface Normalization : FRCMetalBase {
    id<MTLComputePipelineState> _statisticsPlanarKernel;
    id<MTLComputePipelineState> _statisticsPackedKernel;
    id<MTLComputePipelineState> _statisticsYUV420Kernel;
    id<MTLComputePipelineState> _normalizePlanarToPlanarKernel;
    id<MTLComputePipelineState> _normalizePackedToPlanarKernel;
    id<MTLComputePipelineState> _normalizeYUV420ToPlanarKernel;
    id<MTLComputePipelineState> _denormalizeToPlanarKernel;
    id<MTLComputePipelineState> _denormalizeKernel;
    id<MTLRenderPipelineState> _denormalizeYCbCr8RenderKernel;
    id<MTLRenderPipelineState> _denormalizeYCbCr10RenderKernel;
    id<MTLRenderPipelineState> _denormalizeYCbCr10UnpackedRenderKernel;
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
- (void)encodeDenormalizationRenderToCommandBuffer:(id)a0 source:(id)a1 destination:(id)a2 params:(struct { float x0; float x1; int x2; })a3;
- (void)encodeNormalizationToCommandBuffer:(id)a0 source:(id)a1 destination:(id)a2 configBuffer:(id)a3;
- (void)encodeNormalizationToCommandBuffer:(id)a0 source:(id)a1 destination:(id)a2 normParamBuffer:(id)a3;
- (void)encodeNormalizationToCommandBuffer:(id)a0 source:(id)a1 destination:(id)a2 params:(struct { float x0; float x1; })a3;
- (void)encodeStatisticsToCommandBuffer:(id)a0 texture:(id)a1 stats:(id)a2;
- (void)normalizeFramesFirstInput:(struct __CVBuffer { } *)a0 secondInput:(struct __CVBuffer { } *)a1 firstOutput:(struct __CVBuffer { } *)a2 secondOutput:(struct __CVBuffer { } *)a3 callback:(id /* block */)a4;
- (void)normalizeWithParmas:(struct { float x0; float x1; float x2[2]; float x3[2]; int x4; })a0 firstInput:(struct __CVBuffer { } *)a1 secondInput:(struct __CVBuffer { } *)a2 firstOutput:(struct __CVBuffer { } *)a3 secondOutput:(struct __CVBuffer { } *)a4;
- (id)statsBufferForTexture:(id)a0;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })threadsPerGroupForStats;

@end

@protocol MTLComputePipelineState, MTLBuffer;

@interface Normalization_Ext : VEMetalBase {
    id<MTLComputePipelineState> _statisticsPlanarKernel;
    id<MTLComputePipelineState> _statisticsPackedKernel;
    id<MTLComputePipelineState> _normalizePlanarToPlanarKernel;
    id<MTLComputePipelineState> _normalizePackedToPlanarKernel;
    id<MTLComputePipelineState> _normalizePlanarToPlanarWithPackedOutputKernel;
    id<MTLComputePipelineState> _normalizePackedToPlanarWithPackedOutputKernel;
    id<MTLComputePipelineState> _accumulateOneFrame;
    id<MTLComputePipelineState> _vsaConvert2Texture;
    id<MTLBuffer> _accumulationBuffer;
}

@property (nonatomic) BOOL selfNormalization;

- (id)init;
- (void).cxx_destruct;
- (BOOL)setupMetal;
- (long long)accumulateFramesWith:(struct __CVBuffer { } *)a0;
- (long long)averageFramesWith:(struct __CVBuffer { } *)a0 usage:(long long)a1 destination:(struct __CVBuffer { } *)a2;
- (struct { float x0; float x1; })calcAnchorParamsFromNormParams:(struct { float x0; float x1; float x2[2]; float x3[2]; int x4; })a0 anchor:(int)a1;
- (struct { float x0; float x1; int x2; })calcDeNormParamsFromNormaParams:(struct { float x0; float x1; float x2[2]; float x3[2]; int x4; })a0 timeScale:(float)a1;
- (struct { float x0; float x1; })calcTextureStatistics:(id)a0;
- (void)createAccumulationBufferWidth:(unsigned long long)a0 height:(unsigned long long)a1 channels:(unsigned long long)a2;
- (long long)encodeAccumulateFramesCommandBuffer:(id)a0 input:(id)a1 output:(id)a2;
- (void)encodeNormalizationToCommandBuffer:(id)a0 source:(id)a1 destination:(id)a2 params:(struct { float x0; float x1; })a3;
- (long long)encodeNormalizationToCommandBuffer:(id)a0 source:(id)a1 packedRGB:(id)a2 params:(struct { float x0; float x1; })a3;
- (long long)encodeVSANormalizationToCommandBuffer:(id)a0 fromBuffer:(id)a1 toTexture:(id)a2 inputSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3;
- (id)initGolden;
- (id)initWithDevice:(id)a0 commmandQueue:(id)a1;
- (struct { float x0; float x1; float x2[2]; float x3[2]; int x4; })normalizeFramesFirstInput:(id)a0 secondInput:(id)a1 packedFirst:(id)a2 packedSecond:(id)a3 commandBuffer:(id)a4;
- (void)releaseAccumulationBuffer;
- (long long)rescaleFrameRangeToCommandBuffer:(id)a0 input:(id)a1 output:(id)a2;
- (BOOL)setupMetalGolden;

@end

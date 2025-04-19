@protocol MTLComputePipelineState, MTLBuffer;

@interface Warper : VEMetalBase {
    id<MTLComputePipelineState> _warpBlendWith4x4ShuffleRGBKernel;
    id<MTLComputePipelineState> _warpErrorKernel;
    id<MTLComputePipelineState> _gaussian3x3FilterKernel;
    id<MTLComputePipelineState> _gaussian5x5FilterKernel;
    id<MTLBuffer> _gaussian3x3CoefficientBuffer;
    id<MTLBuffer> _gaussian5x5CoefficientBuffer;
    id<MTLComputePipelineState> _maskKernel;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)encodeWarpBlendWithSpaceToDepthToCommandBuffer:(id)a0 source:(id)a1 scaleFactor:(unsigned long long)a2 withLowResFlow:(id)a3 withBicubicUpscaled:(id)a4 withErrorMask:(id)a5 destination:(id)a6;
- (BOOL)computeErrorMask:(struct __CVBuffer { } *)a0 reference:(struct __CVBuffer { } *)a1 flow:(struct __CVBuffer { } *)a2 output:(struct __CVBuffer { } *)a3 threshold:(float)a4 scaleFactor:(float)a5;
- (void)encodeErrorMapFilteringWithGaussian3x3ToCommandBuffer:(id)a0 source:(id)a1 destination:(id)a2;
- (void)encodeErrorMapFilteringWithGaussian5x5ToCommandBuffer:(id)a0 source:(id)a1 destination:(id)a2;
- (void)encodeErrorThresholdToCommandBuffer:(id)a0 source:(id)a1 threshold:(float)a2 scaleFactor:(float)a3 mask:(id)a4;
- (void)encodeWarpErrorToCommandBuffer:(id)a0 source:(id)a1 reference:(id)a2 flow:(id)a3 error:(id)a4;
- (BOOL)setupKernels;
- (BOOL)warpBlendBufferRGBTexture:(id)a0 scaleFactor:(unsigned long long)a1 withLowResFlowTexture:(id)a2 withBicubicUpscaledTexture:(id)a3 withErrorMaskTexture:(id)a4 toShuffledBufferTexture:(id)a5;

@end

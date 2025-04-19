@protocol MTLComputePipelineState;

@interface ImageProcessUtility : VEMetalBase {
    id<MTLComputePipelineState> _downscaleImageKernel;
    id<MTLComputePipelineState> _downscalePackedImageKernel;
    id<MTLComputePipelineState> _flowEdgeKernel;
    id<MTLComputePipelineState> _flowEdgeInterleavedKernel;
    id<MTLComputePipelineState> _downscaleDepthKernel;
    id<MTLComputePipelineState> _smoothOnePlaneKernel;
    id<MTLComputePipelineState> _convertPackToArrayKernel;
    id<MTLComputePipelineState> _copyTextureKernel;
    id<MTLComputePipelineState> _copyOneChannelTextureKernel;
}

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)setupMetal;
- (BOOL)createModules;
- (id)createOutputBufferWidth:(unsigned long long)a0 height:(unsigned long long)a1 channels:(unsigned long long)a2;
- (void)dumpDebugBuffer:(struct __CVBuffer { } *)a0 fileName:(id)a1 debugCnt:(int)a2;
- (void)encodeConvertPack2ArrayToCommandBuffer:(id)a0 input:(id)a1 output:(id)a2;
- (long long)encodeCopyTextureToCommandBuffer:(id)a0 source:(id)a1 destination:(id)a2;
- (long long)encodeDownscaleDepthToCommandBuffer:(id)a0 input:(id)a1 output:(id)a2;
- (long long)encodeDownscaleImageToCommandBuffer:(id)a0 input:(id)a1 output:(id)a2;
- (long long)encodeFlowEdgeToCommandBuffer:(id)a0 source:(id)a1 destination:(id)a2 edgeThresh:(float)a3;
- (long long)encodeSmoothOnePlaneToCommandBuffer:(id)a0 input:(id)a1 output:(id)a2;
- (id)initWithDevice:(id)a0 commmandQueue:(id)a1;
- (void)releaseBufferAndTexture;

@end

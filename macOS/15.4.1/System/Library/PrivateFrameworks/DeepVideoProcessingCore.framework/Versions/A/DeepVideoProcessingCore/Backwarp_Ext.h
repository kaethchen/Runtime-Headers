@protocol MTLComputePipelineState;

@interface Backwarp_Ext : VEMetalBase {
    id<MTLComputePipelineState> _flowUpscale1CKernel;
    id<MTLComputePipelineState> _flowUpscaleOutputInterleavedKernel;
    id<MTLComputePipelineState> _flowUpscaleBothInterleavedKernel;
    id<MTLComputePipelineState> _backwarpLossKernel;
    id<MTLComputePipelineState> _backwarpLossInterleavedKernel;
}

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)setupMetal;
- (long long)encodeBackwarpLossToCommandBuffer:(id)a0 first:(id)a1 second:(id)a2 flow:(id)a3 timeScale:(float)a4 destination:(id)a5;
- (long long)encodeUpscaleFlowToCommandBuffer:(id)a0 source:(id)a1 destination:(id)a2;
- (id)initWithDevice:(id)a0 commmandQueue:(id)a1 interleaved:(BOOL)a2;

@end

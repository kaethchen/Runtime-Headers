@protocol MTLComputePipelineState, MTLDevice, MTLLibrary;

@interface VCPBackwarp : NSObject {
    id<MTLComputePipelineState> _backwarpKernel;
    id<MTLDevice> _device;
    id<MTLLibrary> _mtlLibrary;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0;
- (int)configureGPU;
- (int)encodeToCommandBuffer:(id)a0 input:(id)a1 output:(id)a2 flow:(id)a3 upscaledFlow:(id)a4;

@end

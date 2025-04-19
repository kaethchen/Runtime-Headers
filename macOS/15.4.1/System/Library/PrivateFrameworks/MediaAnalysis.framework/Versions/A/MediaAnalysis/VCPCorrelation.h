@protocol MTLLibrary, MTLDevice, MTLComputePipelineState;

@interface VCPCorrelation : NSObject {
    id<MTLDevice> _device;
    id<MTLLibrary> _mtlLibrary;
    id<MTLComputePipelineState> _correlationKernel;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0;
- (int)configureGPU;
- (int)encodeToCommandBuffer:(id)a0 firstInput:(id)a1 secondInput:(id)a2 correlation:(id)a3;

@end

@class MPSImageGaussianBlur;
@protocol MTLComputePipelineState, MTLTexture;

@interface LoGFilter : VEMetalBase {
    MPSImageGaussianBlur *_gauss1;
    MPSImageGaussianBlur *_gauss2;
    MPSImageGaussianBlur *_gauss3;
    id<MTLComputePipelineState> _absoluteDiffKernel;
    id<MTLComputePipelineState> _upsampleScaleKernel;
    id<MTLTexture> _gaussianFilteredTexture1;
    id<MTLTexture> _gaussianFilteredTexture2;
}

@property (nonatomic) float maskScaleFactor;
@property (nonatomic) float maskStrength;

- (id)init;
- (void).cxx_destruct;
- (void)encodeToCommandBuffer:(id)a0 sourceTexture:(id)a1 destinationTexture:(id)a2;
- (BOOL)createMaskFrom:(struct __CVBuffer { } *)a0 to:(struct __CVBuffer { } *)a1;
- (void)encodeDiffToCommandBuffer:(id)a0 texture0:(id)a1 texture1:(id)a2;
- (void)encodeUpsampleScaleToCommandBuffer:(id)a0 sourceTexture:(id)a1 destinationTexture:(id)a2;

@end

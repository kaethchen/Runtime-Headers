@class PTMetalContext, MPSImageGaussianBlur, MPSImageAreaMin, MPSImageAreaMax;
@protocol MTLComputePipelineState, MTLTexture;

@interface PTSpillCorrection : NSObject {
    id<MTLComputePipelineState> _initConstraintsPart1;
    id<MTLComputePipelineState> _initConstraintsPart2;
    id<MTLComputePipelineState> _initDiffusion;
    id<MTLComputePipelineState> _constrainDiffusion;
    id<MTLComputePipelineState> _computeUpsamplingCoefficients;
    id<MTLComputePipelineState> _averageUpsamplingCoefficients;
    id<MTLComputePipelineState> _applyUpsamplingCoefficients;
    id<MTLTexture> _guideTexture;
    id<MTLTexture> _diffusionTexture;
    id<MTLTexture> _constraintsTexture;
    id<MTLTexture> _segmentationTexture;
    id<MTLTexture> _segmentationMinTexture;
    id<MTLTexture> _segmentationMaxTexture;
    id<MTLTexture> _coeffXTexture;
    id<MTLTexture> _coeffYTexture;
    id<MTLTexture> _coeffZTexture;
    id<MTLTexture> _coeffXFilteredTexture;
    id<MTLTexture> _coeffYFilteredTexture;
    id<MTLTexture> _coeffZFilteredTexture;
    MPSImageAreaMin *_minFilter;
    MPSImageAreaMax *_maxFilter;
    MPSImageGaussianBlur *_gaussianBlur;
    unsigned long long _refinementSteps;
    PTMetalContext *_metalContext;
}

- (void).cxx_destruct;
- (void)updateFromDefaults;
- (id)segmentationMin;
- (unsigned long long)refinementWidth;
- (id)segmentationMax;
- (id)coeffXTexture;
- (id)coeffYTexture;
- (id)coeffZTexture;
- (void)diffusion:(id)a0;
- (id)diffusionTexture;
- (int)encodeToCommandBuffer:(SEL)a0 lumaTexture:(id)a1 chromaTexture:(id)a2 normChromaOffset:(id)a3 segmentationTexture:(id)a4;
- (int)encodeToCommandBuffer:(id)a0 rgbTexture:(id)a1 segmentationTexture:(id)a2;
- (int)encodeToCommandBuffer:(id)a0 segmentationTexture:(id)a1;
- (id)guideLowRes;
- (void)initConstraints:(id)a0;
- (id)initWithMetalContext:(id)a0 refinementWidth:(unsigned long long)a1 refinementHeight:(unsigned long long)a2;
- (id)initWithMetalContext:(id)a0 refinementWidth:(unsigned long long)a1 refinementHeight:(unsigned long long)a2 refinementSteps:(unsigned long long)a3 minFilterKernelWidth:(unsigned long long)a4 minFilterKernelHeight:(unsigned long long)a5 maxFilterKernelWidth:(unsigned long long)a6 maxFilterKernelHeight:(unsigned long long)a7 gaussianBlurSigma:(float)a8;
- (unsigned long long)refinementHeight;
- (id)segmentationLowRes;

@end

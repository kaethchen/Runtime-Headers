@class PTRaytracingUtils, PTUtil;
@protocol MTLComputePipelineState, MTLTexture;

@interface PTGuidedFilter : NSObject {
    id<MTLComputePipelineState> _computeWeightedUpsamplingCoefficients;
    id<MTLComputePipelineState> _computeUpsamplingCoefficients;
    id<MTLComputePipelineState> _averageUpsamplingCoefficients;
    id<MTLComputePipelineState> _applyUpsamplingCoefficients[3];
    id<MTLTexture> _coeffTexture;
    id<MTLTexture> _edges;
    id<MTLTexture> _coeffAveragedTexture;
    PTRaytracingUtils *_utils;
    PTUtil *_u;
    BOOL _useWeightedSampling;
    float _edgeTolerance;
    BOOL _useHighresGuideForComputingCoefficients;
    BOOL _skipBoxFilter;
}

- (void).cxx_destruct;
- (void)applyUpsamplingCoefficients:(id)a0 guideTexture:(id)a1 coeffTexture:(id)a2 upscaledImageArray:(id)a3 guideMultiplier:(float)a4 postModifierBuffer:(id)a5 postModifierPtr:(struct PTPostModifier { float x0; float x1; float x2; } *)a6 filterMode:(int)a7;
- (void)averageUpsamplingCoefficients:(id)a0 coeffTexture:(id)a1 coeffAveragedTexture:(id)a2;
- (void)computeUpsamplingCoefficients:(id)a0 guideTexture:(id)a1 imageTexture:(id)a2 coeffTexture:(id)a3 weights:(id)a4 guideMultiplier:(float)a5;
- (int)guidedFilter:(id)a0 filterMode:(int)a1 image:(id)a2 guideRGBACoefficients:(id)a3 guideRGBAUpscale:(id)a4 upscaledImageArray:(id)a5 sourceColorBitDepth:(int)a6 postModifierBuffer:(id)a7 postModifierPtr:(struct PTPostModifier { float x0; float x1; float x2; } *)a8;
- (int)guidedFilter:(id)a0 image:(id)a1 guideRGBACoefficients:(id)a2 guideRGBAUpscale:(id)a3 upscaledImage:(id)a4 sourceColorBitDepth:(int)a5 postModifierPtr:(struct PTPostModifier { float x0; float x1; float x2; } *)a6;
- (int)guidedFilter:(id)a0 image:(id)a1 guideRGBACoefficients:(id)a2 guideRGBAUpscale:(id)a3 upscaledImageArray:(id)a4 sourceColorBitDepth:(int)a5 postModifierBuffer:(id)a6;
- (id)initWithMetalContext:(id)a0 inputSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 epsilon:(float)a2;

@end

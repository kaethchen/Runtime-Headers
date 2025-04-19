@class PTMetalContext;
@protocol MTLComputePipelineState, MTLTexture;

@interface PTRaytracingInterpolateResultV2 : NSObject {
    id<MTLComputePipelineState> _interpolateRGBWeightSourceYUVDestYUV[9];
    id<MTLComputePipelineState> _interpolateRGBWeightSourceYUVDestRGBA[9];
    id<MTLComputePipelineState> _interpolateRGBWeightSourceRGBADestRGBA[9];
    id<MTLComputePipelineState> _interpolateRGBWeightRGBALinearDestRGBA[9];
    id<MTLComputePipelineState> _interpolateRGBWeightRGBALinearDestYUV[9];
    PTMetalContext *_metalContext;
    id<MTLTexture> _precomputedGaussian;
    unsigned int _precomputedGaussianOffsetMaxValue;
}

+ (struct PTNoiseValues { float x0; float x1; })calculateVarReadNoise:(id)a0;

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)a0 useExportQualityNoise:(BOOL)a1;
- (void)interpolateRGBWeightUsingRGBALinearToDest:(id)a0 renderRequest:(id)a1 inRGBWeight:(id)a2 inRGBA:(id)a3;
- (void)interpolateRGBWeightUsingSourceToDest:(id)a0 renderRequest:(id)a1 inRGBWeight:(id)a2;

@end

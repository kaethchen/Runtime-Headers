@class PTMetalContext;
@protocol MTLComputePipelineState, MTLBuffer;

@interface PTColorTemperatureCorrection : NSObject {
    id<MTLComputePipelineState> _colorTemperatureCorrectionYUVCube;
    id<MTLComputePipelineState> _colorTemperatureHistogram;
    id<MTLComputePipelineState> _colorTemperatureClear;
    id<MTLComputePipelineState> _colorTemperatureFromHistogram;
    PTMetalContext *_metalContext;
    id<MTLBuffer> _colorTemperatureHistogramBuffer;
}

- (id)description;
- (void).cxx_destruct;
- (id)initWithMetalContext:(id)a0;
- (void)colorTemperatureCorrectionYUVCube:(id)a0 inYUV:(id)a1 outColorTemperatureCorrectionCube:(id)a2 colorTemperatureRGB:(id)a3 colorCorrectionIntensity:(float)a4;
- (float)debugColorTemperature;
- (void)estimateColorTemperatureFromBackground:(id)a0 inYUV:(id)a1 inBackgroundLuma:(id)a2 inBackgroundChroma:(id)a3 outColorTemperatureBuffer:(id)a4;

@end

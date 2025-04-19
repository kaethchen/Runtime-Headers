@class PTMetalContext, NSString, PTPyramid, PTRaytracingUtilsV2, PTGuidedFilter, NSDictionary, PTGlobalReduction, PTRaytracingInterpolateResultV2, PTQualitySettings, PTRenderDebugLayer;
@protocol MTLTexture, MTLBuffer, MTLComputePipelineState;

@interface PTRaytracingV2002 : NSObject <RenderingIntegration> {
    NSDictionary *_options;
    PTPyramid *_rgbaPyramid;
    PTRenderDebugLayer *_debugLayer;
    long long _debugRendering;
    struct CGSize { double width; double height; } _disparitySize;
    PTMetalContext *_metalContext;
    BOOL _injectedRGBAPyramid;
    struct PTFocusEdge { float width; float gradientThreshold; float gradientWeight; float minMaxThreshold; } _focusEdge;
    PTQualitySettings *_qualitySettings;
    PTRaytracingUtilsV2 *_raytracingUtils;
    PTRaytracingInterpolateResultV2 *_raytracingInterpolateResult;
    PTGlobalReduction *_globalReduction;
    PTGuidedFilter *_guidedFilter;
    struct PTUnitDisk { id<MTLBuffer> xy; int rayCount; void /* unknown type, blank encoding */ radiusLocal; } _aperturePoints;
    id<MTLBuffer> _randomUChars;
    id<MTLBuffer> _disparityDiffGlobalMinMax;
    id<MTLTexture> _disparityEdges;
    id<MTLTexture> _disparityEdgesTemp;
    id<MTLTexture> _disparityDiff;
    id<MTLTexture> _focusEdgeMask;
    id<MTLTexture> _raytracedRGBWeight;
    id<MTLTexture> _raytracedRGBWeightUpscaled;
    id<MTLTexture> _disparityUpscaled;
    id<MTLTexture> _guideRGBACoefficients;
    id<MTLTexture> _guideRGBAUpscale;
    struct CGSize { double width; double height; } _disparitySizeUpscaled;
    BOOL _doVisualization;
    int _kRayCount;
    void /* unknown type, empty encoding */ _colorSize;
    float _kPyramidSamplingFraction;
    float _anamorphicFactor;
    float _edgeTolerance;
    float _foregroundBlurLimitingFactor;
    id<MTLComputePipelineState> _raytracingSDOF;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (int)prewarm;
- (id)initWithMetalContext:(id)a0 renderEffects:(id)a1 colorSize:(struct CGSize { double x0; double x1; })a2 disparitySize:(struct CGSize { double x0; double x1; })a3 debugRendering:(long long)a4 verbose:(BOOL)a5 options:(id)a6 quality:(int)a7;
- (unsigned long long)minimumResourceHeapSize;
- (int)renderContinuousWithSource:(id)a0 renderRequest:(id)a1;
- (void)setResourceHeap:(id)a0;

@end

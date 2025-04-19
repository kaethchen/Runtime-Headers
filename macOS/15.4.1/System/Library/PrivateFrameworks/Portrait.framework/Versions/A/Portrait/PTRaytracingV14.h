@class PTUtil, NSString, PTPyramid, PTMetalContext, PTRaytracingUtilsV1, PTRaytracingV14RenderState, NSDictionary, PTColorConversion, PTRenderDebugLayer;

@interface PTRaytracingV14 : NSObject <RenderingIntegration> {
    PTRaytracingV14RenderState *_renderState;
    NSDictionary *_options;
    PTColorConversion *_colorConversion;
    PTPyramid *_rgbaPyramid;
    PTRenderDebugLayer *_debugLayer;
    long long _debugRendering;
    PTRaytracingUtilsV1 *_raytracingUtils;
    PTUtil *_util;
    struct CGSize { double width; double height; } _disparitySize;
    PTMetalContext *_metalContext;
    BOOL _injectedRGBAPyramid;
    BOOL _bicubicUpscale;
    struct PTFocusEdge { float width; float gradientThreshold; float gradientWeight; float minMaxThreshold; } _focusEdge;
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

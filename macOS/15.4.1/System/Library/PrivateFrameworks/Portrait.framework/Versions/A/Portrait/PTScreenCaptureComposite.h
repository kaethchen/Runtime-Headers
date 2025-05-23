@class PTMetalContext;
@protocol MTLComputePipelineState;

@interface PTScreenCaptureComposite : NSObject {
    PTMetalContext *_metalContext;
    id<MTLComputePipelineState> _floatingAlphaCutout;
    struct half3x4 { struct half4 { void /* unknown type, blank encoding */ values[4]; } columns[3]; } _matrixRGBtoYUV;
}

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)a0;
- (int)floatingAlphaCutout:(id)a0 inPersonSegmentation:(id)a1 bilbyPersonMask:(id)a2 bilbyEffectMask:(id)a3 bilbyFloatingBackgroundRGBA:(id)a4 outVideoColorBufferRGBA:(id)a5;

@end

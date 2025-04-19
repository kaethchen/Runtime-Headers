@class PTMetalContext;
@protocol MTLComputePipelineState;

@interface PTEffectReactionBackgroundDimming : NSObject {
    PTMetalContext *_metalContext;
    id<MTLComputePipelineState> _backgroundDimAndConvertYUVtoRGB[9];
}

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)a0;
- (int)backgroundDimAndConvertRGBLinearFromPTTexture:(id)a0 inPTTexture:(id)a1 inCenteredDisparity:(id)a2 inSegmentation:(id)a3 outRGBA:(id)a4 dimmingFactor:(float)a5 disparityRemapping:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6 outColorROI:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a7;

@end

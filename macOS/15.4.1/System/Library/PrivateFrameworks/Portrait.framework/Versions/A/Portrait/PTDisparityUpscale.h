@class PTMetalContext, PTUtil, NSArray, MPSImageSpatioTemporalGuidedFilter;
@protocol MTLTexture;

@interface PTDisparityUpscale : NSObject {
    PTMetalContext *_metalContext;
    float _upscaleFactor;
    id<MTLTexture> _disparityUpscaled;
    MPSImageSpatioTemporalGuidedFilter *_guidedFilter;
    unsigned long long _width;
    unsigned long long _height;
    PTUtil *_portraitUtil;
    id<MTLTexture> _guideConversionTexture;
    NSArray *_coefficientsTextureArray;
    BOOL _isShaderHarvesting;
}

- (void).cxx_destruct;
- (unsigned long long)height;
- (unsigned long long)width;
- (id)upscaledTexture;
- (id)guidedUpsampling:(id)a0 inDisparity:(id)a1 inRGBA:(id)a2 colorDepth:(long long)a3;
- (id)initWithMetalContext:(id)a0 colorSize:(struct CGSize { double x0; double x1; })a1 disparitySize:(struct CGSize { double x0; double x1; })a2;

@end

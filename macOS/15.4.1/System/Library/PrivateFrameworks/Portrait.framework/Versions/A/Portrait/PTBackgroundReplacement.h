@class PTMetalContext, PTTextureYUV, PTPyramid, PTEffectDescriptor, PTColorTemperatureCorrection, PTRenderRequest, PTRenderPipeline, PTSpillCorrection;
@protocol MTLComputePipelineState, MTLBuffer, MTLTexture;

@interface PTBackgroundReplacement : NSObject {
    PTMetalContext *_metalContext;
    id<MTLComputePipelineState> _backgroundCropAndResize;
    id<MTLComputePipelineState> _studiolightBackgroundDimming;
    id<MTLComputePipelineState> _backgroundReplacement;
    id<MTLComputePipelineState> _backgroundReplacementTransition;
    id<MTLComputePipelineState> _backgroundReplacementCopyTransition;
    PTEffectDescriptor *_effectDescriptor;
    struct __CVBuffer { } *_backgroundPixelBuffer;
    struct __CVBuffer { } *_backgroundForPresenterOverlaySmallPixelBuffer;
    PTTextureYUV *_backgroundCropped;
    PTTextureYUV *_backgroundWithSDOF;
    PTTextureYUV *_backgroundWithStudioLight;
    PTTextureYUV *_backgroundForPresenterOverlaySmall;
    PTPyramid *_backgroundTransitionPyramidYUV[2];
    id<MTLBuffer> _colorTemperatureRGB[2];
    id<MTLTexture> _colorTemperatureCorrectionYUVCubes[2];
    PTColorTemperatureCorrection *_colorTemperatureCorrection;
    struct TextureCacheKey { float apertureSDOF; float relightStrengthStudioLight; struct __CVBuffer *backgroundReplacementBuffer; } _lastBackgroundCroppedKey;
    struct TextureCacheKey { float apertureSDOF; float relightStrengthStudioLight; struct __CVBuffer *backgroundReplacementBuffer; } _lastEffectUpdateKey;
    unsigned long long _lastPresenterOverlayMode;
    id<MTLTexture> _constantDisparity;
    PTRenderRequest *_sharedSDOFRenderRequest;
    PTRenderPipeline *_renderPipeline;
    unsigned long long _currentState;
    float _transitionDuration;
    float _transitionStart;
    int _backgroundTransisionCount;
    struct PTBackgroundReplacementInterpolation { float alphaBlend; float lodLevel; } _interpolation;
    PTSpillCorrection *_spillCorrection;
}

- (void)dealloc;
- (void).cxx_destruct;
- (int)applyPortraitBlur:(id)a0 inColorBuffer:(id)a1 inBackgroundBuffer:(id)a2 effectRenderRequest:(id)a3;
- (id)backgroundBufferCropAndResize:(id)a0 background:(struct __CVBuffer { } *)a1;
- (id)bufferWithContent:(SEL)a0;
- (void)copyInterruptedTransitionToTransitionPyramid:(id)a0;
- (id)initWithMetalContext:(id)a0 effectDescriptor:(id)a1 sharedSDOFRenderRequest:(id)a2 renderPipeline:(id)a3;
- (id)lazyInitializeBackgroundForPresenterOverlaySmall:(struct __CVBuffer { } *)a0;
- (int)replaceBackground:(id)a0 inYUV:(id)a1 inSegmentation:(id)a2 effectRenderRequest:(id)a3 outYUV:(id)a4 frameIndex:(int)a5;
- (void)studioLightBackgroundDimming:(id)a0 inCurrentBackground:(id)a1 effectRenderRequest:(id)a2 outColorBufferYUV:(id)a3;
- (float)transitionTimeNormalized:(id)a0;
- (unsigned long long)updateAndGetBackgroundState:(id)a0 frameIndex:(int)a1;

@end

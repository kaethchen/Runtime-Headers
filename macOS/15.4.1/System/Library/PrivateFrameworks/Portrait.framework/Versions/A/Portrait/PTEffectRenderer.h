@class PTBackgroundReplacement, PTNormalAndDiffuseEstimation, PTEffectRelighting, PTEffectReactionProvider, PTTextureYUV, PTEffectTemporalFilter, PTMSRResize, NSArray, PTEffectDebugLayer, PTVFXRenderEffect, NSObject, PTEffectDescriptor, PTEffectPersonSegmentation, PTRenderPipeline, PTMetalContext, PTCVMNetwork, PTRenderRequest, PTDepthConverter, PTEffectUtil, PTUtil, PTGuidedFilter, PTColorConversion, PTHumanDetections, PTEffectResources;
@protocol MTLBuffer, MTLTexture, OS_dispatch_queue, PTRenderState;

@interface PTEffectRenderer : NSObject {
    PTMetalContext *_metalContext;
    struct __CVMetalTextureCache { } *_textureCache;
    NSObject<OS_dispatch_queue> *_asyncQueue;
    PTRenderPipeline *_renderPipeline;
    id<PTRenderState> _renderState;
    id<MTLTexture> _disparityCenteredUpscaledSDOF;
    id<MTLTexture> _disparityCenteredUpscaledReactions;
    id<MTLTexture> _disparityCenteredUpscaledWithScreenCaptureRect;
    id<MTLTexture> _upscaledPersonSegmentation;
    PTBackgroundReplacement *_backgroundReplacement;
    id<MTLTexture> _diffuse;
    PTTextureYUV *_intermediateYUV[2];
    id<MTLBuffer> _faceDisparityArray;
    id<MTLBuffer> _lastFocus;
    id<MTLBuffer> _focusDisparityRaw;
    PTMSRResize *_msrColorPyramid;
    id<MTLBuffer> _focusDisparityModifiers;
    id<MTLBuffer> _studioLightEffectModifier;
    id<MTLBuffer> _useDisparityBufferForReactions;
    PTGuidedFilter *_guidedFilter;
    id<MTLTexture> _guideRGBAUpscale;
    id<MTLTexture> _guideRGBACoefficients;
    PTCVMNetwork *_cvmNetwork;
    PTEffectRelighting *_effectRelighting;
    PTColorConversion *_colorConversion;
    PTRenderRequest *_sdofRenderRequest;
    PTEffectDebugLayer *_debugLayer;
    BOOL _asynchronous;
    int _frameIndex;
    int _networkFrameIndex;
    BOOL _runCVMNetworkPreviousFrame;
    BOOL _renderStudioLightPreviousFrame;
    BOOL _renderSegmentationPreviousFrame;
    double _lastFrameTime;
    unsigned long long _lastEffectType;
    float _focusDisparityMax;
    struct PTDisparityFocusOffset { float disparityOffsetFactor; float offsetInMeters; } _disparityFocusOffsetSDOF;
    struct PTDisparityFocusOffset { float disparityOffsetFactor; float offsetInMeters; } _disparityFocusOffsetReactions;
    struct PTDisparityFocusOffset { float disparityOffsetFactor; float offsetInMeters; } _disparityFocusOffsetStudioLight;
    PTUtil *_util;
    PTEffectUtil *_effectUtil;
    float _focusDisparityUpdateCoefficientSDOF;
    float _focusDisparityUpdateCoefficientStudioLight;
    PTEffectDescriptor *_effectDescriptor;
    unsigned long long _availableEffectTypes;
    PTNormalAndDiffuseEstimation *_diffuseEstimation;
    PTEffectTemporalFilter *_temporalFilter;
    PTEffectReactionProvider *_reactionProvider;
    NSArray *_reactionsToRender;
    BOOL _externalHandDetectionsAvailable;
    long long _debugType;
    PTEffectPersonSegmentation *_personSegmentation;
    struct __CVBuffer { } *_personSegmentationInput;
    PTVFXRenderEffect *_vfxEffect;
    id<MTLTexture> _vfxDepthBuffer;
    id<MTLTexture> _vfxRenderTarget;
    PTDepthConverter *_depthConverter;
    NSObject<OS_dispatch_queue> *_asyncInitQueue;
    PTHumanDetections *_humanDetections;
    PTEffectResources *_sharedResources;
    BOOL _studiolightFromSegmentation;
}

@property long long effectQuality;

+ (BOOL)useStudioLightFromSegmentation:(id)a0;
+ (struct PTEffectPixelBufferDescriptor { struct CGSize { double x0; double x1; } x0; unsigned int x1; })segmentationMatteFormatForColorSize:(struct CGSize { double x0; double x1; })a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)reset:(id)a0;
- (void)setDebug:(long long)a0;
- (id)activeReactions;
- (BOOL)isRenderRequiredForRequest:(id)a0;
- (void)copyInYUV:(id)a0 toOutYUV:(id)a1;
- (id)copyTemporalState:(id)a0;
- (void)createVfxTextures:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (id)initWithDescriptor:(id)a0 metalContext:(id)a1 useHighResNetwork:(BOOL)a2 faceAttributesNetwork:(id)a3 humanDetections:(id)a4 prevTemporalState:(id)a5 asyncInitQueue:(id)a6 sharedResources:(id)a7;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })lowResDisparitySizeFromEffectDescriptor;
- (void)removeAllActiveReactions;
- (int)render:(id)a0 waitUntilCompleted:(BOOL)a1 gpuCompleted:(id /* block */)a2;
- (int)renderReaction:(id)a0 effectRenderRequest:(id)a1;
- (int)runGestureDetection:(id)a0 asyncWork:(id)a1;

@end

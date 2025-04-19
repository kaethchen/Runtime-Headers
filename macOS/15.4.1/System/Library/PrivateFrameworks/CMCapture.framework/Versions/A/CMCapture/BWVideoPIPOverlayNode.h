@class BWRamp, BWScalingSession, NSDictionary, CIColor, CIFilter, CIBlendKernel, CIContext;
@protocol CMISmartStyle, CIRoundedRectangleStrokeGenerator, CIBlurredRectangleGenerator, BWVideoPIPOverlayDelegate, MTLCommandQueue, CMISmartStyleProxyRenderer;

@interface BWVideoPIPOverlayNode : BWNode {
    id<MTLCommandQueue> _metalCommandQueue;
    struct CGContext { } *_bitmapContext;
    BWScalingSession *_scalingSession;
    BOOL _useGPUForDrawing;
    float _overCaptureTargetRatio;
    BOOL _overCaptureTargetRatioSmoothingEnabled;
    int _zoomPIPWidth;
    float _overCaptureTargetInterpolationScale;
    float _overCaptureTargetRatioInterpolationStart;
    float _lastTeleMaxScale;
    float _lastTeleMaxScaleZoomFactor;
    NSDictionary *_baseZoomFactorsByPortType;
    float _frameRate;
    BOOL _secondaryCameraStreamingEnabled;
    struct opaqueCMSampleBuffer { } *_previousAttachedSampleBuffer;
    float _reticleLineThickness;
    CIFilter<CIRoundedRectangleStrokeGenerator> *_drawRectangleFilter;
    CIFilter<CIBlurredRectangleGenerator> *_drawDropShadowFilter;
    CIBlendKernel *_sourceOverBlendKernel;
    CIContext *_ciContext;
    BOOL _gpuPathInitialized;
    CIColor *_ciReticleColor;
    id<BWVideoPIPOverlayDelegate> _delegate;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _normalizedOutputRect;
    struct opaqueCMSampleBuffer { } *_fadeReferenceSampleBuffer;
    BWRamp *_fadeRamp;
    float _fadeInDurationSeconds;
    float _fadeOutDurationSeconds;
    float _dropShadowWidth;
    float _dropShadowBlurSigma;
    float _dropShadowAlpha;
    BOOL _dropShadowEnabled;
    int _smartStyleRenderingMethod;
    Class _smartStyleClass;
    id<CMISmartStyle> _currentStyle;
    id<CMISmartStyleProxyRenderer> _smartStyleProxyRenderer;
    struct __CVBuffer { } *_smartStyleIntermediateUnstyled;
    struct __CVBuffer { } *_smartStyleIntermediateStyled;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _smartStyleIntermediateROI;
    BOOL _highQualitySamplingEnabled;
    BOOL _isDeviceBravoVariant;
}

@property (nonatomic) BOOL releasesResourcesAtEndOfData;
@property (nonatomic) BOOL smartStyleRenderingEnabled;

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (int)_drawOverlayRects:(id)a0 toPixelBuffer:(struct __CVBuffer { } *)a1 withinRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)_drawPIPUsingCPUAndMSRToOutputPixelBuffer:(struct __CVBuffer { } *)a0 attachedPixelBuffer:(struct __CVBuffer { } *)a1 outputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 inputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 normalizedReticleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 primaryCaptureRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 uprightExifOrientation:(int)a6;
- (void)_drawPIPUsingGPUToOutputPixelBuffer:(struct __CVBuffer { } *)a0 attachedPixelBuffer:(struct __CVBuffer { } *)a1 filters:(id)a2 outputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 inputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 normalizedReticleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 uprightExifOrientation:(int)a6 pipOpacity:(float)a7;
- (void)_ensureGPUResources;
- (int)_loadAndConfigureSmartStyleProxyRenderer;
- (void)_releaseResources;
- (void)_renderAttachedPixelBuffersFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 toPixelBuffer:(struct __CVBuffer { } *)a1;
- (int)_renderSmartStyleToIntermediateBufferWithInputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 pipSourcePixelBuffer:(struct __CVBuffer { } *)a1 inputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 outputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (id)_reticleCIColorForPixelBuffer:(struct __CVBuffer { } *)a0 opacity:(float)a1;
- (id)_strokedRectangleImageWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 thickness:(float)a1 c:(id)a2;
- (void)_updateCurrentStyle:(struct opaqueCMSampleBuffer { } *)a0;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)initWithDelegate:(id)a0 metalCommandQueue:(id)a1 secondaryCameraStreamingEnabled:(BOOL)a2 secondaryCameraFrameRate:(float)a3 maxLossyCompressionLevel:(int)a4 isDeviceBravoVariant:(BOOL)a5 baseZoomFactorsByPortType:(id)a6;
- (id)nodeSubType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;

@end

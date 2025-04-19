@class BWPixelBufferPool, CMISmartStyleOvercaptureThumbnailGenerator;
@protocol CMISmartStyle, CMISmartStyleProxyRenderer, CMISmartStyleProcessor, MTLCommandQueue;

@interface BWOverCaptureSmartStyleApplyNode : BWNode {
    int _renderingMethod;
    float _globalLocalSystemMixFactorDecayRate;
    id<MTLCommandQueue> _metalCommandQueue;
    Class _smartStyleClass;
    id<CMISmartStyle> _currentStyle;
    id<CMISmartStyleProxyRenderer> _smartStyleProxyRenderer;
    Class _smartStyleProcessorInputOutputClass;
    id<CMISmartStyleProcessor> _smartStyleProcessor;
    BOOL _firstFrame;
    struct opaqueCMSampleBuffer { } *_mostRecentCoefficients;
    BOOL _applyGlobalMostRecentCoefficients;
    float _currentGlobalLocalMixFactor;
    int _mostRecentQuadraBinningFactor;
    BWPixelBufferPool *_filteredCoefficientsPixelBufferPool;
    unsigned int _filteredCoefficientsPixelBufferPoolSize;
    unsigned long long _filterType;
    BWPixelBufferPool *_unstyledThumbnailPixelBufferPool;
    struct __CVBuffer { } *_identityCoefficientsPixelBuffer;
    struct __CVBuffer { } *_previewThumbnailBuffer;
    BOOL _useOptimizedThumbnailGeneration;
    CMISmartStyleOvercaptureThumbnailGenerator *_overcaptureThumbnailGenerator;
    BOOL _didSetTimeToStartStyleEngineBypass;
    float _timeToStartStyleEngineBypass;
    BOOL _applyDither;
}

@property (nonatomic) int maxLossyCompressionLevel;

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (int)_applySmartStyleOnSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (struct { void /* unknown type, empty encoding */ x0[3]; })_computeAffineTransform:(int)a0 mirror:(int)a1;
- (int)_getMirrorConfigForPixelBuffer:(struct __CVBuffer { } *)a0;
- (int)_applySmartStyleProxyRenderingWithMethod:(int)a0 onSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (int)_calculateExtrapolationAndSpotlightZoom:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inputCropRectWithinPrimaryCaptureRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 learningROIRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 adjustedPrimaryCaptureRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3 adjustedSpotlightZoomRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4;
- (BOOL)_canRenderWithStyleEngineApplyForInput:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_consumeSampleBufferAttachments:(struct opaqueCMSampleBuffer { } *)a0;
- (int)_getRotationConfigForPixelBuffer:(struct __CVBuffer { } *)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_getSampleBufferPresentationTimeStamp:(struct opaqueCMSampleBuffer { } *)a0;
- (int)_loadAndConfigureSmartStyleBundle;
- (int)_loadAndConfigureSmartStyleProxyRenderer;
- (void)_updateCurrentStyle:(struct opaqueCMSampleBuffer { } *)a0;
- (id)_updateSupportedPixelFormats;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (id)initWithMetalCommandQueue:(id)a0;
- (id)nodeSubType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;

@end

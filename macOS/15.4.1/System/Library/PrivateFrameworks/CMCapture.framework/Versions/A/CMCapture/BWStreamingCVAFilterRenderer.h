@class BWStreamingCVAFilterRendererAnimator, NSString, NSArray, BWFigVideoCaptureDevice, NSMutableDictionary, BWSpringSimulation, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, MTLCommandQueue;

@interface BWStreamingCVAFilterRenderer : NSObject <BWFilterRenderer> {
    NSObject<OS_dispatch_queue> *_sharedContextQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    struct { BOOL depthFilterEnabled; struct __CVBuffer *mostRecentPostprocessedDisparityBuffer; float mostRecentFocusDisparity; float mostRecentDeltaDisparity; float mostRecentPortraitStability; int numberOfFramesSinceLastStableFocus; float clientSuppliedSimulatedAperture; float clientSuppliedPortraitLightingEffectStrength; BOOL mostRecentStructuredLightOcclusion; BOOL previousPortraitRequestFellbackToNonDepthRendering; NSArray *mostRecentDetectedFaces; int previousStagePreviewStatus; } _sharedContext;
    int _depthDataSource;
    BWFigVideoCaptureDevice *_captureDevice;
    id<MTLCommandQueue> _commandQueue;
    BWSpringSimulation *_stageProxyLiveRenderingSpringSimulation;
    BWStreamingCVAFilterRendererAnimator *_animator;
    NSMutableDictionary *_objectVisibilityByID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _objectVisibilityByIDLock;
    NSMutableArray *_postprocessedFaces;
    BOOL _foregroundBlurEnabled;
    BOOL _hasSeenDepth;
    int _maxFramesWithoutDepth;
    int _framesWithoutDepth;
    BOOL _hasSeenSegmentation;
    int _maxFramesWithoutSegmentation;
    int _framesWithoutSegmentation;
    BOOL _mirroredForMetadataAdjustment;
    int _rotationDegreesForMetadataAdjustment;
    BOOL _secondaryStreamingPersonSegmentationEnabled;
    BOOL _depthFilterRenderingIsAfterPreviewStitcher;
}

@property (readonly, nonatomic) BOOL studioAndContourRenderingEnabled;
@property (readonly, nonatomic) BOOL stageRenderingEnabled;
@property float simulatedAperture;
@property float portraitLightingEffectStrength;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) short type;
@property (readonly, nonatomic) BOOL supportsAnimation;
@property (readonly, nonatomic) BOOL adjustsMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void)adjustMetadataOfSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)initWithCaptureDevice:(id)a0 studioAndContourRenderingEnabled:(BOOL)a1 stageRenderingEnabled:(BOOL)a2 depthDataSource:(int)a3 foregroundBlurEnabled:(BOOL)a4 depthFilterRenderingIsAfterPreviewStitcher:(BOOL)a5 commandQueue:(id)a6 priority:(unsigned int)a7 mirroredForMetadataAdjustment:(BOOL)a8 rotationDegreesForMetadataAdjustment:(int)a9 secondaryStreamingPersonSegmentationEnabled:(BOOL)a10;
- (int)prepareForRenderingWithParameters:(id)a0 inputVideoFormat:(id)a1 inputMediaPropertiesByAttachedMediaKey:(id)a2;
- (void)renderUsingParameters:(id)a0 inputPixelBuffer:(struct __CVBuffer { } *)a1 inputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a2 originalPixelBuffer:(struct __CVBuffer { } *)a3 processedPixelBuffer:(struct __CVBuffer { } *)a4 completionHandler:(id /* block */)a5;

@end

@class NSString, BWInferenceVideoFormat, BWFigVideoCaptureDevice, NSSet, BWPixelBufferPool, BWVideoFormat, BWInferenceEngine, BWInferenceScheduler;
@protocol MTLEvent;

@interface BWVideoDepthNode : BWNode <BWInferenceFormatProvider, BWInferencePixelBufferPoolProvider> {
    BWInferenceEngine *_inferenceEngine;
    BWInferenceScheduler *_inferenceScheduler;
    NSSet *_inferenceTypesToSkip;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _inferenceTypesToSkipLock;
    BWInferenceVideoFormat *_primaryMediaInputFormat;
    BWInferenceVideoFormat *_disparityInputFormat;
    struct opaqueCMFormatDescription { } *_depthFormatDescription;
    BWFigVideoCaptureDevice *_captureDevice;
    struct opaqueCMSampleBuffer { } *_previousDisparitySampleBuffer;
    struct opaqueCMSampleBuffer { } *_previousFeaturesSampleBuffer;
    struct opaqueCMSampleBuffer { } *_disparityPostprocessingInStateSampleBuffer;
    struct opaqueCMSampleBuffer { } *_disparityPostprocessingOutStateSampleBuffer;
    struct __CVBuffer { } *_initialDisparityPixelBuffer;
    struct __CVBuffer { } *_initialFeaturesPixelBuffer;
    struct __CVBuffer { } *_blankDisparityPixelBuffer;
    struct { int width; int height; } _depthOutputDimensions;
    BOOL _videoDepthEnabled;
    BOOL _structuredLightIsOccluded;
    BOOL _sourceIsNuri;
    BWVideoFormat *_featuresVideoFormat;
    BWVideoFormat *_disparityStateVideoFormat;
    BWVideoFormat *_internalDisparityVideoFormat;
    BWPixelBufferPool *_internalDisparityPool;
    BWPixelBufferPool *_featuresPool;
    id<MTLEvent> _backpressureEvent;
}

@property (nonatomic) BOOL releasesResourcesAtEndOfData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (id)inputFormatForAttachedMediaKey:(id)a0;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (id)initWithInferenceScheduler:(id)a0 captureDevice:(id)a1 videoDepthConfiguration:(id)a2 extraDepthOutputRetainedBufferCount:(int)a3 error:(int *)a4;
- (id)inputInferenceVideoFormatForAttachedMediaKey:(id)a0;
- (id)inputVideoFormatForAttachedMediaKey:(id)a0;
- (BOOL)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)a0;
- (id)nodeSubType;
- (id)outputFormatForAttachedMediaKey:(id)a0;
- (id)outputVideoFormatForAttachedMediaKey:(id)a0;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (id)preparedOutputPixelBufferPoolForAttachedMediaKey:(id)a0 format:(id)a1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)setInferencesToSkip:(id)a0;

@end

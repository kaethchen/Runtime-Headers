@class NSArray, BWStillImageSampleBufferSinkNodeAnalyticsConfiguration, BWStillImageAnalyticsPayloadCommon;

@interface BWStillImageSampleBufferSinkNode : BWSinkNode {
    int _stillImageCapturePipeliningMode;
    BOOL _deferredPhotoProcessorEnabled;
    BOOL _clientIsCameraOrDerivative;
    BOOL _captureTimePhotosCurationSupported;
    NSArray *_propagatedAttachedMediaKeys;
    BOOL _focusPixelBlurScoreEnabled;
    BWStillImageSampleBufferSinkNodeAnalyticsConfiguration *_analyticsConfiguration;
    BOOL _cameraSupportsFlash;
    long long _lastCaptureRequestTime;
    long long _lastReportedSettingsID;
    BWStillImageAnalyticsPayloadCommon *_cachedAnalyticsPayloadForPortraitFailures;
}

@property (copy, nonatomic) id /* block */ sampleBufferAvailableHandler;

+ (void)initialize;

- (void)dealloc;
- (void)setFocusPixelBlurScoreEnabled:(BOOL)a0;
- (id)initWithSinkID:(id)a0;
- (void)setPropagatedAttachedMediaKeys:(id)a0;
- (int)stillImageCapturePipeliningMode;
- (id)analyticsConfiguration;
- (BOOL)cameraSupportsFlash;
- (BOOL)captureTimePhotosCurationSupported;
- (BOOL)clientIsCameraOrDerivative;
- (BOOL)deferredPhotoProcessorEnabled;
- (void)didReachEndOfDataForInput:(id)a0;
- (BOOL)focusPixelBlurScoreEnabled;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (id)initWithInputMediaType:(unsigned int)a0 sinkID:(id)a1;
- (id)nodeSubType;
- (id)propagatedAttachedMediaKeys;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)setAnalyticsConfiguration:(id)a0;
- (void)setCameraSupportsFlash:(BOOL)a0;
- (void)setCaptureTimePhotosCurationSupported:(BOOL)a0;
- (void)setClientIsCameraOrDerivative:(BOOL)a0;
- (void)setDeferredPhotoProcessorEnabled:(BOOL)a0;
- (void)setStillImageCapturePipeliningMode:(int)a0;

@end

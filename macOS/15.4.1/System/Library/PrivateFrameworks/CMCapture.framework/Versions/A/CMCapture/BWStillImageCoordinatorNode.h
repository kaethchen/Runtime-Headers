@class NSString, NSArray, FigStateMachine, BWFigVideoCaptureDevice, NSMutableDictionary, NSDictionary, FigCaptureStillImageSettings, NSObject, NSMutableArray, BWStillImageCaptureSettings, BWStillImageProcessingSettings, BWDeviceOrientationMonitor;
@protocol BWStillImageCaptureStatusDelegate, OS_dispatch_group, BWCompressedShotBuffer, OS_dispatch_queue, BWStillImageProcessingSupportProvider;

@interface BWStillImageCoordinatorNode : BWNode <BWFigVideoCaptureStreamStillImageCaptureDelegate, BWStillImageProcessingStatusDelegate> {
    BOOL _active;
    BWFigVideoCaptureDevice *_captureDevice;
    NSDictionary *_portTypeToInput;
    NSDictionary *_portTypeToOutput;
    NSDictionary *_portTypeToSensorRawInput;
    NSDictionary *_portTypeToSensorRawOutput;
    NSArray *_highResStillImageDimensions;
    int _stillImageCapturePipeliningMode;
    unsigned int _numberOfBurstCapturesInFlight;
    unsigned int _maxNumberOfBurstCapturesAllowedInFlight;
    NSMutableArray *_requestQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _requestQueueLock;
    int _captureRequestCount;
    int _prepareRequestCount;
    NSObject<OS_dispatch_queue> *_stillImageDispatchQueue;
    NSObject<OS_dispatch_group> *_stillImageDispatchGroup;
    NSObject<OS_dispatch_group> *_stillImageGraphStopDispatchGroup;
    FigStateMachine *_stateMachine;
    NSMutableDictionary *_receivedImagesOrErrorsForRequestByPortType;
    NSMutableDictionary *_receivedUltraHighResImagesOrErrorsForRequestByPortType;
    int _clientExpectedImagesOrErrorsForRequest;
    int _clientReceivedImagesOrErrorsForRequest;
    FigCaptureStillImageSettings *_currentRequestedStillImageCaptureSettings;
    BWStillImageCaptureSettings *_currentResolvedStillImageCaptureSettings;
    BWStillImageProcessingSettings *_currentResolvedStillImageProcessingSettings;
    unsigned int _firedDelegateCallbackFlags;
    BOOL _isMomentCaptureCapturingBeforeCommitted;
    BOOL _isMomentCaptureProcessingBeforeCommitted;
    NSMutableArray *_momentCaptureUnfiredCallbacks;
    NSMutableArray *_momentCaptureBuffersByInputIndex;
    int _momentCaptureUncommittedStillImageCaptureError;
    long long _momentCaptureUnfiredWillBeginCaptureBeforeResolvingSettingsCallbackSettingsID;
    long long _momentCaptureLastCancelledSettingsID;
    long long _momentCaptureLastComittedSettingsID;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _streamingDisruptionEndPTS;
    BOOL _receivedQuadraHighResError;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bufferTrackingLock;
    int _inUseBufferCount;
    int _inUseZoomBasedBufferCount;
    int _inUseUltraHighResBufferCount;
    int _ultraHighResFrameCountExpansionFactor;
    BOOL _responsiveShutterEnabled;
    BOOL _responsiveShutterEnabledViaAPI;
    BOOL _fastCapturePrioritizationEnabled;
    id<BWCompressedShotBuffer> _compressedShotBuffer;
    int _extraUncompressedShotBufferCapacityForThermalSystemPressureLevelSerious;
    int _extraUncompressedShotBufferCapacityForThermalSystemPressureLevelCritical;
    int _normalResolutionOverlapCapacityForSoQ;
    BOOL _shotBufferEnabled;
    int _allocatedShotBufferCapacity;
    int _defaultShotBufferCapacity;
    int _numberOfZoomBasedBufferIncludedInShotBuffer;
    int _numberOfUltraHighResBufferIncludedInShotBuffer;
    NSObject<OS_dispatch_group> *_shotBufferWaitGroup;
    int _shotBufferWaitFreeBufferCount;
    BOOL _shotPacerEnabled;
    float _shotPacerMaxFPS;
    long long _lastStillImageCaptureStartTime;
    long long _lastStillImageCaptureCompleteTime;
    BOOL _dynamicShotQualityEnabled;
    int _minFullQualityShots;
    float _timeSinceLastCaptureEnterThreshold;
    float _timeSinceLastCaptureExitThreshold;
    int _numCapturesInShotSequence;
    BWDeviceOrientationMonitor *_deviceOrientationMonitor;
}

@property (class) int maxShotBufferCapacity;
@property (class) int currentAllocatedShotBufferCapacity;
@property (class) int numberOfZoomBasedBufferIncludedInShotBuffer;
@property (class) int numberOfUltraHighResBufferIncludedInShotBuffer;

@property (nonatomic) id<BWStillImageCaptureStatusDelegate> stillImageCaptureStatusDelegate;
@property (nonatomic) id<BWStillImageProcessingSupportProvider> stillImageProcessingSupportProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (struct { int x0; int x1; int x2; int x3; int x4; })worstCaseMaxBracketedCaptureBufferCountForPreparedSettings:(id)a0 stillImageCaptureSettings:(id)a1 captureDevice:(id)a2;

- (void)dealloc;
- (id)nodeType;
- (void)setFastCapturePrioritizationEnabled:(BOOL)a0;
- (int)stillImageCapturePipeliningMode;
- (void)_configureCurrentCaptureRequestStateForFigCaptureStillImageSettings;
- (int)_enqueueRequestWithSettings:(id)a0 serviceRequestsIfNecessary:(BOOL)a1;
- (id)_initWithCaptureDevice:(id)a0 inputPortTypes:(id)a1 sensorRawInputPortTypes:(id)a2 highResStillImageDimensions:(id)a3 allStateTransitionsHandler:(id /* block */)a4;
- (id)_stateMachine;
- (id)_stillImageDispatchQueue;
- (void)_unpackNextRequest;
- (int)beginStillImageMomentCaptureWithSettings:(id)a0;
- (int)cancelStillImageMomentCaptureWithSettingsID:(long long)a0;
- (int)captureStillImageNowWithSettings:(id)a0;
- (void)captureStream:(id)a0 didCapturePreBracketedEV0ImageWithPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)captureStream:(id)a0 didCaptureReferenceFrameWithPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 referenceFrameBracketedCaptureSequenceNumber:(id)a2;
- (void)captureStream:(id)a0 stillImageCaptureError:(int)a1;
- (void)captureStreamDidCompleteStillImageCapture:(id)a0;
- (void)captureStreamWillBeginStillImageCapture:(id)a0;
- (void)captureStreamWillWaitForTimeMachineToFill:(id)a0;
- (void)clientReceivedPayloadForSettings:(id)a0 status:(int)a1 clientIsMidStillImageGraph:(BOOL)a2;
- (int)commitStillImageMomentCaptureWithSettings:(id)a0;
- (id)compressedShotBuffer;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (BOOL)fastCapturePrioritizationEnabled;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (id)initWithCaptureDevice:(id)a0 inputPortTypes:(id)a1 sensorRawInputPortTypes:(id)a2 highResStillImageDimensions:(id)a3;
- (int)initiateStillImageCaptureNowWithSettings:(id)a0;
- (id)inputForPortType:(id)a0;
- (unsigned int)maxNumberOfBurstCapturesAllowedInFlight;
- (void)node:(id)a0 didSelectNewReferenceFrameWithPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 transform:(id)a2 forSettings:(id)a3;
- (id)nodeSubType;
- (id)outputForPortType:(id)a0;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (int)prepareStillImageCaptureNowWithSettings:(id)a0;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (BOOL)responsiveShutterEnabled;
- (id)sensorRawInputForPortType:(id)a0;
- (id)sensorRawOutputForPortType:(id)a0;
- (void)setCompressedShotBuffer:(id)a0;
- (void)setMaxNumberOfBurstCapturesAllowedInFlight:(unsigned int)a0;
- (void)setResponsiveShutterEnabled:(BOOL)a0;
- (void)setResponsiveShutterEnabledViaAPI:(BOOL)a0;
- (void)setStillImageCapturePipeliningMode:(int)a0;
- (void)willStopGraph:(BOOL)a0;

@end

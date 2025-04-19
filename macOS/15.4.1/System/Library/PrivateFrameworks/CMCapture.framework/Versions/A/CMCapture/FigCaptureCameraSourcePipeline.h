@class NSMutableDictionary, FigCaptureSourceDepthDataFormat, BWMemoryPool, NSDictionary, FigCaptureCameraSourcePipelineConfiguration, NSMutableArray, BWSlaveFrameSynchronizerNode, BWFanOutNode, BWFigVideoCaptureDevice, NSString, BWMultiStreamCameraSourceNode, FigCaptureSourceVideoFormat, NSArray, BWNodeOutput;
@protocol BWCinematicFramingStatesProvider;

@interface FigCaptureCameraSourcePipeline : FigCaptureSourcePipeline <BWVISOverscanPredictionDelegate> {
    BOOL _useCaptureOutputForPreview;
    int _deviceType;
    int _devicePosition;
    FigCaptureCameraSourcePipelineConfiguration *_configuration;
    NSMutableArray *_sourceNodes;
    BWMultiStreamCameraSourceNode *_sourceNode;
    BWMultiStreamCameraSourceNode *_telephotoSourceNode;
    BWMultiStreamCameraSourceNode *_superWideSourceNode;
    BWMultiStreamCameraSourceNode *_infraredSourceNode;
    BWNodeOutput *_sourceFormatReferenceOutput;
    NSMutableArray *_synchronizerNodes;
    BWSlaveFrameSynchronizerNode *_slaveFrameSynchronizerNode;
    NSArray *_previewFilters;
    NSMutableDictionary *_backgroundBlurNodesBySourceDeviceType;
    NSDictionary *_previewOutputsArrayBySourceDeviceType;
    NSDictionary *_stillImageOutputsByPortType;
    NSDictionary *_stillImageSensorRawOutputsByPortType;
    NSDictionary *_videoCaptureOutputsArrayBySourceDeviceType;
    NSDictionary *_numberOfFaceTrackingConnectionConfigurationsBySourceDeviceType;
    unsigned int _nextVideoCaptureOutputIndexBySourceDeviceType[21];
    unsigned int _nextPreviewOutputIndexBySourceDeviceType[21];
    NSArray *_pointCloudOutputs;
    unsigned int _nextPointCloudOutputIndex;
    NSDictionary *_detectedObjectsOutputsBySourceDeviceType;
    NSDictionary *_secureDetectedObjectsOutputsBySourceDeviceType;
    NSDictionary *_eyeReliefStatusOutputsBySourceDeviceType;
    NSDictionary *_trackedFacesOutputsBySourceDeviceType;
    NSDictionary *_faceIDReadinessOutputsBySourceDeviceType;
    NSDictionary *_motionToWakeOutputsBySourceDeviceType;
    NSDictionary *_visionDataOutputsBySourceDeviceType;
    BWNodeOutput *_depthOutput;
    NSMutableArray *_sourceDeviceTypesWithLightSourceMaskAndKeypointDescriptorDataEnabledOnVideoCaptureOutputs;
    NSDictionary *_semanticMasksOutputsBySourceDeviceType;
    BWFigVideoCaptureDevice *_captureDevice;
    struct OpaqueFigCaptureSource { } *_captureSource;
    FigCaptureSourceVideoFormat *_captureSourceVideoFormat;
    FigCaptureSourceDepthDataFormat *_captureSourceDepthDataFormat;
    BOOL _stillImageOutputDerivesFromVideoCaptureOutput;
    BWMemoryPool *_memoryPool;
    BOOL _overCapturePercentage;
    int _depthType;
    BOOL _hardwareDepthFilteringEnabled;
    BOOL _videoHDRImageStatisticsEnabled;
    int _maxFrameRateClientOverride;
    BWFanOutNode *_videoCaptureSplitterNode;
    BOOL _enableSlaveFrameSynchronizerForZoomPIPOnly;
    BOOL _powerOptimizedVISOverscanEnabled;
    NSMutableDictionary *_smartStyleLearningNodesBySourceDeviceType;
    NSMutableDictionary *_smartStyleMetadataSynchronizerNodesBySourceDeviceType;
    BOOL _trueVideoCaptureEnabled;
    BOOL _preLTMThumbnailEnabled;
    BOOL _postColorProcessingThumbnailEnabled;
    int _stillImageOutputRetainedBufferCountOverride;
    id<BWCinematicFramingStatesProvider> _cinematicFramingCameraStatesProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void)visOverscanPredictor:(id)a0 allowsReducedOverscan:(BOOL)a1;

@end

@class BWVideoDataOutputAnalyticsPayload, NSString, CMCaptureFrameSenderService, FigCaptureTrie, BWSceneStabilityMonitor, FigCaptureFrameCounter;
@protocol BWRemoteQueueSinkNodeDelegate;

@interface BWRemoteQueueSinkNode : BWSinkNode {
    BOOL _mediaTypeIsVideo;
    BOOL _mediaTypeIsPointCloud;
    BOOL _mediaTypeIsAudio;
    struct localQueueOpaque { } *_localQueue;
    unsigned int _numberOfMediaBuffersLocallyEnqueued;
    unsigned int _numberOfMediaBuffersLocallyDequeued;
    int _clientVideoRetainedBufferCount;
    BOOL _discardsLateSampleBuffers;
    BOOL _attachPanoramaMetadata;
    BOOL _attachInternalMetadata;
    BOOL _sentDiagnosticMetadataForPanorama;
    BOOL _disableFlatDictionaryVDOMetadata;
    struct OpaqueFigFlatDictionaryKeySpec { } *_makerNoteKeySpec;
    BOOL _cameraSupportsFlash;
    BOOL _attachDetectedObjectsInfo;
    BOOL _removeCameraIntrinsicMatrixAttachment;
    struct opaqueCMFormatDescription { } *_cachedFormatDescription;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastPTS;
    BOOL _panoramaRequiresLTMLocking;
    BWSceneStabilityMonitor *_stabilityMonitor;
    FigCaptureTrie *_requestedBufferAttachmentsTrie;
    BOOL _moveCMIOExensionMetadataToTransportLayerAttachment;
    CMCaptureFrameSenderService *_frameSender;
    BOOL _frameSenderSupportEnabled;
    NSString *_clientApplicationID;
    long long _totalNumberOfFrames;
    long long _totalNumberOfFramesDropped;
    long long _totalNumberOfISPFramesDropped;
    FigCaptureFrameCounter *_frameCounter;
    BWVideoDataOutputAnalyticsPayload *_analyticsPayload;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _firstPTS;
    BOOL _proresVideo;
}

@property (nonatomic) id<BWRemoteQueueSinkNodeDelegate> delegate;
@property (retain, nonatomic) NSString *captureDeviceUniqueID;

+ (void)initialize;

- (void)dealloc;
- (id)requestedBufferAttachmentsTrie;
- (void)setRequestedBufferAttachmentsTrie:(id)a0;
- (void)setSceneStabilityMetadataEnabled:(BOOL)a0;
- (void)registerSurfacesFromSourcePool:(id)a0;
- (BOOL)attachPanoramaMetadata;
- (BOOL)cameraSupportsFlash;
- (int)clientVideoRetainedBufferCount;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)didReachEndOfDataForInput:(id)a0;
- (BOOL)discardsLateSampleBuffers;
- (BOOL)frameSenderSupportEnabled;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (id)initWithMediaType:(unsigned int)a0 clientAuditToken:(struct { unsigned int x0[8]; })a1 sinkID:(id)a2;
- (BOOL)moveCMIOExensionMetadataToTransportLayerAttachment;
- (id)nodeSubType;
- (BOOL)panoramaRequiresLTMLocking;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (BOOL)removeCameraIntrinsicMatrixAttachment;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (BOOL)sceneStabilityMetadataEnabled;
- (void)setAttachPanoramaMetadata:(BOOL)a0;
- (void)setCameraSupportsFlash:(BOOL)a0;
- (void)setClientVideoRetainedBufferCount:(int)a0;
- (void)setDiscardsLateSampleBuffers:(BOOL)a0;
- (void)setFrameSenderSupportEnabled:(BOOL)a0;
- (void)setMoveCMIOExensionMetadataToTransportLayerAttachment:(BOOL)a0;
- (void)setPanoramaRequiresLTMLocking:(BOOL)a0;
- (void)setRemoveCameraIntrinsicMatrixAttachment:(BOOL)a0;
- (void)updateClientAuditToken:(struct { unsigned int x0[8]; })a0;

@end

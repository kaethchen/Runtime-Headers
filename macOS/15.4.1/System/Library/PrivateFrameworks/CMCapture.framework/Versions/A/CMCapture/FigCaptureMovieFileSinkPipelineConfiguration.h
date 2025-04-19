@class FigDepthDataCaptureConnectionConfiguration, NSString, NSArray, NSObject, FigMetadataItemCaptureConnectionConfiguration, FigVideoCaptureConnectionConfiguration, FigAudioCaptureConnectionConfiguration, FigCaptureSourceConfiguration;
@protocol OS_dispatch_semaphore;

@interface FigCaptureMovieFileSinkPipelineConfiguration : NSObject {
    FigCaptureSourceConfiguration *_cameraConfiguration;
    FigVideoCaptureConnectionConfiguration *_videoConnectionConfiguration;
    FigAudioCaptureConnectionConfiguration *_audioConnectionConfiguration;
    FigMetadataItemCaptureConnectionConfiguration *_cameraDebugInfoMetadataConnectionConfiguration;
    NSArray *_detectedObjectMetadataConnectionConfigurations;
    FigDepthDataCaptureConnectionConfiguration *_depthDataConnectionConfiguration;
    struct { int width; int height; } _depthOutputDimensions;
    FigVideoCaptureConnectionConfiguration *_stillImageConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_sceneClassifierConnectionConfiguration;
    struct FigCaptureVideoTransform { BOOL mirrored; int rotationDegrees; struct { int width; int height; } dimensions; } _videoSourceCaptureTransform;
    struct { int width; int height; } _visOutputDimensions;
    int _videoStabilizationType;
    BOOL _boxedMetadataPostVISEnabled;
    int _motionAttachmentsSource;
    struct { unsigned short major; unsigned short minor; unsigned short patch; } _smartCameraPipelineVersion;
    BOOL _offlineVISEnabled;
    NSArray *_portTypesWithGeometricDistortionCorrectionInVISEnabled;
    BOOL _vitalityScoringEnabled;
    BOOL _captureDeviceHasOverCaptureEnabled;
    BOOL _overCaptureEnabled;
    BOOL _frameReconstructionEnabled;
    BOOL _semanticStyleRenderingEnabled;
    BOOL _P3ToBT2020ConversionEnabled;
    int _maxLossyCompressionLevel;
    BOOL _videoSTFEnabled;
    BOOL _videoGreenGhostMitigationEnabled;
    BOOL _ispFastSwitchEnabled;
    BOOL _trueVideoCaptureEnabled;
    NSObject<OS_dispatch_semaphore> *_visProcessingSemaphore;
    BOOL _cinematicAudioEnabled;
    float _videoStabilizationOverscanOverride;
    int _videoStabilizationStrength;
    NSString *_clientApplicationID;
    long long _maximumAllowedInFlightCompressedBytes;
    BOOL _lightSourceMaskAndKeypointDescriptorDataEnabled;
    BOOL _depthDataDeliveryEnabled;
    BOOL _lowResImageUsedByVideoEncoderEnabled;
    BOOL _smartStyleRenderingEnabled;
    BOOL _smartStyleReversibilityEnabled;
    int _smartStyleRenderingMethod;
}

- (void)dealloc;

@end

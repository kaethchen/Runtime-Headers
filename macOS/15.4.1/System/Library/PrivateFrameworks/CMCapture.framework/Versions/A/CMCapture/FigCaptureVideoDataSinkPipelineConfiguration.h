@class FigCaptureSourceConfiguration, NSArray, NSString, FigVideoCaptureConnectionConfiguration;

@interface FigCaptureVideoDataSinkPipelineConfiguration : NSObject {
    struct FigCaptureVideoTransform { BOOL mirrored; int rotationDegrees; struct { int width; int height; } dimensions; } _sourceVideoTransform;
    BOOL _sourceHasAppliedAllZoom;
    int _videoStabilizationType;
    int _motionAttachmentsSource;
    BOOL _faceTrackingEnabled;
    BOOL _offlineVISMotionDataEnabled;
    NSArray *_portTypesWithGeometricDistortionCorrectionInVISEnabled;
    BOOL _P3ToBT2020ConversionEnabled;
    int _sourceNodeColorSpaceProperties;
    int _maxLossyCompressionLevel;
    BOOL _forcePixelTransfer;
    BOOL _videoSTFEnabled;
    FigCaptureSourceConfiguration *_sourceConfiguration;
    int _sourceDeviceType;
    struct { int width; int height; } _visOutputDimensions;
    FigVideoCaptureConnectionConfiguration *_videoDataConnectionConfiguration;
    struct { unsigned int val[8]; } _clientAuditToken;
    BOOL _previewStabilizationEnabled;
    BOOL _cinematicFramingEnabled;
    int _centerStageFramingMode;
    BOOL _deskCamEnabled;
    BOOL _subjectSelectionEnabled;
    BOOL _gazeSelectionEnabled;
    int _overheadCameraMode;
    BOOL _temporalFilterEnabled;
    NSString *_clientApplicationID;
    BOOL _smartStyleRenderingEnabled;
    BOOL _manualCinematicFramingEnabled;
    int _smartStyleRenderingMethod;
    float _manualFramingZoomFactor;
    float _manualFramingPanningAngleX;
    float _manualFramingPanningAngleY;
}

- (void)dealloc;

@end

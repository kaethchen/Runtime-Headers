@class FigVideoCaptureConnectionConfiguration, NSArray, FigMetadataObjectCaptureConnectionConfiguration;

@interface FigCaptureMetadataSinkPipelineConfiguration : NSObject {
    FigMetadataObjectCaptureConnectionConfiguration *_metadataObjectConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_videoDataConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_sceneClassifierConnectionConfiguration;
    BOOL _mrcLowPowerModeEnabled;
    BOOL _useSceneClassifierToGateMetadataDetectors;
    struct { unsigned short major; unsigned short minor; unsigned short patch; } _smartCameraPipelineVersion;
    BOOL _vitalityScoringEnabled;
    BOOL _deferredPrepareEnabled;
    BOOL _previewEnabled;
    int _motionAttachmentsSource;
    BOOL _boxedMetadataEnabled;
    BOOL _compressed8BitInputEnabled;
    int _pearlModuleType;
    NSArray *_detectedObjectMovieFileOutputMetadataConnectionConfigurations;
    int _inputRotationRelativeToSource;
}

- (void)dealloc;

@end

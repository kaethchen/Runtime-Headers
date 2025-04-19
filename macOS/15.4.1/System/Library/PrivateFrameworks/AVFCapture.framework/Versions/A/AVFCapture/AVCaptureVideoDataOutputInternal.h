@class NSArray, NSDictionary, AVWeakReference, AVCaptureDataOutputDelegateCallbackHelper, FigCaptureFrameCounter;

@interface AVCaptureVideoDataOutputInternal : NSObject {
    AVWeakReference *weakReference;
    NSDictionary *videoSettings;
    NSDictionary *clientVideoSettings;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } deprecatedMinFrameDuration;
    BOOL alwaysDiscardsLateVideoFrames;
    BOOL automaticallyConfiguresOutputBufferDimensions;
    BOOL deliversPreviewSizedOutputBuffers;
    BOOL sceneStabilityMetadataEnabled;
    BOOL allLossyVideoCVPixelFormatTypesEnabled;
    NSArray *requestedBufferAttachments;
    BOOL videoSettingsDimensionsOverrideEnabled;
    BOOL videoSettingsDimensionsOverrideEnabledByClient;
    BOOL videoSettingsAspectRatioOverrideEnabled;
    NSArray *availableVideoCVPixelFormatTypes;
    AVCaptureDataOutputDelegateCallbackHelper *delegateCallbackHelper;
    FigCaptureFrameCounter *frameCounter;
}

- (void)dealloc;
- (id)init;

@end

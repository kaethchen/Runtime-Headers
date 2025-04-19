@class NSArray;

@interface AVCaptureDeviceFormatInternal_Tundra : NSObject {
    struct opaqueCMFormatDescription { } *formatDescription;
    NSArray *videoSupportedFrameRateRanges;
    double maxVideoZoomFactor;
    long long autoFocusSystem;
    BOOL centerStageSupported;
    BOOL backgroundBlurSupported;
    BOOL backgroundBlurApertureSupported;
    BOOL studioLightingSupported;
    BOOL studioLightingIntensitySupported;
    BOOL reactionEffectsSupported;
    BOOL backgroundReplacementSupported;
}

@end

@class NSArray, NSString, MediaIOGraphNodeDescription, AVCaptureDevice_Tundra;

@interface AVCaptureDeviceInputInternal_Tundra : NSObject {
    AVCaptureDevice_Tundra *device;
    NSArray *ports;
    MediaIOGraphNodeDescription *deviceInputUnitDescription;
    MediaIOGraphNodeDescription *demuxUnitDescription;
    BOOL ready;
    BOOL centerStageAllowed;
    BOOL backgroundBlurAllowed;
    BOOL studioLightingAllowed;
    BOOL reactionEffectsAllowed;
    BOOL backgroundReplacementAllowed;
    BOOL observingSuppressVideoEffects;
    NSString *blackenFramesKey;
}

@end

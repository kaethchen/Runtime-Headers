@class NSArray, AVCaptureDevice, AVWeakReference;
@protocol AVCallbackCancellation;

@interface AVCaptureDeviceInputInternal : NSObject {
    AVCaptureDevice *device;
    NSArray *ports;
    NSArray *multiCamPorts;
    BOOL unifiedAutoExposureDefaultsEnabled;
    long long audioCaptureMode;
    long long multichannelAudioMode;
    BOOL windNoiseRemovalEnabled;
    BOOL visionDataDeliveryEnabled;
    BOOL cameraCalibrationDataDeliveryEnabled;
    float simulatedAperture;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } videoMinFrameDurationOverride;
    float maxGainOverride;
    BOOL centerStageAllowed;
    BOOL backgroundBlurAllowed;
    BOOL studioLightingAllowed;
    BOOL reactionEffectsAllowed;
    BOOL backgroundReplacementAllowed;
    BOOL ready;
    float portraitLightingEffectStrength;
    AVWeakReference *weakReference;
    id<AVCallbackCancellation> deviceOpenCallbackInvoker;
}

- (void)dealloc;

@end

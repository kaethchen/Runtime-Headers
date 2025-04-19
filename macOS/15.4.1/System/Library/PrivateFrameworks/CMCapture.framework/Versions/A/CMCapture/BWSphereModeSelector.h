@class NSString;

@interface BWSphereModeSelector : NSObject {
    NSString *_portType;
    struct __CFString { } *_currentSphereMode;
    struct __CFString { } *_currentNonLowPowerSphereMode;
    float _maximumFrameRate;
    BOOL _sphereVideoSupported;
    BOOL _sphereVideoEnabled;
    BOOL _sphereVideoRecenteringEnabled;
    BOOL _avoidsSphereRecentering;
    BOOL _enablesSphereWhenAvailable;
    BOOL _motionDataInvalid;
    BOOL _lowPowerSphereModeEnabled;
    BOOL _stillPreviewActiveSupported;
    BOOL _zeroShutterLagEnabled;
    int _sphereThermalLevel;
    BOOL _tripodModeEnabled;
    BOOL _depthDataDeliveryEnabled;
    BOOL _overCaptureEnabled;
    BOOL _variableFrameRateVideoEnabled;
    float _maximumFrameRateSupported;
}

@property (readonly) NSString *portType;
@property (nonatomic) float maximumFrameRate;
@property (readonly, nonatomic) BOOL sphereVideoSupported;
@property (nonatomic) BOOL sphereVideoEnabled;
@property (nonatomic) BOOL sphereVideoRecenteringEnabled;
@property (nonatomic) BOOL avoidsSphereRecentering;
@property (nonatomic) BOOL enablesSphereWhenAvailable;
@property (nonatomic) BOOL zeroShutterLagEnabled;
@property (nonatomic) BOOL lowPowerSphereModeEnabled;
@property (nonatomic) int systemThermalLevel;
@property (nonatomic) BOOL tripodModeEnabled;
@property (nonatomic) BOOL depthDataDeliveryEnabled;
@property (nonatomic) BOOL overCaptureEnabled;
@property (nonatomic) BOOL variableFrameRateVideoEnabled;
@property (readonly) struct __CFString { } *currentSphereMode;
@property (readonly) struct __CFString { } *currentNonLowPowerSphereMode;

+ (void)initialize;

- (void)dealloc;
- (id)initWithPortType:(id)a0 stillActivePreviewSupported:(BOOL)a1 sphereVideoSupported:(BOOL)a2 sphereVideoMaxFrameRate:(float)a3;

@end

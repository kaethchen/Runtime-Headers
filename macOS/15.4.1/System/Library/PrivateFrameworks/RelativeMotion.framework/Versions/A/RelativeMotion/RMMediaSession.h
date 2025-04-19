@class RMRelativeMotionManager;

@interface RMMediaSession : NSObject

@property (class, readonly, nonatomic) double defaultFaceToDevicePitchAngle;

@property (retain, nonatomic) RMRelativeMotionManager *manager;
@property (nonatomic) double sessionStartTimestamp;
@property BOOL sessionStartedWithTracking;
@property (nonatomic) long long clientMode;

+ (BOOL)isAvailable;
+ (BOOL)_isClientModeAvailable:(long long)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_initWithOptions:(id)a0;
- (BOOL)_start;
- (long long)_currentAudioListenerPose:(struct { double x0; double x1; double x2; double x3; } *)a0 timestamp:(double *)a1;
- (void)_stop;
- (long long)_currentAudioListenerPose:(id *)a0;
- (void)_resetTrackingForAllClients;
- (void)axHeadTrackingSettingChanged;
- (struct __CFNotificationCenter { } *)axNotificationCenter;
- (BOOL)isAXHeadTrackingSettingEnabled;
- (void)startMonitoringAXHeadTrackingSetting;
- (void)stopMonitoringAXHeadTrackingSetting;

@end

@class NSObject;
@protocol OS_dispatch_queue;

@interface PowerStateRelay : NSObject {
    int powerStateToken;
    int screenStateToken;
    int screenBrightnessToken;
    int thermalPressureToken;
    int keybagToken;
    NSObject<OS_dispatch_queue> *_powerStateQueue;
    unsigned int _batteryService;
    unsigned int _batteryNotification;
    struct IONotificationPort { } *_batteryPort;
}

@property BOOL pluggedIn;
@property BOOL screenNotDark;
@property BOOL screenUnlocked;
@property unsigned int screenBrightness;
@property double batteryPercentage;
@property unsigned int batteryCurrentCapacity;
@property unsigned int batteryMaximumCapacity;
@property unsigned int batteryDesignCapacity;
@property unsigned int batteryAbsoluteCapacity;
@property unsigned int batteryRawCurrentCapacity;
@property unsigned int batteryRawMaximumCapacity;
@property unsigned int batteryVoltage;
@property unsigned int batteryTimeRemaining;
@property int batteryTemperature;
@property unsigned int batteryDepthOfDischarge;
@property BOOL batteryExternalPowerIsConnected;
@property BOOL batteryIsCharging;
@property BOOL batteryFullyCharged;
@property BOOL batteryAtWarnLevel;
@property BOOL batteryAtCriticalLevel;
@property long long thermalPressure;
@property (nonatomic) BOOL lowPowerModeEnabled;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)defaultRelay;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)thermalPressureLevelToString:(long long)a0;

@end

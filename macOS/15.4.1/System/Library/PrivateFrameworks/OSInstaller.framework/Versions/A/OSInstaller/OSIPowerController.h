@protocol OSIPowerControllerDelegate;

@interface OSIPowerController : NSObject

@property BOOL machineHasBattery;
@property BOOL machineIsPluggedIn;
@property BOOL machineIsLowOnPower;
@property BOOL machineIsCriticallyLowOnPower;
@property unsigned int systemSleepAssertion;
@property unsigned int displaySleepAssertion;
@property BOOL previouslyReleasedSleepAssertion;
@property struct __CFRunLoopSource { } *powerSourceRef;
@property struct __CFRunLoop { } *powerSourceRunloop;
@property BOOL lowBatteryTestMode;
@property id<OSIPowerControllerDelegate> delegate;

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void)_updateState;
- (void)_cacheMachineProperties;
- (void)_startLowBatteryTestMode;
- (void)disableSystemSleep;
- (void)enableSystemSleep;

@end

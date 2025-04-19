@class NSString, HIDElement, HIDDevice, NSObject;
@protocol OS_os_log, CBBrightnessProxy;

@interface CBDisplayModuleHIDLegacy : CBDisplayModule <CBContainerModuleProtocol> {
    id<CBBrightnessProxy> _brightnessControlProxy;
    NSObject<OS_os_log> *_logHandle;
    HIDDevice *_brightnessDevice;
    float _userBrightness;
    BOOL _ALCEnabled;
    struct IONotificationPort { } *_brightnessServiceArrivalNotificationPort;
    unsigned int _brightnessServiceArrivalIterator;
    HIDElement *_elementBrightness;
    HIDElement *_elementALCState;
    HIDElement *_elementALCReset;
    HIDElement *_elementMacMode;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBrightnessControlForDisplayWithVID:(unsigned long long)a0 andPID:(unsigned long long)a1;

- (void)dealloc;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)start;
- (void)stop;
- (BOOL)isOnline;
- (void)ALCBrightnessUpdate:(float)a0;
- (BOOL)supportsMacMode;
- (void)brightnessArrivalHandler:(unsigned int)a0;
- (void)brightnessArrivalHandler:(unsigned int)a0 matchEDIDserialNumber:(BOOL)a1;
- (id)copyPropertyForKey:(id)a0;
- (id)copyPropertyForKey:(id)a0 withParameter:(id)a1;
- (BOOL)getALCState;
- (unsigned long long)getDeviceID;
- (float)getUserBrightness;
- (float)getUserBrightnessFromElement;
- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1;
- (BOOL)handleSetALCStateProperty:(id)a0;
- (BOOL)handleSetBrightnessCommit:(id)a0;
- (BOOL)handleSetBrightnessProperty:(id)a0;
- (BOOL)handleSetBrightnessSmoothProperty:(id)a0;
- (id)initWithBrightnessControl:(id)a0 andQueue:(id)a1;
- (id)newDisplayInfo;
- (id)newStatusInfo;
- (BOOL)resetALC;
- (void)retrieveCurrentStateFromHW;
- (void)sendAvailabilityNotifications;
- (void)sendNotificationForKey:(id)a0 withValue:(id)a1;
- (BOOL)setALCState:(BOOL)a0;
- (BOOL)setDeviceBrightness:(float)a0;
- (void)setMacMode;
- (BOOL)setUserBrightness:(float)a0;
- (void)startHIDDeviceLookup;
- (void)stopHIDDeviceLookup;
- (BOOL)supportsALC;
- (BOOL)supportsALCReset;
- (BOOL)supportsBrightness;

@end

@class NSMutableDictionary, ICCommandCenter, NSNumber, NSMutableArray;

@interface ICScannerDeviceBrowser : NSObject {
    ICCommandCenter *_commandCenter;
    long long _numberOfBrowsingBrowsers;
    long long _numberOfBrowsersOfSharedDevice;
    long long _numberOfBrowsersOfBonjourDevice;
    BOOL _processDevicesInvokedOnce;
}

@property (retain, nonatomic) NSMutableDictionary *devices;
@property (retain, nonatomic) NSMutableArray *browsers;
@property (retain, nonatomic) NSMutableArray *internalDevices;
@property (retain, nonatomic) NSMutableArray *TWAINDevices;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } devicesLock;
@property (copy, nonatomic) NSNumber *procID;

+ (id)defaultBrowser;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)start:(id)a0;
- (void)stop:(id)a0;
- (id)getConnection;
- (void)addDevice:(id)a0;
- (void)removeDevice:(id)a0;
- (id)deviceWithDeviceID:(id)a0;
- (BOOL)sendMessageCmd:(id)a0;
- (void)addTWAINDevice:(id)a0;
- (void)processDevices:(id)a0;
- (void)addBrowser:(id)a0;
- (id)copyOfTWAINDevices;
- (id)deviceWithDelegate:(id)a0;
- (id)deviceWithDeviceRef:(id)a0;
- (id)devicesMatchingDeviceTypeMask:(unsigned long long)a0;
- (void)handleCommandCompletion:(id)a0;
- (void)handleImageCaptureEventNotification:(id)a0;
- (void)handleNetworkDeviceRemoved:(id)a0;
- (void)helloICDD;
- (void)icddConnectionResume:(id)a0;
- (void)icddConnectionSuspend:(id)a0;
- (void)informBrowserDelegateUsingSelector:(SEL)a0 withObject:(id)a1;
- (void)registerForImageCaptureEventNotifications:(id)a0 reason:(id)a1;
- (void)removeAllTWAINDevices;
- (void)removeBrowser:(id)a0;
- (void)resetAllTWAINDevices;
- (void)scanForTWAINDevices;
- (void)startBrowsingForBonjourDevices;
- (void)startBrowsingForSharedDevices;
- (void)stopBrowsingForBonjourDevices;
- (void)stopBrowsingForSharedDevices;
- (void)unregisterForImageCaptureEventNotifications:(id)a0 reason:(id)a1;
- (void)updateDevice:(id)a0;
- (void)updateDevices:(id)a0 type:(unsigned long long)a1;

@end

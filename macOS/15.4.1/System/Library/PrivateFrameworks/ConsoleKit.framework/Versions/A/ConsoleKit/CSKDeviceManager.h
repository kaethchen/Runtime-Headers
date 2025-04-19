@class NSString, NSMutableDictionary, OSActivityStream;
@protocol CSKDeviceManagerDelegate;

@interface CSKDeviceManager : NSObject <OSDeviceDelegate>

@property (retain, nonatomic) OSActivityStream *activityStream;
@property (readonly, nonatomic) NSMutableDictionary *devices;
@property (weak, nonatomic) id<CSKDeviceManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;
+ (long long)_deviceStateFromLogDeviceEvent:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)allDevices;
- (BOOL)activityStream:(id)a0 deviceUDID:(id)a1 deviceID:(id)a2 status:(long long)a3 error:(id)a4;
- (void)_signalDelegateForDevice:(id)a0 didTrust:(BOOL)a1;

@end

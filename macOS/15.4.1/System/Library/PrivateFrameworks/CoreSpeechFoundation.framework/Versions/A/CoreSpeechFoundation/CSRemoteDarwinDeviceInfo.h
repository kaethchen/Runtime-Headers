@class NSObject, NSMutableDictionary, NSMutableOrderedSet;
@protocol OS_dispatch_queue;

@interface CSRemoteDarwinDeviceInfo : NSObject

@property (retain, nonatomic) NSMutableDictionary *deviceUIDMapTable;
@property (retain, nonatomic) NSMutableOrderedSet *voiceTriggerEnabledDevices;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)hasDarwinDeviceConnected;
- (BOOL)hasDarwinDeviceHandleVoiceTrigger;
- (void)deviceConnectedWithUUID:(id)a0;
- (id)fetchRichDeviceUIDStringFromUUID:(id)a0;
- (BOOL)_isRemoteDarwinConnectedWithUUID:(id)a0;
- (void)addDeviceIDPairToMapTable:(id)a0 withDeviceUID:(id)a1;
- (void)allDeviceDisconnected;
- (void)deviceDisconnectedWithUUID:(id)a0;
- (id)fetchDeviceUUIDStringFromUID:(id)a0;
- (BOOL)isPrimaryVoiceTriggerDeviceWithUUID:(id)a0;
- (BOOL)isRemoteDarwinConnectedWithUUID:(id)a0;
- (void)notifyVoiceTriggerDisabledWithDeviceUUID:(id)a0;
- (void)notifyVoiceTriggerEnabledWithDeviceUUID:(id)a0;

@end

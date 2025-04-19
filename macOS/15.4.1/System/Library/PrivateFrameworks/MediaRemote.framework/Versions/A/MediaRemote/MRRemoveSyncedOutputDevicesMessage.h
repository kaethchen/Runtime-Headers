@class NSArray;

@interface MRRemoveSyncedOutputDevicesMessage : MRProtocolMessage

@property (readonly, nonatomic) NSArray *outputDeviceUIDs;

- (unsigned long long)type;
- (id)initWithOutputDeviceUID:(id)a0;
- (id)initWithOutputDeviceUIDs:(id)a0;

@end

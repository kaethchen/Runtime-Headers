@class NSUUID, NSMutableSet, NSMutableDictionary;

@interface HMDNotificationRegistryCharacteristicsRequest : HMDNotificationRegistryRequest

@property (readonly, copy) NSUUID *accessoryUUID;
@property (readonly) NSMutableSet *characteristicInstanceIDs;
@property (readonly) NSMutableDictionary *characteristicChangeThresholds;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithEnable:(BOOL)a0 user:(id)a1 deviceIdsDestination:(id)a2 accessoryUUID:(id)a3;

@end

@class NSUUID;

@interface HMDNotificationRegistryActionSetRequest : HMDNotificationRegistryRequest

@property (readonly, copy) NSUUID *actionSetUUID;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithEnable:(BOOL)a0 user:(id)a1 deviceIdsDestination:(id)a2 actionSetUUID:(id)a3;

@end

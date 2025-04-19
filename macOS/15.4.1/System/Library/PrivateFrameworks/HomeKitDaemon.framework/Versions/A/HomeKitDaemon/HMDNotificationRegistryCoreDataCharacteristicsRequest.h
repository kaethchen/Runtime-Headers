@class HMDNotificationRegistryCharacteristicsRequest, NSArray;

@interface HMDNotificationRegistryCoreDataCharacteristicsRequest : HMFObject

@property (readonly) HMDNotificationRegistryCharacteristicsRequest *request;
@property (readonly) NSArray *characteristicThresholds;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 characteristicThresholds:(id)a1;

@end

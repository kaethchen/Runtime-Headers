@class NSArray, HMDNotificationRegistryCoreDataCharacteristicsRequest;

@interface HMDNotificationRegistryCoreDataCharacteristicsRequestResult : HMFObject

@property (readonly) HMDNotificationRegistryCoreDataCharacteristicsRequest *coreDataRequest;
@property (readonly) BOOL didSucceed;
@property (readonly) BOOL didModify;
@property (readonly) BOOL didModifyThresholdOnly;
@property (readonly) NSArray *modifiedCharacteristics;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoreDataRequest:(id)a0 didSucceed:(BOOL)a1 didModify:(BOOL)a2 didModifyThresholdOnly:(BOOL)a3 modifiedCharacteristics:(id)a4;

@end

@class NSUUID, NSString;

@interface HMDAuditProhibitedAccessoryForRestrictedGuestOperation : HMDRemoveAccessoryPairingOperation <HMFLogging>

@property (readonly, copy, nonatomic) NSUUID *guestUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)awaitForAllSettledFutures:(id)a0;
+ (id)getPairingsFromAccessory:(id)a0 flow:(id)a1;

- (id)logIdentifier;
- (BOOL)_anyModificationsFailedExcludingDoesNotExistError:(id)a0 responseError:(id *)a1;
- (id)_auditHAPAccessory:(id)a0 forRestrictedGuest:(id)a1 inHome:(id)a2 flow:(id)a3;
- (id)executeOperationWithHomeManager:(id)a0 flow:(id)a1;
- (id)initWithAccessory:(id)a0 restrictedGuest:(id)a1;
- (BOOL)mainWithError:(id *)a0;

@end

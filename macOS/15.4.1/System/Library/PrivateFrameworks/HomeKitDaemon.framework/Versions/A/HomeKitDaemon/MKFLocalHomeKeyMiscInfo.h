@class NSUUID, NSNumber;

@interface MKFLocalHomeKeyMiscInfo : HMDManagedObject

@property (copy, nonatomic) NSUUID *clientWalletKeyUUID;
@property (copy, nonatomic) NSNumber *dismissedWalletKeyUWBUnlockOnboarding;
@property (copy, nonatomic) NSUUID *homeUUID;

+ (id)fetchRequest;
+ (id)fetchLocalHomeKeyMiscInfoWithHomeUUID:(id)a0 managedObjectContext:(id)a1;

@end

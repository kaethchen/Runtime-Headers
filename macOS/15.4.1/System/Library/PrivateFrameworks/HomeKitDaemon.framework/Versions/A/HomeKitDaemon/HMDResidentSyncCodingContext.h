@class HMDDeviceAddress, NSSet;
@protocol HMDHomeMember;

@interface HMDResidentSyncCodingContext : NSObject <HMDManagedObjectFilter> {
    NSSet *_relevantTriggers;
    NSSet *_relevantBulletinRegistrations;
}

@property (readonly, nonatomic) id<HMDHomeMember> targetUser;
@property (readonly, nonatomic) BOOL targetIsResident;
@property (readonly, nonatomic) HMDDeviceAddress *targetDeviceAddress;

- (void).cxx_destruct;
- (BOOL)_shouldExcludeForRestrictedGuestObject:(id)a0 context:(id)a1;
- (id)initWithTargetUser:(id)a0 targetIsResident:(BOOL)a1 targetDeviceAddress:(id)a2;
- (BOOL)shouldExcludeObject:(id)a0 context:(id)a1;

@end

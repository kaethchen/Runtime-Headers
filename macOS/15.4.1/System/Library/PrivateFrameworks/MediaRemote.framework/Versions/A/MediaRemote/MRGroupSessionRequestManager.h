@class MRGroupSessionInfo, MRGroupSessionEligibilityStatus, MRUserIdentity;

@interface MRGroupSessionRequestManager : NSObject

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (nonatomic) BOOL hasPopulatedIdentity;
@property (readonly, nonatomic) MRGroupSessionInfo *groupSessionInfo;
@property (retain, nonatomic) MRUserIdentity *localUserIdentity;
@property (retain, nonatomic) MRGroupSessionEligibilityStatus *eligibilityStatus;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)augmentLocalCommandOptions:(id)a0;
- (void)handleGroupSessionNearbyContactDiscoveryDidChange:(id)a0;
- (void)registerObservers;
- (void)restoreState;
- (BOOL)updateGroupSessionEligibility:(id)a0;
- (void)updateGroupSessionInfo:(id)a0;
- (void)updateLocalIdentity:(id)a0;

@end

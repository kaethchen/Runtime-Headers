@class HMMTRFabric;

@interface HMMTRAccessControl : HMFObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _currentUserPrivilege;
}

@property (weak) HMMTRFabric *fabric;
@property (nonatomic) unsigned long long currentUserPrivilege;
@property (copy) id /* block */ privilegeGetter;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (id)logIdentifier;
- (id)attributeDescriptions;
- (unsigned long long)currentUserPrivilege;
- (void)setCurrentUserPrivilege:(unsigned long long)a0;
- (void)handleRegularUserAdded;
- (void)handleSharedAdminAdded;

@end

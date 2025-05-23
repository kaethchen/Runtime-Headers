@class MCMUserIdentityCache;

@interface MCMGroupManager : NSObject

@property (readonly, nonatomic) MCMUserIdentityCache *userIdentityCache;

+ (id)defaultManager;

- (void).cxx_destruct;
- (void)_cleanupUnreferencedGroupContainersForUserIdentity:(id)a0 containerClass:(unsigned long long)a1 referenceCounts:(id)a2 context:(id)a3;
- (id)groupContainerIdentifiersForOwnerIdentifier:(id)a0 groupContainerClass:(unsigned long long)a1 codeSignInfo:(id)a2 withError:(id *)a3;
- (id)initWithUserIdentityCache:(id)a0;
- (void)reconcileGroupContainersForContainerClass:(unsigned long long)a0 context:(id)a1;

@end

@class NSString, MCMClientIdentity, MCMUserIdentityCache;
@protocol MCMContainerCache;

@interface MCMContainerFactory : NSObject <MCMContainerFactory>

@property (readonly, nonatomic) id<MCMContainerCache> cache;
@property (readonly, nonatomic) MCMClientIdentity *clientIdentity;
@property (readonly, nonatomic) MCMUserIdentityCache *userIdentityCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_containerPathIdentifierForContainerIdentity:(id)a0;
- (id)_createContainerForContainerIdentity:(id)a0 error:(id *)a1;
- (id)_generateConcreteContainerIdentityFromContainerIdentity:(id)a0 error:(id *)a1;
- (id)containerForContainerIdentity:(id)a0 createIfNecessary:(BOOL)a1 error:(id *)a2;
- (id)createStagedContainerForContainerIdentity:(id)a0 finalContainerPath:(id *)a1 dataProtectionClass:(int)a2 error:(id *)a3;
- (BOOL)deleteURL:(id)a0 forUserIdentity:(id)a1 error:(id *)a2;
- (BOOL)deleteURL:(id)a0 forUserIdentity:(id)a1 reclaimSoon:(BOOL)a2 error:(id *)a3;
- (id)initWithContainerCache:(id)a0 clientIdentity:(id)a1 userIdentityCache:(id)a2;
- (BOOL)upgradeContainer:(id)a0 clientIdentity:(id)a1 error:(id *)a2;

@end

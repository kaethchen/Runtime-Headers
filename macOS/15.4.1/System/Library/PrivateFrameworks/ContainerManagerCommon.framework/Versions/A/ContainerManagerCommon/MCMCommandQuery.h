@class NSSet, MCMUserIdentity, NSUUID;
@protocol MCMContainerConfiguration;

@interface MCMCommandQuery : MCMCommand <MCMParametersQuery>

@property (readonly, nonatomic) unsigned int platform;
@property (readonly, nonatomic) unsigned long long explicitFlags;
@property (readonly, nonatomic) NSSet *identifiers;
@property (readonly, nonatomic) NSSet *groupIdentifiers;
@property (readonly, nonatomic) BOOL createIfNecessary;
@property (readonly, nonatomic) BOOL includeInfoInResult;
@property (readonly, nonatomic) BOOL includePathInResult;
@property (readonly, nonatomic) BOOL issueSandboxExtensions;
@property (readonly, nonatomic) unsigned int uid;
@property (readonly, nonatomic) MCMUserIdentity *userIdentity;
@property (readonly, nonatomic) BOOL transient;
@property (readonly, nonatomic) BOOL includeUnowned;
@property (readonly, nonatomic) BOOL expectSingleResult;
@property (readonly, nonatomic) BOOL fuzzyMatchTransient;
@property (readonly, nonatomic) BOOL fuzzyMatchInternalUUID;
@property (readonly, nonatomic) NSUUID *internalUUID;
@property (readonly, nonatomic) BOOL extensionsUseProxiedClient;
@property (readonly, nonatomic) BOOL extensionsPolicyUsesProxiedClient;
@property (readonly, nonatomic) unsigned long long privateFlags;
@property (readonly, nonatomic) BOOL legacyPersonaPolicy;
@property (readonly, nonatomic) BOOL legacyExtensionPolicy;
@property (readonly, nonatomic) BOOL includeUserManagedAssetsRelPath;
@property (readonly, nonatomic) BOOL includeCreator;
@property (readonly, nonatomic) unsigned int expectedPersonaKernelID;
@property (readonly, nonatomic) id<MCMContainerConfiguration> containerConfig;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void).cxx_destruct;
- (void)execute;
- (id)_containerIdentifiersIncludingUnownedForContainerClass:(unsigned long long)a0 canAccessAllContainers:(BOOL *)a1 error:(id *)a2;
- (id)_executeQueryForContainerIdentity:(id)a0 error:(id *)a1;
- (BOOL)_executeQueryPlan:(id)a0 resultContainers:(id)a1 error:(id *)a2;
- (void)_finalizeWithContainers:(id)a0 error:(id)a1;
- (id)_queryPlanWithIdentifiers:(id)a0 isGroupClass:(BOOL)a1 clientIdentity:(id)a2 error:(id *)a3;
- (id)_setOfUserIdentities;
- (id)_setOfUserIdentitiesForIdentifiers:(id)a0 isGroupClass:(BOOL)a1;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (BOOL)preflightClientAllowed;

@end

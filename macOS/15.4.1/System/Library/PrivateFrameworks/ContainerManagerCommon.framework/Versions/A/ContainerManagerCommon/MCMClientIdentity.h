@class MCMUserIdentity, NSString, MCMPOSIXUser, NSURL;
@protocol MCMAMFI, MCMClientIdentity, MCMClientCodeSignInfo;

@interface MCMClientIdentity : NSObject <MCMClientIdentity> {
    Class _amfiClass;
    id<MCMAMFI> _amfi;
    BOOL _testClient;
}

@property (retain, nonatomic, setter=setAMFIClass:) Class amfiClass;
@property (readonly, nonatomic, getter=isTestClient) BOOL testClient;
@property (readonly, nonatomic) int posixPID;
@property (readonly, nonatomic) MCMPOSIXUser *posixUser;
@property (readonly, nonatomic, getter=isSandboxed) BOOL sandboxed;
@property (readonly, nonatomic) struct { unsigned int val[8]; } auditToken;
@property (readonly, nonatomic) id<MCMClientIdentity> proximateClient;
@property (readonly, nonatomic) MCMUserIdentity *userIdentity;
@property (readonly, nonatomic, getter=isKernel) BOOL kernel;
@property (readonly, nonatomic) unsigned int platform;
@property (readonly, nonatomic) NSURL *sandboxContainerURL;
@property (readonly, nonatomic) id<MCMClientCodeSignInfo> codeSignInfo;
@property (readonly, nonatomic) BOOL cached;
@property (readonly, nonatomic) id<MCMAMFI> amfi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)anonymousPrivilegedClientIdentityWithUserIdentity:(id)a0;
+ (id)privilegedClientIdentityWithUserIdentity:(id)a0 kernel:(BOOL)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)shortDescription;
- (id)initInternal;
- (id)clientIdentityByChangingCached:(BOOL)a0;
- (BOOL)isAllowedToWipeAnyDataContainer;
- (BOOL)_isClientAffordedSandboxForContainerIdentifier:(id)a0 containerConfig:(id)a1;
- (BOOL)isAllowedToTest;
- (BOOL)_checkIsAllowedToHaveSandboxExtensionForIdentity:(id)a0 containerPath:(id)a1 containerConfig:(id)a2 allowed:(BOOL *)a3 error:(id *)a4;
- (BOOL)_checkIsAllowedToHaveSandboxExtensionForRestrictedContainerPath:(id)a0 identifier:(id)a1 containerConfig:(id)a2 allowed:(BOOL *)a3 error:(id *)a4;
- (BOOL)_checkShouldIssueExtensionForIdentity:(id)a0 containerPath:(id)a1 legacyExtensionPolicy:(BOOL)a2 extensionsPolicyUsesProxiedClient:(BOOL)a3 issueExtension:(BOOL *)a4 error:(id *)a5;
- (BOOL)_isAllowedAccessToNonRestrictedProtectedContainerWithIdentifier:(id)a0 clientIdentifier:(id)a1 containerConfig:(id)a2;
- (BOOL)_shouldAttemptToIssueSandboxExtensionUsingLegacyPolicyForContainerConfig:(id)a0 identifier:(id)a1;
- (Class)amfiClass;
- (struct container_client { unsigned long long x0; char *x1; char *x2; unsigned int x3; char *x4; unsigned int x5; unsigned int x6; struct { unsigned int x0[8]; } x7; int x8; BOOL x9; BOOL x10; BOOL x11; id x12; } *)createLibsystemClient;
- (id)initWithPOSIXUser:(id)a0 POSIXPID:(int)a1 platform:(unsigned int)a2 userIdentity:(id)a3 proximateClient:(id)a4 auditToken:(struct { unsigned int x0[8]; })a5 codeSignInfo:(id)a6 sandboxed:(BOOL)a7 sandboxContainerURL:(id)a8 testClient:(BOOL)a9 kernel:(BOOL)a10;
- (BOOL)isAllowedToAccessCodesignMapping;
- (BOOL)isAllowedToAccessContainerIdentity:(id)a0 error:(unsigned long long *)a1;
- (BOOL)isAllowedToAccessInfoMetadata;
- (BOOL)isAllowedToAccessUserAssets;
- (BOOL)isAllowedToChangeReferences;
- (BOOL)isAllowedToControlCaches;
- (BOOL)isAllowedToDelete;
- (BOOL)isAllowedToLookupAllContainersOfClass:(unsigned long long)a0;
- (BOOL)isAllowedToLookupContainerIdentity:(id)a0;
- (BOOL)isAllowedToLookupGroupContainersOfClass:(unsigned long long)a0 ownedByIdentifiers:(id)a1;
- (BOOL)isAllowedToLookupViaPrivateEntitlementWithClass:(unsigned long long)a0 identifier:(id)a1;
- (BOOL)isAllowedToReadReferences;
- (BOOL)isAllowedToRecreateContainerStructure;
- (BOOL)isAllowedToRegenerateDirectoryUUIDs;
- (BOOL)isAllowedToReplaceContainers;
- (BOOL)isAllowedToRestoreContainer;
- (BOOL)isAllowedToSetDataProtection;
- (BOOL)isAllowedToStageSharedContent;
- (BOOL)isAllowedToStartDataMigration;
- (BOOL)isAllowedToStartUserDataMigration;
- (BOOL)isAllowedToWipePlugInDataContainerWithIdentifier:(id)a0;
- (char *)issueSandboxExtensionWithIdentity:(id)a0 containerPath:(id)a1 legacyExtensionPolicy:(BOOL)a2 extensionsUseProxiedClient:(BOOL)a3 extensionsPolicyUsesProxiedClient:(BOOL)a4 error:(id *)a5;

@end

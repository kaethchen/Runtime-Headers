@class NSString, NSMutableDictionary, CKDLogicalDeviceContext, CKDAccount;

@interface CKDPCSIdentityManager : NSObject

@property (retain) CKDAccount *account;
@property (readonly, nonatomic) CKDLogicalDeviceContext *deviceContext;
@property (readonly, nonatomic) BOOL forceEnableReadOnlyManatee;
@property (retain) NSString *cachedAccountDSID;
@property (retain) NSMutableDictionary *PCSIdentityWrappersByServiceName;
@property (nonatomic) struct _PCSIdentityData { } *debugIdentity;
@property (nonatomic) BOOL forceSecurityErrorOnIdentityValidation;
@property (nonatomic) BOOL serviceIsManateeForUnitTests;
@property (nonatomic) BOOL refetchPCSIdentitySet;
@property (nonatomic) BOOL shouldEnforceIdentityFetchLimit;
@property (nonatomic) unsigned long long identityFetchLimit;
@property (nonatomic) unsigned int clientSDKVersion;
@property (retain, nonatomic) NSMutableDictionary *pcsTestOverrides;
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) BOOL currentServiceIsManatee;

+ (id)_copyPCSIdentitiesForBackingMockAccount:(id)a0 withError:(id *)a1;
+ (struct _PCSIdentitySetData { } *)_copyStingrayIdentitiesForOptions:(id)a0 withError:(id *)a1;
+ (struct _PCSIdentitySetData { } *)_copyStingrayIdentitiesForService:(id)a0 forBackingExplicitCredentialsAccount:(id)a1 withError:(id *)a2;
+ (struct _PCSIdentitySetData { } *)_createIdentitySetForService:(id)a0 dsid:(id)a1 error:(id *)a2;
+ (id)_generatePCSIdentityOptionsForService:(id)a0 forBackingExplicitCredentialsAccount:(id)a1 withError:(id *)a2;
+ (struct _PCSIdentitySetData { } *)_getTestAccountIdentitySetForService:(id)a0 forBackingExplicitCredentialsAccount:(id)a1 withError:(id *)a2;
+ (struct _PCSIdentitySetData { } *)_getTestAccountIdentitySetForService:(id)a0 forBackingMockAccount:(id)a1 shouldFaultInIdentities:(BOOL)a2 withError:(id *)a3;
+ (struct _PCSIdentitySetData { } *)_getTestAccountIdentitySetForService:(id)a0 forBackingMockAccount:(id)a1 withError:(id *)a2;
+ (BOOL)_rollTestAccountIdentitySetForService:(id)a0 forBackingExplicitCredentialsAccount:(id)a1 oldIdentityID:(id *)a2 newIdentityID:(id *)a3 withError:(id *)a4;
+ (BOOL)_rollTestAccountIdentitySetForService:(id)a0 forBackingExplicitCredentialsAccount:(id)a1 withError:(id *)a2;
+ (BOOL)_setIdentitySet:(struct _PCSIdentitySetData { } *)a0 forServiceName:(id)a1 backingMockAccount:(id)a2 withError:(id *)a3;
+ (void)clearSharedMockIdentitySetsCache;
+ (struct _PCSIdentitySetData { } *)copyTestAccountIdentitySetForService:(id)a0 forBackingExplicitCredentialsAccount:(id)a1 withError:(id *)a2;
+ (struct _PCSIdentitySetData { } *)copyTestAccountIdentitySetForService:(id)a0 forBackingMockAccount:(id)a1 withError:(id *)a2;
+ (struct _PCSIdentitySetData { } *)createFullKeychainIdentitySetForAccount:(id)a0 serviceName:(id)a1 error:(id *)a2;
+ (BOOL)credentialsAreValidForAccount:(id)a0;
+ (id)overrideKeys;
+ (id)sharedFakeIdentitySetsByServiceByUsername;
+ (id)sharedMockIdentitySetsByServiceByIdentifier;

- (void)dealloc;
- (void).cxx_destruct;
- (void)updateAccount:(id)a0;
- (void)clearOverrides;
- (id)PCSServiceStringFromCKServiceType:(unsigned long long)a0;
- (id)_cacheIdentitySet:(struct _PCSIdentitySetData { } *)a0 forService:(id)a1;
- (BOOL)_checkAndClearPCSTestOverrideForKey:(id)a0;
- (struct _PCSIdentitySetData { } *)_copyIdentityForService:(id)a0 useCache:(BOOL)a1 validateCurrentKey:(BOOL)a2 error:(id *)a3;
- (id)_copyPublicKeyDataForAllIdentitiesInSet:(struct _PCSIdentitySetData { } *)a0 withService:(unsigned long long)a1;
- (id)_copyPublicKeyDataForIdentitySet:(struct _PCSIdentitySetData { } *)a0 withService:(unsigned long long)a1 withError:(id *)a2;
- (BOOL)_hasCurrentKeyForService:(id)a0 inIdentitySet:(struct _PCSIdentitySetData { } *)a1 withError:(id *)a2;
- (id)copyAllPublicKeysForService:(unsigned long long)a0 withError:(id *)a1;
- (struct _PCSPublicIdentityData { } *)copyDiversifiedIdentityForService:(unsigned long long)a0 userIDEntropy:(id)a1 withError:(id *)a2;
- (id)copyDiversifiedPublicKeyForService:(unsigned long long)a0 userIDEntropy:(id)a1 withError:(id *)a2;
- (struct _PCSIdentitySetData { } *)copyIdentitySetWithType:(unsigned long long)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)copyPublicKeyForService:(unsigned long long)a0 withError:(id *)a1;
- (struct _PCSIdentitySetData { } *)copyTestAccountIdentitySetForService:(id)a0 forBackingExplicitCredentialsAccount:(id)a1 withError:(id *)a2;
- (struct _PCSIdentityData { } *)createCombinedIdentityWithOutOfNetworkPrivateKey:(id)a0 publicSharingIdentity:(id)a1;
- (struct _PCSIdentitySetData { } *)createFullKeychainIdentitySetWithError:(id *)a0;
- (struct _PCSPublicIdentityData { } *)createPublicSharingIdentityFromPublicKey:(id)a0 error:(id *)a1;
- (struct _PCSIdentityData { } *)createRandomSharingIdentityWithError:(id *)a0;
- (struct _PCSIdentityData { } *)createSharingIdentityFromData:(id)a0 error:(id *)a1;
- (struct _PCSIdentitySetData { } *)createTemporaryCloudKitFeaturesSigningIdentitySetForServiceName:(id)a0 withError:(id *)a1;
- (id)dataFromSharingIdentity:(struct _PCSIdentityData { } *)a0 error:(id *)a1;
- (struct _PCSIdentityData { } *)debugSharingIdentity;
- (void)identitiesChanged;
- (BOOL)identitySet:(struct _PCSIdentitySetData { } *)a0 containsPublicKey:(id)a1 error:(id *)a2;
- (id)initWithAccount:(id)a0 deviceContext:(id)a1 serviceName:(id)a2 forceEnableReadOnlyManatee:(BOOL)a3 clientSDKVersion:(unsigned int)a4;
- (BOOL)isManateeAvailableWithError:(id *)a0;
- (BOOL)liverpoolServiceOwnsPublicID:(id)a0;
- (BOOL)serviceIsManatee:(id)a0;
- (void)setOverride:(id)a0 value:(id)a1;
- (void)setPCSServiceNameOverwrite:(id)a0;

@end

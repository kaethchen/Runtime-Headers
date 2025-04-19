@class CDPContext;
@protocol CDPProtectedCloudStorageProxy;

@interface CDPDPCSController : NSObject

@property (retain, nonatomic) id<CDPProtectedCloudStorageProxy> pcsProxy;
@property (retain, nonatomic) CDPContext *context;

- (id)init;
- (void).cxx_destruct;
- (void)repairEDPStateWithCompletion:(id /* block */)a0;
- (void)_checkiCDPStatusNetwork:(BOOL)a0 withCompletion:(id /* block */)a1;
- (id)_contextSetupDictionary;
- (id)_edpContextSetupDictionary;
- (void)_enableCDPWithCompletion:(id /* block */)a0;
- (id)_fetchKeyForPCSIdentityRef:(struct _PCSIdentityData { } *)a0;
- (struct _PCSIdentitySetData { } *)_getOrSetupIdentitySetRef:(id *)a0;
- (void)_reauthenticateAndCheckiCDPStatusWithNetwork:(BOOL)a0 completion:(id /* block */)a1;
- (void)_renewCredentialsWithError:(id)a0 completion:(id /* block */)a1;
- (BOOL)_shoudAllowKeyFetchForService:(id)a0;
- (void)changePasswordWithCompletion:(id /* block */)a0;
- (void)checkiCDPStatusNetwork:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)enableCDPWithCompletion:(id /* block */)a0;
- (void)getRecoveryTokenInfo:(id /* block */)a0;
- (id)initWithContext:(id)a0 pcsProxy:(id)a1;
- (BOOL)isCloudProtectionEnabledLocally:(id *)a0;
- (BOOL)isCompanionInKeychainCircle:(id *)a0;
- (id)pcsKeysForService:(id)a0 error:(id *)a1;
- (void)recoverAndSynchronizeKeysWithCompletion:(id /* block */)a0;
- (void)recoverKeysWithCompletion:(id /* block */)a0;
- (void)resetProtectedDataShouldJoinCDP:(BOOL)a0 edpOnly:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)setupEDPIdentitiesWithCompletion:(id /* block */)a0;
- (void)validateEDPIdentitiesWithCompletion:(id /* block */)a0;

@end

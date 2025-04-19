@class NSString;

@interface CDPProtectedCloudStorageProxyImpl : NSObject <CDPProtectedCloudStorageProxy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct _PCSIdentitySetData { } *)pcsIdentitySetupWithInfo:(id)a0 error:(id *)a1;
- (BOOL)_performPCSBlock:(id /* block */)a0 error:(id *)a1;
- (void)edpPCSGuitarfishChangePassword:(id)a0 completion:(id /* block */)a1;
- (void)edpPCSGuitarfishGetRecoveryTokenInfo:(id)a0 completion:(id /* block */)a1;
- (void)edpPCSGuitarfishRepairIdentities:(id)a0 completion:(id /* block */)a1;
- (void)edpPCSGuitarfishSetupIdentities:(id)a0 completion:(id /* block */)a1;
- (void)edpPCSGuitarfishValidateIdentities:(id)a0 completion:(id /* block */)a1;
- (void)edpPCSResetProtectedData:(id)a0 completion:(id /* block */)a1;
- (BOOL)isWalrusEnabledWithOptions:(id)a0 error:(id *)a1;
- (struct _PCSIdentitySetData { } *)pcsIdentityCreateWithInfo:(id)a0 error:(id *)a1;
- (BOOL)pcsIdentityMigrateToiCDPWithInfo:(id)a0 error:(id *)a1;
- (BOOL)pcsIdentitySetCompanionInCircle:(struct _PCSIdentitySetData { } *)a0 error:(id *)a1;
- (BOOL)pcsIdentitySetIsInICDPLocal:(struct _PCSIdentitySetData { } *)a0 error:(id *)a1;
- (BOOL)pcsIdentitySetIsInICDPNetwork:(struct _PCSIdentitySetData { } *)a0 options:(id)a1 error:(id *)a2;
- (BOOL)pcsRestoreLocalBackup:(id)a0 error:(id *)a1;
- (BOOL)pcsSynchronizeKeysWithInfo:(id)a0 error:(id *)a1;
- (BOOL)repairWalrusWithAccountIdentifier:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)setWalrusEnabled:(BOOL)a0 accountIdentifier:(id)a1 options:(id)a2 error:(id *)a3;

@end

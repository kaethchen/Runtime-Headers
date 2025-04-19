@class NSString, CDPDPCSController, CDPContext;
@protocol CDPStateUIProviderInternal, CDPDAuthProviderInternal;

@interface CDPDEDPRecoveryController : NSObject <CDPDEDPRecoveryControl, CDPDDeviceSecretValidatorDelegate>

@property (retain, nonatomic) CDPDPCSController *pcsController;
@property (retain, nonatomic) CDPContext *cdpContext;
@property (retain, nonatomic) id<CDPStateUIProviderInternal> uiProvider;
@property (retain, nonatomic) id<CDPDAuthProviderInternal> authProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)repairEDPStateWithCompletion:(id /* block */)a0;
- (void)secretValidator:(id)a0 didRequestRepairEDPStateWithContext:(id)a1 completion:(id /* block */)a2;
- (void)_clearAllEDPFollowUps;
- (void)_clearEDPFollowUp;
- (id)_edpAttemptsRemainingPrimaryForAccount:(id)a0;
- (id)_edpAttemptsRemainingRecoveryForAccount:(id)a0;
- (id)_edpHealthPrimaryForAccount:(id)a0;
- (id)_edpHealthRecoveryForAccount:(id)a0;
- (id)_edpPVMatchesForAccount:(id)a0;
- (void)_fetchEDPRecoveryTokenWithCompletion:(id /* block */)a0;
- (id)_getAppleAccountForAltDSID:(id)a0;
- (void)_interactiveRepairWithCompletion:(id /* block */)a0;
- (void)_postRepairEDPCDPFollowUp;
- (void)_refreshContextWithSilentAuthWithCompletion:(id /* block */)a0;
- (void)_refreshedEDPStateWithCompletion:(id /* block */)a0;
- (void)_silentPasswordChangeWithCompletion:(id /* block */)a0;
- (void)_updateAccountPropertiesWithTokenInfoWithCompletion:(id /* block */)a0;
- (unsigned long long)_updateEDPStateOnContextFromRawState:(id)a0;
- (void)clearCDPEDPFollowUp;
- (void)createEDPLivenessDictionaryWithCompletion:(id /* block */)a0;
- (void)edpHealthIgnoringErrorWithCompletion:(id /* block */)a0;
- (void)fetchEDPRecoveryTokenWithCompletion:(id /* block */)a0;
- (id)initWithContext:(id)a0 uiProvider:(id)a1 authProvider:(id)a2 pcsController:(id)a3;
- (void)performInteractiveEDPRepairWithCompletion:(id /* block */)a0;
- (void)processADPDisablement;
- (void)resetProtectedDataShouldJoinCDP:(BOOL)a0 edpOnly:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)secretValidator:(id)a0 didRequestEDPRecoveryTokenRepairWithContext:(id)a1 successfulCDPRecoveryContinuationHandler:(id /* block */)a2;
- (void)secretValidator:(id)a0 didRequestValidateEDPIdentitiesWithContext:(id)a1 completion:(id /* block */)a2;
- (void)secretValidator:(id)a0 didRequestValidateEDPRecoveryToken:(id)a1 withContext:(id)a2 completion:(id /* block */)a3;
- (void)secretValidator:(id)a0 recoverSecureBackupWithContext:(id)a1 completion:(id /* block */)a2;
- (BOOL)secretValidator:(id)a0 shouldContinueValidationAfterError:(id)a1;
- (void)secretValidator:(id)a0 validateRecoveryKeyWithContext:(id)a1 completion:(id /* block */)a2;
- (void)setupEDPStateWithCompletion:(id /* block */)a0;
- (void)silentlyRepairEDPStateWithCompletion:(id /* block */)a0;
- (void)uploadEDPRecoveryTokenForReason:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)validateEDPIdentitiesWithCompletion:(id /* block */)a0;
- (void)validateEDPRecoveryToken:(id)a0 completion:(id /* block */)a1;

@end

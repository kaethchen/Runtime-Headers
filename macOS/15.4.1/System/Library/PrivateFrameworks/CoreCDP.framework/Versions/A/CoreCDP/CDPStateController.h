@interface CDPStateController : CDPController

- (id)init;
- (BOOL)isManateeAvailable:(id *)a0;
- (void)handleCloudDataProtectionStateWithCompletion:(id /* block */)a0;
- (void)repairCloudDataProtectionStateWithCompletion:(id /* block */)a0;
- (void)startCircleApplicationApprovalServer:(id /* block */)a0;
- (void)localSecretChangedTo:(id)a0 secretType:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)fetchEDPTokenWithCompletion:(id /* block */)a0;
- (void)_handleCloudDataProtectionStateWithCompletion:(id /* block */)a0;
- (void)attemptToEscrowPreRecord:(id)a0 completion:(id /* block */)a1;
- (void)attemptToEscrowPreRecord:(id)a0 preRecordUUID:(id)a1 secretType:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)authenticateAndDeleteRecoveryKeyWithCompletion:(id /* block */)a0;
- (void)authenticateAndGenerateNewRecoveryKeyWithCompletion:(id /* block */)a0;
- (id)createEDPLivenessDictionaryWithContext:(id)a0 error:(id *)a1;
- (void)deleteRecoveryKey:(id /* block */)a0;
- (BOOL)deleteRecoveryKeyWithError:(id *)a0;
- (void)deviceEscrowRecordRecoverableWithContext:(id)a0 completion:(id /* block */)a1;
- (void)fetchEscrowRecordDevicesWithContext:(id)a0 usingCache:(BOOL)a1 completion:(id /* block */)a2;
- (void)finishCyrusFlowAfterTermsAgreementWithContext:(id /* block */)a0;
- (void)finishOfflineLocalSecretChangeWithCompletion:(id /* block */)a0;
- (void)generateEscrowRecordReportUsingCache:(BOOL)a0 completion:(id /* block */)a1;
- (void)generateNewRecoveryKey:(id /* block */)a0;
- (id)generateRandomRecoveryKey:(id *)a0;
- (void)handleURLActionWithInfo:(id)a0;
- (void)handleURLActionWithInfo:(id)a0 completion:(id /* block */)a1;
- (BOOL)isDeviceEscrowRecordRecoverable:(id *)a0;
- (void)isRecoveryKeyAvailableWithCompletion:(id /* block */)a0;
- (BOOL)isRecoveryKeyAvailableWithError:(id *)a0;
- (void)isWalrusRecoveryKeyAvailableWithCompletion:(id /* block */)a0;
- (BOOL)isWalrusRecoveryKeyAvailableWithError:(id *)a0;
- (void)performSilentEscrowRecordRepairWithCompletion:(id /* block */)a0;
- (void)recoverAndSynchronizeWithSquirrel:(id /* block */)a0;
- (void)recoverWithSquirrel:(id /* block */)a0;
- (void)repairEDPStateWithCompletion:(id /* block */)a0;
- (void)setKeyChainSyncCompatibilityState:(unsigned long long)a0 withAltDSID:(id)a1;
- (BOOL)shouldPerformAuthenticatedRepairWithOptionForceFetch:(BOOL)a0 error:(id *)a1;
- (void)shouldPerformRepairWithOptionForceFetch:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)shouldPerformRepairWithOptionForceFetch:(BOOL)a0 error:(id *)a1;
- (void)shouldPerformSilentEscrowRecordRepairUsingCache:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)shouldPerformSilentEscrowRecordRepairUsingCache:(BOOL)a0 error:(id *)a1;
- (void)startCircleApplicationApprovalServerSkipEscrowFetches:(id /* block */)a0;
- (void)startSilentEscrowRecordRepairWithCompletion:(id /* block */)a0;
- (BOOL)updateLastSilentEscrowRecordRepairAttemptDate:(id)a0 error:(id *)a1;
- (void)validateEDPIdentitiesWithContext:(id)a0 completion:(id /* block */)a1;
- (void)verifyRecoveryKey:(id /* block */)a0;
- (BOOL)verifyRecoveryKeyObservingSystemsHaveMatchingStateWithError:(id *)a0;

@end

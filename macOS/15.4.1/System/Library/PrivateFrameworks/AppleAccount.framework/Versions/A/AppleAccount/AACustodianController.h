@class NSString, NSData;
@protocol AAAnalyticsReporting, AACustodianDaemonConnectionProviding;

@interface AACustodianController : NSObject {
    id<AACustodianDaemonConnectionProviding> _daemonConnection;
    NSString *_ownerCustodianAltDSID;
    NSData *_encryptedPRKC;
    id<AAAnalyticsReporting> _analyticsReporter;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithDaemonXPCEndpoint:(id)a0;
- (void)startHealthCheckWithCompletion:(id /* block */)a0;
- (void)fetchCustodianPasswordResetInformationWithSessionID:(id)a0 completion:(id /* block */)a1;
- (void)_retryingGenerateCustodianRecoveryCodeWithContext:(id)a0 completion:(id /* block */)a1;
- (void)_retryingValidateCustodianRecoveryCodeWithContext:(id)a0 completion:(id /* block */)a1;
- (void)availableRecoveryFactorsWithCompletion:(id /* block */)a0;
- (void)cancelCustodianRecoveryWithContext:(id)a0 completion:(id /* block */)a1;
- (BOOL)cancelCustodianRecoveryWithSessionID:(id)a0 error:(id *)a1;
- (void)displayInvitationUIWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)displayTrustedContactFlowWithModel:(id)a0 completion:(id /* block */)a1;
- (void)fetchCachedTrustedContactsWithCompletion:(id /* block */)a0;
- (void)fetchCustodianHealthStatusWithCompletion:(id /* block */)a0;
- (void)fetchCustodianRecoveryConfigurationWithCompletion:(id /* block */)a0;
- (void)fetchCustodianRecoveryKeysWithContext:(id)a0 completion:(id /* block */)a1;
- (void)fetchCustodianRecoveryKeysWithSessionID:(id)a0 completion:(id /* block */)a1;
- (void)fetchCustodianshipInfoWithCompletion:(id /* block */)a0;
- (void)fetchCustodianshipInfoWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)fetchSuggestedCustodiansForUpsellWithCompletion:(id /* block */)a0;
- (void)fetchSuggestedCustodiansWithCompletion:(id /* block */)a0;
- (void)fetchTrustedContactsWithCompletion:(id /* block */)a0;
- (void)generateCustodianRecoveryCodeWithContext:(id)a0 completion:(id /* block */)a1;
- (id)initWithDaemonConnectionProvider:(id)a0 analyticsReporter:(id)a1;
- (void)localContactsForCustodians:(id)a0 completion:(id /* block */)a1;
- (void)performTrustedContactsDataSyncWithCompletion:(id /* block */)a0;
- (void)preflightCustodianRecoveryWithCompletion:(id /* block */)a0;
- (void)pullTrustedContactsFromCloudKitWithCompletion:(id /* block */)a0;
- (void)reSendCustodianInvitationWithCustodianID:(id)a0 completion:(id /* block */)a1;
- (void)removeCustodian:(id)a0 completion:(id /* block */)a1;
- (void)removeCustodianWithContext:(id)a0 completion:(id /* block */)a1;
- (void)repairCustodians:(id)a0 completion:(id /* block */)a1;
- (void)repairCustodians:(id)a0 remove:(id)a1 completion:(id /* block */)a2;
- (void)respondToCustodianRequestWithResponse:(id)a0 completion:(id /* block */)a1;
- (void)setupCustodianshipWithContext:(id)a0 completion:(id /* block */)a1;
- (void)startCustodianRecoveryWithContext:(id)a0 completion:(id /* block */)a1;
- (void)startManateeMigrationWithCompletion:(id /* block */)a0;
- (void)stopBeingCustodian:(id)a0 completion:(id /* block */)a1;
- (void)stopBeingCustodianWithContext:(id)a0 completion:(id /* block */)a1;
- (void)validateCustodianRecoveryCodeWithContext:(id)a0 completion:(id /* block */)a1;

@end

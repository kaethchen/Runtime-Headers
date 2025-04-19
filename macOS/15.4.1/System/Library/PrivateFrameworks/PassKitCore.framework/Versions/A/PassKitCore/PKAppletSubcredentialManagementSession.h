@interface PKAppletSubcredentialManagementSession : PKDASession

+ (id)createSessionWithDelegate:(id)a0;

- (void)accountAttestationRequestForCredential:(id)a0 completion:(id /* block */)a1;
- (void)accountAttestationRequestForManufacturer:(id)a0 completion:(id /* block */)a1;
- (void)commitUpgradeForKeyWithCredential:(id)a0 versionType:(unsigned long long)a1 version:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)credentialDidActivateWithCredential:(id)a0 completion:(id /* block */)a1;
- (void)deleteCredential:(id)a0 completionHandler:(id /* block */)a1;
- (void)hasUpgradeAvailableForKeyWithCredential:(id)a0 versionType:(unsigned long long)a1 versions:(id)a2 completion:(id /* block */)a3;
- (void)immobilizerTokensCountForCredential:(id)a0 completion:(id /* block */)a1;
- (void)listCredentialsWithCompletion:(id /* block */)a0;
- (void)listReceivedSharingInvitationsWithCompletion:(id /* block */)a0;
- (void)listSharingInvitationsForKeyIdentifier:(id)a0 withCompletion:(id /* block */)a1;
- (void)preWarmForManufacturer:(id)a0 completion:(id /* block */)a1;
- (void)removeSharedCredentialsWithIdentifiers:(id)a0 credential:(id)a1 completion:(id /* block */)a2;
- (void)rescindInvitations:(id)a0 onCredential:(id)a1 withCompletion:(id /* block */)a2;
- (void)revertUpgradeForKeyWithCredential:(id)a0 versionType:(unsigned long long)a1 version:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)revokeSharedCredentials:(id)a0 onCredential:(id)a1 withCompletion:(id /* block */)a2;
- (void)revokeSharesWithGroupIdentifiers:(id)a0 shouldCascade:(BOOL)a1 credential:(id)a2 completion:(id /* block */)a3;
- (void)signData:(id)a0 auth:(id)a1 bundleIdentifier:(id)a2 nonce:(id)a3 credential:(id)a4 completion:(id /* block */)a5;
- (id)trackSubcredential:(id)a0 deviceData:(id)a1 attestation:(id)a2;
- (id)trackSubcredential:(id)a0 encryptedContainer:(id)a1 withReceipt:(id)a2;
- (void)updateCredentialConfigurationForCredential:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;
- (void)upgradeKeyWithCredential:(id)a0 versionType:(unsigned long long)a1 version:(unsigned long long)a2 upgradeInformation:(id)a3 completion:(id /* block */)a4;

@end

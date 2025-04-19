@class MCCSecretAgentConnection, NSXPCListener;

@interface MCCSecretAgentController : NSObject <MCCSecretAgentProtocol> {
    MCCSecretAgentConnection *_agentConnection;
    NSXPCListener *_callbackListener;
}

- (id)init;
- (void).cxx_destruct;
- (void)clearAllUserOverridesWithTimestamp:(double)a0 completion:(id /* block */)a1;
- (void)getBlackPearlVersionWithCompletion:(id /* block */)a0;
- (void)isPersonalDomain:(id)a0 completion:(id /* block */)a1;
- (void)predictCommerceEmailWithContext:(id)a0 completion:(id /* block */)a1;
- (void)syncRecategorizationRules:(id)a0 completion:(id /* block */)a1;
- (void)isCategorizationSupportedForLocale:(id)a0 completion:(id /* block */)a1;
- (void)syncNewOldCategoryTimestamps:(id)a0;
- (void)listCertificatesWithCompletion:(id /* block */)a0;
- (void)fetchSigningAndEncryptingStatusForEmailAddress:(id)a0 completion:(id /* block */)a1;
- (void)fetchSigningAndEncrytionMessagesStatusForEmailAddress:(id)a0 completion:(id /* block */)a1;
- (void)generateCertificateWithContext:(id)a0 completion:(id /* block */)a1;
- (void)getIABCategoryID:(id)a0 completion:(id /* block */)a1;
- (void)getPKCategoryForDomain:(id)a0 completion:(id /* block */)a1;
- (id)initWithAgentXPCEndpoint:(id)a0;
- (id)initWithCallbackListener:(id)a0;
- (void)invokeModelDownloadWithCompletion:(id /* block */)a0;
- (void)isModelReadyWithCompletion:(id /* block */)a0;
- (void)listCertificatesForEmail:(id)a0 completion:(id /* block */)a1;
- (void)notifyFullSyncCategoryOverrides:(id)a0;
- (void)notifyNewOldCategoryChange:(id)a0 timestamp:(double)a1;
- (void)notifyWebRule:(id)a0;
- (void)pingWithcompletion:(id /* block */)a0;
- (void)refreshCertificateWithContext:(id)a0 certId:(id)a1 completion:(id /* block */)a2;
- (void)registerCategoryRulesCallback;
- (void)registerCategoryRulesCallbackListener:(id)a0 completion:(id /* block */)a1;
- (void)setEncryptIsEnabled:(BOOL)a0 forEmailAddress:(id)a1 completion:(id /* block */)a2;
- (void)setSignIsEnabled:(BOOL)a0 forEmailAddress:(id)a1 completion:(id /* block */)a2;
- (void)setSigningAndEncrytingStatusTo:(BOOL)a0 forEmailAddress:(id)a1 completion:(id /* block */)a2;
- (void)updateCertificateDefaultsForEmailAddress:(id)a0 certInfo:(id)a1 completion:(id /* block */)a2;

@end

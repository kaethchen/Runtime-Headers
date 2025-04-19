@class STSHelperLibrary, STSXPCClientNotificationListener, NFSecureTransactionServicesHandoverHybridSession, STSCredential;
@protocol STSSessionNotificationTesterDelegate;

@interface ISO18013HybridHandler : STSTransactionHandler <STSXPCClientNotificationListenerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _handoverSessionMutex;
    STSXPCClientNotificationListener *_stsNotificationListener;
    STSHelperLibrary *_stsHelper;
    id<STSSessionNotificationTesterDelegate> _notificationTesterDelegate;
    NFSecureTransactionServicesHandoverHybridSession *_handoverSession;
    STSCredential *_releasedCredential;
    STSCredential *_jpkiCredential;
    unsigned long long _transactionState;
    unsigned long long _startTransactionOption;
}

- (void).cxx_destruct;
- (void)xpcInterrupted;
- (void)xpcInvalidated;
- (id)stopTransaction;
- (id)setActiveCredential:(id)a0;
- (id)setActiveCredentials:(id)a0;
- (id)startTransactionWithAuthorization:(id)a0 options:(unsigned long long)a1;
- (void)tearDownWithCompletion:(id /* block */)a0;
- (BOOL)activateChildSessionOnSetActiveCredential;
- (id)activateWithHandoffToken:(id)a0;
- (void)alternativeCarrierConnectedWithStatus:(unsigned long long)a0;
- (void)alternativeCarrierDisconnectedWithStatus:(unsigned long long)a0;
- (void)alternativeCarrierReceived:(id)a0 dataPending:(BOOL)a1;
- (void)notificationClientConnected;
- (void)processISO18013CredentialProposals:(id)a0 readerAuthInfo:(id)a1;
- (unsigned char)supportedCredentialType;
- (void)transactionEndedWithIdentifier:(id)a0 error:(id)a1;
- (void)transactionStarted:(unsigned long long)a0;

@end

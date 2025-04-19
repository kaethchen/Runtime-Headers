@class NFSession, STSXPCClientNotificationListener, STSHelperLibrary, STSCredential;
@protocol STSSessionNotificationTesterDelegate;

@interface ISO18013Handler : STSTransactionHandler <STSXPCClientNotificationListenerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _handoverSessionMutex;
    STSXPCClientNotificationListener *_stsNotificationListener;
    STSHelperLibrary *_stsHelper;
    id<STSSessionNotificationTesterDelegate> _notificationTesterDelegate;
    NFSession *_handoverSession;
    unsigned long long _transactionState;
    STSCredential *_releasedCredential;
    unsigned long long _startTransactionOption;
}

- (void).cxx_destruct;
- (void)xpcInterrupted;
- (void)xpcInvalidated;
- (id)stopTransaction;
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

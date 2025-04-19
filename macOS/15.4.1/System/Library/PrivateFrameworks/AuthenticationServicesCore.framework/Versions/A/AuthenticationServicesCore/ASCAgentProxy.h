@class NSString, NSObject, NSXPCConnection;
@protocol OS_os_activity;

@interface ASCAgentProxy : NSObject <ASCAgentProtocol> {
    NSXPCConnection *_connection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _connectionLock;
    NSObject<OS_os_activity> *_activity;
    id /* block */ _failureHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)deleteAllPasskeysForRelyingParty:(id)a0 completionHandler:(id /* block */)a1;
- (void)getPasskeysDataForRelyingParty:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)preflightCanCreateICloudKeychainPasskeyWithCompletionHandler:(id /* block */)a0;
- (id)_reconnectIfNecessary;
- (void)cancelCurrentRequest;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)getArePasskeysDisallowedForRelyingParty:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)getCanCurrentProcessAccessPasskeysForRelyingParty:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)performAuthorizationRequestsForContext:(id)a0 withClearanceHandler:(id /* block */)a1;
- (void)performAutoFillAuthorizationRequestsForContext:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)performSilentAuthorizationRequestsForContext:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_setUpConnection:(id)a0;
- (void)userSelectedLoginChoice:(id)a0 authenticatedContext:(id)a1 completionHandler:(id /* block */)a2;
- (void)beginAuthorizationForApplicationIdentifier:(id)a0 fromEndpoint:(id)a1;
- (void)beginCABLEPresentationForOperationUUID:(id)a0 viewServiceEndpoint:(id)a1;
- (void)browserPasskeysForRelyingParty:(id)a0 completionHandler:(id /* block */)a1;
- (void)deletePasskeyForRelyingParty:(id)a0 withCredentialID:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithEndpoint:(id)a0 activity:(id)a1 failureHandler:(id /* block */)a2;
- (void)openCredentialProviderAppSettingsWithCompletionHandler:(id /* block */)a0;
- (void)openVerificationCodeAppSettingsWithCompletionHandler:(id /* block */)a0;
- (void)renamePasskeyWithCredentialID:(id)a0 newName:(id)a1 completionHandler:(id /* block */)a2;
- (void)requestCompletedWithCredential:(id)a0 error:(id)a1;
- (void)requestToTurnOnCredentialProviderExtensionWithCompletionHandler:(id /* block */)a0;
- (id)_savedAccountContextFromSafariApplicationWithRequestContext:(id)a0;
- (void)clearAllPlatformPublicKeyCredentialsWithCompletionHandler:(id /* block */)a0;
- (void)getShouldUseAlternateCredentialStoreWithCompletionHandler:(id /* block */)a0;
- (id)initWithFailureHandler:(id /* block */)a0;
- (void)openCABLEURL:(id)a0 fromSourceApplication:(id)a1 withCompletionHandler:(id /* block */)a2;

@end

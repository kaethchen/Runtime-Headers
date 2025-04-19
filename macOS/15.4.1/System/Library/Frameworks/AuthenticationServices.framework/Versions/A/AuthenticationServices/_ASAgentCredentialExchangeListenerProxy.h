@class NSObject, NSXPCConnection;
@protocol OS_os_activity;

@interface _ASAgentCredentialExchangeListenerProxy : NSObject <ASAgentCredentialExchangeListenerInterface> {
    NSXPCConnection *_connection;
    NSObject<OS_os_activity> *_activity;
}

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (id)_reconnectIfNecessary;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)_setUpConnection:(id)a0;
- (void)continueExportWithCredentials:(id)a0 completionHandler:(id /* block */)a1;
- (void)getExportedCredentialData:(id /* block */)a0;
- (void)importCredentialsWithToken:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestExportWithCompletionHandler:(id /* block */)a0;
- (void)setTokenForImport:(id)a0;

@end

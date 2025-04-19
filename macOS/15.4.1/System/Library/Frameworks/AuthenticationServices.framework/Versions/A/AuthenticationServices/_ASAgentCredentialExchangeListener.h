@class NSXPCListener, NSString, NSXPCConnection, NSData, NSError, NSUUID, NSObject;
@protocol OS_os_transaction;

@interface _ASAgentCredentialExchangeListener : NSObject <NSXPCListenerDelegate, ASAgentCredentialExchangeListenerInterface, ASCAuthorizationPresenterCredentialExchangeDelegate> {
    NSXPCListener *_listener;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _internalLock;
    NSXPCConnection *_connection;
    NSData *_exportedCredentialData;
    NSString *_importerBundleID;
    NSUUID *_importerToken;
    NSObject<OS_os_transaction> *_transaction;
    id /* block */ _exportDataFetchCompletionHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)cancel;
- (void)_requestExportWithConnection:(NSXPCConnection *)a0 credentialProviderBundleIdentifier:(NSString *)a1 windowSceneIdentifier:(NSString *)a2 exportedCredentialData:(NSData *)a3 completionHandler:(void (^)(NSString *, NSError *))a4;
- (BOOL)_atLeastOneAppAvailableForImportForConnection:(id)a0;
- (void)_showErrorAlert:(unsigned long long)a0;
- (void)continueExportWithCredentials:(id)a0 completionHandler:(id /* block */)a1;
- (void)getExportedCredentialData:(id /* block */)a0;
- (void)importCredentialsWithToken:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestExportWithCompletionHandler:(id /* block */)a0;
- (void)setTokenForImport:(id)a0;

@end

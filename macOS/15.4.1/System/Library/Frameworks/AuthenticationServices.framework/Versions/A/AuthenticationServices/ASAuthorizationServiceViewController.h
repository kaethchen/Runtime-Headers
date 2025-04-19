@class NSXPCListener, NSString, ASExportViewController, ASCAgentProxy, PMAuthorizationViewController, NSObject, _ASAgentCredentialExchangeListenerProxy;
@protocol OS_os_activity, ASCAuthorizationPresenterDelegate, OS_dispatch_queue, ASCAuthorizationPresenterHostProtocol;

@interface ASAuthorizationServiceViewController : NSServiceViewController <ASExportViewControllerDelegate, ASCAuthorizationPresenterHostProtocol, ASAuthorizationViewControllerDelegate, NSXPCListenerDelegate, ASCViewServiceProtocol, AuthenticationServicesHelperProtocol> {
    ASCAgentProxy *_agentProxy;
    PMAuthorizationViewController *_authorizationViewController;
    id<ASCAuthorizationPresenterHostProtocol> _presenterProxy;
    NSXPCListener *_daemonListener;
    id /* block */ _authorizationCompletionHandler;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_os_activity> *_authorizationActivity;
    _ASAgentCredentialExchangeListenerProxy *_credentialExchangeListenerProxy;
    ASExportViewController *_exportViewController;
    id /* block */ _exportCompletionHandler;
}

@property (weak, nonatomic) id<ASCAuthorizationPresenterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)exportedObject;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)viewControllerDidCancel:(id)a0;
- (id)_agentProxy;
- (void)_handleAgentProxyFailure;
- (id)_newDaemonListener;
- (void)_presentExportFlowWithData:(id)a0 exporterBundleID:(id)a1;
- (void)authorizationRequestFinishedWithCredential:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (void)authorizationRequestInitiatedWithLoginChoice:(id)a0 authenticatedContext:(id)a1 completionHandler:(id /* block */)a2;
- (void)authorizationViewController:(id)a0 didCompleteWithCredential:(id)a1 error:(id)a2;
- (void)authorizationViewController:(id)a0 didRequestCredentialForLoginChoice:(id)a1 authenticatedContext:(id)a2 completionHandler:(id /* block */)a3;
- (void)authorizationViewController:(id)a0 validateUserEnteredPIN:(id)a1 completionHandler:(id /* block */)a2;
- (void)beginAuthorizationOnEndpoint:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)beginExportFlowWithData:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)cableClientWillAuthenticate;
- (void)cableClientWillConnect;
- (void)cancelExportFlow;
- (void)getExportedCredentialData:(id /* block */)a0;
- (void)presentAuthorizationWithContext:(id)a0;
- (void)presentError:(id)a0 forService:(id)a1 completionHandler:(id /* block */)a2;
- (void)presentNewPINEntryInterfaceWithMinLength:(unsigned long long)a0;
- (void)presentPINEntryInterface;
- (void)presentSheetForNearbyDevice:(id)a0 completionHandler:(id /* block */)a1;
- (void)setTokenForImport:(id)a0;
- (void)updateInterfaceForUserVisibleError:(id)a0;
- (void)updateInterfaceWithLoginChoices:(id)a0;
- (void)userDidSelectImportingDestinationWithBundleIdentfier:(id)a0 exportViewController:(id)a1;
- (void)validateUserEnteredPIN:(id)a0 completionHandler:(id /* block */)a1;

@end

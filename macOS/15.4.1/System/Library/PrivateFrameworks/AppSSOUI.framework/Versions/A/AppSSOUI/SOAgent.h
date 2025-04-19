@class SORemoteExtensionViewController, SOAgentWindowController, NSString, SOAuthorizationRequestParameters, NSXPCConnection, SOExtension, NSObject, NSXPCListener, POAgentAuthenticationProcess;

@interface SOAgent : NSObject <NSXPCListenerDelegate, SOServiceProtocol, SOExtensionDelegate, SORemoteExtensionServiceProtocol, SOUIAuthorizationViewControllerDelegate> {
    id /* block */ _authorizationCompletion;
    SOExtension *_extension;
    SOAgentWindowController *_agentWindow;
    SORemoteExtensionViewController *_extensionViewController;
    NSString *_requestQueueIdentifier;
    NSString *_requestThatPresentedViewController;
    SOAuthorizationRequestParameters *_requestParameters;
    NSXPCListener *_extensionXpcListener;
    NSXPCConnection *_xpcExtensionConnection;
    NSXPCConnection *_xpcConnection;
}

@property (copy) id /* block */ authenticationCompletion;
@property (retain) NSObject *authenticationObserver;
@property (retain) POAgentAuthenticationProcess *pssoAgentAuthenticationProcess;
@property (copy) id /* block */ invalidationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionQueue;
+ (id /* block */)_processRequestBlock;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithXPCConnection:(id)a0;
- (void)connectionInvalidated;
- (void)cancelAuthorization:(id)a0 completion:(id /* block */)a1;
- (void)finishAuthorization:(id)a0 completion:(id /* block */)a1;
- (BOOL)_doAKshouldProcessURL:(id)a0;
- (void)beginAuthorizationWithRequestParameters:(id)a0 completion:(id /* block */)a1;
- (void)configurationWithCompletion:(id /* block */)a0;
- (void)debugHintsWithCompletion:(id /* block */)a0;
- (void)getAuthorizationHintsWithURL:(id)a0 responseCode:(long long)a1 completion:(id /* block */)a2;
- (void)isConfigurationActiveForExtensionIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)isExtensionProcessWithAuditToken:(struct { unsigned int x0[8]; })a0 completion:(id /* block */)a1;
- (void)performAuthorizationWithRequestParameters:(id)a0 completion:(id /* block */)a1;
- (void)profilesWithExtensionBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)realmsWithCompletion:(id /* block */)a0;
- (void)_extensionCleanup;
- (void)authorization:(id)a0 didCompleteWithCredential:(id)a1 error:(id)a2;
- (void)beginAuthorizationWithCompletion:(id /* block */)a0;
- (void)presentAuthorizationViewControllerWithHints:(id)a0 requestIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)requestReauthenticationWithCompletion:(id /* block */)a0;
- (void)viewControllerDidCancel:(id)a0;
- (void)_dismiss;
- (void)_cancelAuthorization:(id)a0;
- (void)_doGetAuthorizationHintsWithURL:(id)a0 responseCode:(long long)a1 completion:(id /* block */)a2;
- (void)_doPerformAuthorizationWithRequestParameters:(id)a0 profile:(id)a1 completion:(id /* block */)a2;
- (void)_performAuthorizationWithRequestParameters:(id)a0 completion:(id /* block */)a1;
- (void)_updateCallerPropertiesFromAuditTokenInParameters:(id)a0;
- (void)_updateUsageOfInternalExtensionsInParameters:(id)a0;
- (BOOL)_validateExtensionTeamIdentifierFromAuditToken:(struct { unsigned int x0[8]; })a0 requestedTeamIdentifier:(id)a1;
- (void)agentWindowDidClose;

@end

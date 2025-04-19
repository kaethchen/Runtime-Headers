@class NSXPCListener, NSString, NSHashTable, _TtC26AuthenticationServicesCore30ASPasswordSignInEventCollector;
@protocol ASPublicKeyCredentialManagerInterface;

@interface ASAgentAutoFillListener : NSObject <NSXPCListenerDelegate, WBSAuthenticationServicesAgentInterface, ASPasskeyAutoFillManagerDelegate> {
    NSXPCListener *_listener;
    id<ASPublicKeyCredentialManagerInterface> _publicKeyCredentialManager;
    NSHashTable *_weakActiveConnections;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _internalLock;
    _TtC26AuthenticationServicesCore30ASPasswordSignInEventCollector *_signInEventCollector;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)isOrigin:(id)a0 relatedToRelyingPartyIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)completeAssertionWithExternalPasskeyForApplicationIdentifier:(id)a0 relyingPartyIdentifier:(id)a1 authenticatorData:(id)a2 signature:(id)a3 userHandle:(id)a4 credentialID:(id)a5;
- (void)completeAssertionWithExternalPasskeyForWebFrameIdentifier:(id)a0 relyingPartyIdentifier:(id)a1 authenticatorData:(id)a2 signature:(id)a3 userHandle:(id)a4 credentialID:(id)a5;
- (void)didFillCredentialForUsername:(id)a0 forHost:(id)a1 fromProviderWithBundleIdentifier:(id)a2 inAppWithBundleIdentifier:(id)a3 listenerEndpoint:(id)a4;
- (void)didFillCredentialForUsername:(id)a0 forURL:(id)a1 fromProviderWithBundleIdentifier:(id)a2 inBrowserWithBundleIdentifier:(id)a3 listenerEndpoint:(id)a4;
- (void)getExternalPasskeyRequestForApplicationIdentifier:(id)a0 relyingPartyIdentifier:(id)a1 credentialID:(id)a2 completionHandler:(id /* block */)a3;
- (void)getExternalPasskeyRequestForWebFrameIdentifier:(id)a0 relyingPartyIdentifier:(id)a1 credentialID:(id)a2 completionHandler:(id /* block */)a3;
- (void)getIsPasskeyAssertionRequestRunningForWebFrameIdentifier:(id)a0 orApplicationIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)getPasskeyAssertionRequestParametersForApplicationIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)getPasskeyAssertionRequestParametersForCABLEWithCompletionHandler:(id /* block */)a0;
- (void)getPasskeyAssertionRequestParametersForWebFrameIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)getPasskeysForRunningAssertionWithApplicationIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)getPasskeysForRunningAssertionWithWebFrameIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)newPasskeysAvailableForApplicationIdentifier:(id)a0;
- (void)test_createPasskeyWithUserName:(id)a0 displayName:(id)a1 relyingPartyIdentifier:(id)a2 userHandle:(id)a3 completionHandler:(id /* block */)a4;
- (void)userSelectedAutoFillPasskey:(id)a0 authenticatedLAContext:(id)a1 savedAccountContext:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithPublicKeyCredentialManager:(id)a0 signInEventCollector:(id)a1;

@end

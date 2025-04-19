@class NSString, NSXPCConnection;
@protocol ASCAuthorizationPresenterDelegate;

@interface ASCAuthorizationPresenter : NSObject <NSXPCListenerDelegate, ASCAuthorizationPresenterHostProtocol> {
    NSXPCConnection *_currentConnection;
}

@property (readonly, nonatomic) struct { unsigned int x0[8]; } auditToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ASCAuthorizationPresenterDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithEndpoint:(id)a0;
- (id)_proxy;
- (void)authorizationRequestFinishedWithCredential:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (void)authorizationRequestInitiatedWithLoginChoice:(id)a0 authenticatedContext:(id)a1 completionHandler:(id /* block */)a2;
- (void)cableClientWillAuthenticate;
- (void)cableClientWillConnect;
- (void)presentAuthorizationWithContext:(id)a0;
- (void)presentError:(id)a0 forService:(id)a1 completionHandler:(id /* block */)a2;
- (void)presentNewPINEntryInterfaceWithMinLength:(unsigned long long)a0;
- (void)presentPINEntryInterface;
- (void)updateInterfaceForUserVisibleError:(id)a0;
- (void)updateInterfaceWithLoginChoices:(id)a0;
- (void)validateUserEnteredPIN:(id)a0 completionHandler:(id /* block */)a1;

@end

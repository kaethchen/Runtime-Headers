@class NSString, ASWebAuthenticationSessionRequestClient, NSMutableSet, ASWebAuthenticationSessionLaunchAgentProxy, NSObject;
@protocol OS_dispatch_queue;

@interface ASWebAuthenticationSessionController : NSObject <_ASWebAuthenticationSessionRequestHandling, ASWebAuthenticationSessionRequestDelegate> {
    NSObject<OS_dispatch_queue> *_internalQueue;
    ASWebAuthenticationSessionLaunchAgentProxy *_launchAgentProxy;
    ASWebAuthenticationSessionRequestClient *_client;
    NSMutableSet *_requests;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_fulfillRequest:(id)a0 withCallbackURL:(id)a1 error:(id)a2;
- (void)authenticationSessionRequest:(id)a0 didCancelWithError:(id)a1;
- (void)authenticationSessionRequest:(id)a0 didCompleteWithCallbackURL:(id)a1;
- (void)beginAuthenticationSessionRequest:(id)a0;
- (void)cancelAuthenticationSessionRequest:(id)a0;
- (void)disconnectFromAuthenticationSessionRequestServer;
- (void)ensureConnection:(id /* block */)a0;
- (void)noteNewRequestsAreAvailable;

@end

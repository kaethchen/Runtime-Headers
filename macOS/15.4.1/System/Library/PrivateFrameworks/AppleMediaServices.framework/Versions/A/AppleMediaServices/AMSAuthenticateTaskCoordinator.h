@interface AMSAuthenticateTaskCoordinator : NSObject

+ (id)internalQueue;
+ (id)promiseStore;

- (void)_addToStoreRequest:(id)a0 promise:(id)a1;
- (id)_authenticateTaskForItem:(id)a0;
- (id)_authenticateTaskForItem:(id)a0 authenticationResults:(id)a1;
- (id)_enqueueItem:(id)a0 handleAuthenticationWithBlock:(id /* block */)a1;
- (id)_handleAuthenticateRequestWithItem:(id)a0 authenticationResults:(id)a1;
- (id)_promiseStorePairForRequest:(id)a0;
- (id)_promiseWithResultsForRequest:(id)a0;
- (void)_removeFromPromiseStore:(id)a0;
- (id)enqueueAuthenticationRequest:(id)a0 handleAuthenticationWithBlock:(id /* block */)a1;
- (id)handleRequest:(id)a0;
- (id)handleRequestDictionary:(id)a0;

@end

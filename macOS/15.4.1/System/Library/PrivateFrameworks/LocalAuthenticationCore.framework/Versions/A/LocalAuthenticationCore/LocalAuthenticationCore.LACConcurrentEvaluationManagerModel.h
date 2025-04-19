@interface LocalAuthenticationCore.LACConcurrentEvaluationManagerModel : NSObject <LACConcurrentEvaluationManaging> {
    void /* unknown type, empty encoding */ clientInfoProvider;
    void /* unknown type, empty encoding */ helper;
    void /* unknown type, empty encoding */ replyQueue;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ specializedObservers;
    void /* unknown type, empty encoding */ connectedUIInstances;
    void /* unknown type, empty encoding */ activeRequests;
    void /* unknown type, empty encoding */ stashedRequests;
}

- (id)init;
- (void).cxx_destruct;
- (void)addObserver:(id)a0 forRequest:(id)a1;
- (void)cancelRequestsForContextID:(id)a0;
- (void)connectIdleUI:(id)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)connectionInvalidatedForIdentifier:(id)a0;
- (void)idleUIGotFocus:(id)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)registerRequest:(id)a0;
- (void)removeObserver:(id)a0 forRequest:(id)a1;
- (BOOL)restartRequestsForContextID:(id)a0;
- (void)stashRequest:(id)a0 acceptsIdleUI:(BOOL)a1;
- (void)unregisterRequest:(id)a0;

@end

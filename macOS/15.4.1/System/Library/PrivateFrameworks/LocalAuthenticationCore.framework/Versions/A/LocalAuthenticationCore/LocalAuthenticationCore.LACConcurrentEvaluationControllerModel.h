@interface LocalAuthenticationCore.LACConcurrentEvaluationControllerModel : NSObject <LACConcurrentEvaluationManagerObserver, LACConcurrentEvaluationControlling> {
    void /* unknown type, empty encoding */ clientInfoProvider;
    void /* unknown type, empty encoding */ helper;
    void /* unknown type, empty encoding */ manager;
    void /* unknown type, empty encoding */ idleUIListenerProvider;
    void /* unknown type, empty encoding */ replyQueue;
    void /* unknown type, empty encoding */ stashedRequests;
}

- (id)init;
- (void).cxx_destruct;
- (void)systemDidCancelRequest:(id)a0 manager:(id)a1;
- (BOOL)canProcessRequest:(id)a0;
- (void)postProcessRequest:(id)a0 result:(id)a1 completion:(id /* block */)a2;
- (void)processRequest:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;
- (void)systemReadyForRequest:(id)a0 manager:(id)a1;

@end

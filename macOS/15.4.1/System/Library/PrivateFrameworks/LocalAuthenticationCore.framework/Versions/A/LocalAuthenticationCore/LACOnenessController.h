@class NSObject;
@protocol OS_dispatch_queue, LACOnenessSessionMonitoring, LACOnenessAuthenticating, LACOnenessControlling, LACUserInterfacePresenting;

@interface LACOnenessController : NSObject <LACOnenessControlling, LACEvaluationRequestProcessor, LACDomainStateProviding> {
    id<LACOnenessAuthenticating> _authenticator;
    id<LACOnenessControlling> _model;
    id<LACOnenessSessionMonitoring> _sessionMonitor;
    id<LACUserInterfacePresenting> _uiPresenter;
    NSObject<OS_dispatch_queue> *_replyQueue;
}

@property (nonatomic, readonly) BOOL isSessionActive;

- (void).cxx_destruct;
- (id)model;
- (id)authenticator;
- (id)replyQueue;
- (id)sessionMonitor;
- (void)cancelAllRequests;
- (BOOL)canProcessRequest:(id)a0;
- (void)cancelRequestsForContextID:(id)a0;
- (void)domainStateForRequest:(id)a0 completion:(id /* block */)a1;
- (id)initWithSessionMonitor:(id)a0 authenticator:(id)a1 uiPresenter:(id)a2 replyQueue:(id)a3;
- (id)makeModel;
- (void)postProcessRequest:(id)a0 result:(id)a1 completion:(id /* block */)a2;
- (void)processRequest:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;
- (id)uiPresenter;

@end

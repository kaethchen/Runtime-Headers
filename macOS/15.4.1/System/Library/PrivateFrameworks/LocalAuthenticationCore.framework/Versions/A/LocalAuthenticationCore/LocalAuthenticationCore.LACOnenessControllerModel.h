@interface LocalAuthenticationCore.LACOnenessControllerModel : NSObject <LACOnenessSessionMonitorObserver, LACOnenessControlling> {
    void /* unknown type, empty encoding */ authenticator;
    void /* unknown type, empty encoding */ sessionMonitor;
    void /* unknown type, empty encoding */ uiPresenter;
    void /* unknown type, empty encoding */ replyQueue;
    void /* unknown type, empty encoding */ pendingRequests;
}

@property (nonatomic, readonly) BOOL isSessionActive;

- (id)init;
- (void).cxx_destruct;
- (void)cancelAllRequests;
- (void)onenessSessionMonitorDidUpdate:(id)a0;
- (BOOL)canProcessRequest:(id)a0;
- (void)cancelRequestsForContextID:(id)a0;
- (void)domainStateForRequest:(id)a0 completion:(id /* block */)a1;
- (void)postProcessRequest:(id)a0 result:(id)a1 completion:(id /* block */)a2;
- (void)processRequest:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;

@end

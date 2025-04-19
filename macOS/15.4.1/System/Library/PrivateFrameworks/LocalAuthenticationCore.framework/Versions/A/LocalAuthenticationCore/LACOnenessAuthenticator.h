@class NSObject;
@protocol LACOnenessAuthenticationProviding, LACOnenessAuthenticating, OS_dispatch_queue;

@interface LACOnenessAuthenticator : NSObject <LACOnenessAuthenticating, LACDomainStateProviding> {
    id<LACOnenessAuthenticationProviding> _authenticationProvider;
    id<LACOnenessAuthenticating> _model;
    NSObject<OS_dispatch_queue> *_replyQueue;
}

@property (nonatomic, readonly) BOOL isAvailable;

- (void).cxx_destruct;
- (id)model;
- (id)replyQueue;
- (id)authenticationProvider;
- (void)cancelAuthenticationForRequest:(id)a0;
- (void)authenticateRequest:(id)a0 completion:(id /* block */)a1;
- (void)domainStateForRequest:(id)a0 completion:(id /* block */)a1;
- (id)initWithClientInfoProvider:(id)a0 replyQueue:(id)a1;
- (id)makeModelWithClientInfoProvider:(id)a0;

@end

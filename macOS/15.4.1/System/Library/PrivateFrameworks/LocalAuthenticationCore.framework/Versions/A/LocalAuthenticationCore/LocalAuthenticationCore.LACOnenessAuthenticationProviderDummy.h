@interface LocalAuthenticationCore.LACOnenessAuthenticationProviderDummy : NSObject <LACOnenessAuthenticationProviding> {
    void /* unknown type, empty encoding */ replyQueue;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, readonly) BOOL isAvailable;

- (id)init;
- (void).cxx_destruct;
- (id)authenticateClient:(id)a0 withAcmContext:(id)a1;
- (void)cancelAuthenticationWithID:(id)a0;
- (void)domainStateForRequest:(id)a0 completion:(id /* block */)a1;
- (id)initWithReplyQueue:(id)a0;

@end

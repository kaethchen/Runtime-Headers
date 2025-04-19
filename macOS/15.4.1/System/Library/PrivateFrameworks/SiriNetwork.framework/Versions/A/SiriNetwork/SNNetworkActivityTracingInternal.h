@interface SNNetworkActivityTracingInternal : NSObject {
    void /* unknown type, empty encoding */ networkActivityTracing;
}

@property (class, nonatomic, readonly) SNNetworkActivityTracingInternal *shared;

- (id)init;
- (void).cxx_destruct;
- (void)activateWithLabel:(long long)a0 completion:(id /* block */)a1;
- (void)currentNetworkActivityToken:(id /* block */)a0;
- (void)startWithLabel:(long long)a0 activate:(BOOL)a1 completion:(id /* block */)a2;
- (void)stopWithLabel:(long long)a0 reason:(long long)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)tracingCancelWithCompletion:(id /* block */)a0;

@end

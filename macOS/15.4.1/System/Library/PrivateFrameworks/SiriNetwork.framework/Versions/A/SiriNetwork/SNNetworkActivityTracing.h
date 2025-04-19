@class SNNetworkActivityTracingInternal;

@interface SNNetworkActivityTracing : NSObject

@property (retain, nonatomic) SNNetworkActivityTracingInternal *underlyingNetworkActivityTracingInternal;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)currentNetworkActivityTokenWithCompletion:(id /* block */)a0;
- (void)networkActivityActivate:(long long)a0 completion:(id /* block */)a1;
- (void)networkActivityStart:(long long)a0 activate:(BOOL)a1 completion:(id /* block */)a2;
- (void)networkActivityStop:(long long)a0 withReason:(long long)a1 andError:(id)a2 completion:(id /* block */)a3;
- (void)networkActivityTracingCancel:(id /* block */)a0;

@end

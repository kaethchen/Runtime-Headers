@interface TVISReachabilityMonitor : NSObject {
    id /* block */ _reachableStateBlock;
    struct __SCNetworkReachability { } *_reachabilityRef;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)stop;
- (BOOL)isReachable;
- (void)updateReachability;
- (BOOL)startOnQueue:(id)a0 withBlock:(id /* block */)a1;

@end

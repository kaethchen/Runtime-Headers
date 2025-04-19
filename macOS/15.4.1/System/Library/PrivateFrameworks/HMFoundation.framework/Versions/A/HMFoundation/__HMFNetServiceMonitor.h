@class HMFNetService;

@interface __HMFNetServiceMonitor : HMFNetMonitor

@property (readonly) HMFNetService *service;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithNetService:(id)a0;
- (id)logIdentifier;
- (id)initWithNetAddress:(id)a0;
- (id)netAddress;
- (unsigned long long)reachabilityPath;

@end

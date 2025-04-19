@class NSString, CDPContext;

@interface CDPWalrusStateController : NSObject <CDPWalrusStatusProvider> {
    CDPContext *_context;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (unsigned long long)walrusStatus:(id *)a0;
- (id)_makeAnalyticsEvent:(unsigned long long)a0 state:(id)a1 error:(id)a2;
- (void)_startObservingWalrusStateChangeNotification;
- (void)broadcastWalrusStateChange;
- (id)combinedWalrusStatus:(id *)a0;
- (void)combinedWalrusStatusWithCompletion:(id /* block */)a0;
- (void)pcsKeysForServices:(id)a0 completion:(id /* block */)a1;
- (void)repairWalrusStatusWithCompletion:(id /* block */)a0;
- (BOOL)shouldOpenGate;
- (void)updateWalrusStatus:(unsigned long long)a0 authenticatedContext:(id)a1 completion:(id /* block */)a2;
- (void)walrusStatusWithCompletion:(id /* block */)a0;

@end

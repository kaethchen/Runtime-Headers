@class RTDefaultsManager;

@interface RTWalletManager : RTService

@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (nonatomic) double maximumTransactionDistance;

- (id)init;
- (void).cxx_destruct;
- (void)_registerForNotifications;
- (void)_setup;
- (void)_unregisterForNotifications;
- (void)_registerPassUseCallbacks;
- (void)_registerPaymentUseCallbacks;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)_unregisterPassUseCallbacks;
- (void)_unregisterPaymentUseCallbacks;
- (id)initWithDefaultsManager:(id)a0;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)onDefaultsUpdate:(id)a0;
- (void)updateDoubleForKey:(id)a0 handler:(id /* block */)a1;

@end

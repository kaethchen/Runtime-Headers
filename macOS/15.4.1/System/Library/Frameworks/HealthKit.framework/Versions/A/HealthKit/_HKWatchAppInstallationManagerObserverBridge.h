@class HKObserverBridgeHandle;

@interface _HKWatchAppInstallationManagerObserverBridge : NSObject <HKWatchAppInstallationManagerObserver>

@property (readonly, nonatomic) HKObserverBridgeHandle *handle;

- (void).cxx_destruct;
- (id)initWithHandle:(id)a0;
- (void)watchAppInstallationManagerDidObserveChange:(id)a0;

@end

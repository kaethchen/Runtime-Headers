@class HKObserverBridgeHandle;

@interface _HKUserDefaultsBridgedObserver : NSObject

@property (readonly, nonatomic) HKObserverBridgeHandle *handle;

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithHandle:(id)a0;

@end

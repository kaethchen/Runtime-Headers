@class HKObserverBridge;

@interface HKObserverBridgeHandle : NSObject

@property (readonly, weak, nonatomic) HKObserverBridge *bridge;

- (void).cxx_destruct;
- (id)initWithBridge:(id)a0;
- (BOOL)notifyObserversOfChangeForKey:(id)a0 newValue:(id)a1;

@end

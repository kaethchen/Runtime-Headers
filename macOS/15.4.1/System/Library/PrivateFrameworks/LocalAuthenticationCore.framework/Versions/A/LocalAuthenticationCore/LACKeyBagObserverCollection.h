@class LACThreadSafeCollection;

@interface LACKeyBagObserverCollection : NSObject {
    LACThreadSafeCollection *_observers;
    long long _lastPublishedState;
}

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)initWithState:(long long)a0;
- (void)publishKeybagStateUpdate:(id)a0 state:(long long)a1;

@end

@class NSMapTable, NSMutableDictionary;

@interface HKObserverBridge : NSObject {
    NSMapTable *_observerBlocksByKeyByObserver;
    NSMutableDictionary *_observersByKey;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)makeAndRegisterBridgedObserverForKey:(id)a0 handle:(id)a1;
- (BOOL)notifyObserversOfChangeForKey:(id)a0 newValue:(id)a1;
- (void)registerObserver:(id)a0 forKey:(id)a1 newValueHandler:(id /* block */)a2;
- (void)unregisterBridgedObserver:(id)a0 forKey:(id)a1;
- (void)unregisterObserver:(id)a0 forKey:(id)a1;

@end

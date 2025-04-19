@class NSMutableDictionary;

@interface GTObservableService : NSObject {
    NSMutableDictionary *_observerIdToObserver;
    unsigned long long _nextObserverId;
}

@property (readonly) unsigned long long count;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)registerObserver:(id)a0;
- (void)deregisterObserver:(unsigned long long)a0;
- (void)deregisterObserversForConnection:(id)a0 path:(id)a1;
- (void)notifyAll:(id /* block */)a0;

@end

@class NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface CSEventMonitor : NSObject {
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)type;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)notifyObserver:(id)a0;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)enumerateObservers:(id /* block */)a0;
- (void)enumerateObserversInQueue:(id /* block */)a0;

@end

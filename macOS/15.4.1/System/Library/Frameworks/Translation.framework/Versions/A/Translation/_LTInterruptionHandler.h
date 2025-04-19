@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface _LTInterruptionHandler : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_observers;
}

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)_didReceiveInterruption;
- (id)addObservationBlock:(id /* block */)a0;

@end

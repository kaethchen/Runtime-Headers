@class NSMapTable, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface ISObservable : NSObject {
    long long _nestedChanges;
    NSMutableArray *_pendingChangesQueue_pendingChangeBlocks;
    long long _numAppliedPendingChanges;
    unsigned long long _currentChange;
    BOOL _isEnumeratingObservers;
    NSObject<OS_dispatch_queue> *_observersQueue;
    NSObject<OS_dispatch_queue> *_pendingChangesQueue;
    BOOL _observersQueue_shouldCopyChangeObserversOnWrite;
    NSMapTable *_observersQueue_changeObserversWithContexts;
}

@property (readonly, nonatomic) BOOL hasObservers;

- (id)init;
- (void).cxx_destruct;
- (void)_willChange;
- (void)performChanges:(id /* block */)a0;
- (void)_didChange;
- (void)registerChangeObserver:(id)a0 context:(void *)a1;
- (void)signalChange:(unsigned long long)a0;
- (void)unregisterChangeObserver:(id)a0 context:(void *)a1;
- (void)_publishChanges;
- (void)_applyPendingChanges;
- (void)_observersQueue_copyChangeObserversForWriteIfNeeded;
- (void)_setHasObservers:(BOOL)a0;
- (unsigned long long)currentChanges;
- (void)didPerformChanges;
- (void)didPublishChanges;
- (void)enumerateObserversUsingBlock:(id /* block */)a0;
- (void)hasObserversDidChange;
- (BOOL)isPerformingChanges;
- (id)mutableChangeObject;
- (void)willPerformChanges;

@end

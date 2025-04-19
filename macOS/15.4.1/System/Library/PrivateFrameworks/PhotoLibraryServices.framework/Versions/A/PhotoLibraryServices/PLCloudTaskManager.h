@class NSMutableDictionary;

@interface PLCloudTaskManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_lock_pendingTaskForTaskIdentifier;
    NSMutableDictionary *_lock_highPriorityResourceToTaskIdentifierMap;
    NSMutableDictionary *_lock_lowPriorityResourceToTaskIdentifierMap;
}

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)_lock_removeTaskIdentifiersForResourceIdentifier:(id)a0 highPriority:(BOOL)a1;
- (void)_lock_setTaskIdentifiers:(id)a0 forResourceIdentifier:(id)a1 highPriority:(BOOL)a2;
- (id)_lock_taskForResourceIdentifier:(id)a0 highPriority:(BOOL)a1;
- (id)_lock_taskIdentifiersForResourceIdentifier:(id)a0 highPriority:(BOOL)a1;
- (BOOL)addProgressBlock:(id /* block */)a0 completionHandler:(id /* block */)a1 forResourceIdentifier:(id)a2 highPriority:(BOOL)a3 withTaskIdentifier:(id)a4;
- (void)cancelTaskWithTaskIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)getPendingTaskForTaskIdentifier:(id)a0;
- (void)reportCompletionForResourceIdentifier:(id)a0 highPriority:(BOOL)a1 withError:(id)a2;
- (void)reportProgress:(float)a0 forResourceIdentifier:(id)a1 highPriority:(BOOL)a2;
- (void)setPendingTaskWithTransferTask:(id)a0 withTaskIdentifier:(id)a1;

@end

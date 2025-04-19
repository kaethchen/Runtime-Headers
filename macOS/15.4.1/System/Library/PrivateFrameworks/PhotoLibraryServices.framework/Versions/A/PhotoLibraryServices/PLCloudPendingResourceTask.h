@class NSMutableDictionary, CPLResourceTransferTask, NSDate;

@interface PLCloudPendingResourceTask : NSObject {
    CPLResourceTransferTask *_lock_transferTask;
    NSDate *_lock_lastUpdated;
    BOOL _lock_completed;
    BOOL _lock_transferTaskRemoved;
    NSMutableDictionary *_lock_taskIdentifierToProgressBlock;
    NSMutableDictionary *_lock_taskIdentifierToCompletionHandler;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (void).cxx_destruct;
- (void)cancelTaskWithIdentifier:(id)a0;
- (void)keepAlive;
- (id)lastUpdated;
- (void)reportProgress:(float)a0;
- (id)taskIDs;
- (void)_lock_setTransferTask:(id)a0;
- (void)addProgressBlock:(id /* block */)a0 completionHandler:(id /* block */)a1 withTaskIdentifier:(id)a2;
- (id)initWithProgressBlock:(id /* block */)a0 completionHandler:(id /* block */)a1 forTaskIdentifier:(id)a2;
- (void)reportCompletionWithError:(id)a0;
- (void)setTransferTask:(id)a0;

@end

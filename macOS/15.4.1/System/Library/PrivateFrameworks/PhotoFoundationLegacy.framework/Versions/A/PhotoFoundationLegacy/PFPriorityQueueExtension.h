@class NSArray, PFDispatchQueue, PFSerialQueue, NSMutableArray;

@interface PFPriorityQueueExtension : PFDispatchQueueExtension <PFPriorityEnqueuing> {
    PFDispatchQueue *_executionQueue;
    PFDispatchQueue *_serializer;
    unsigned long long _lastScheduledPriority;
    NSArray *_priorityLevels;
    NSMutableArray *_emptyNotifications;
    unsigned long long *_scheduledCount;
    PFSerialQueue *_schedulingQueue;
    unsigned long long _qosBlockCount[6];
    BOOL _queueSuspended;
    unsigned long long _schedulingSuspendCount;
    BOOL _performsConcurrentScheduling;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_scheduleBlock:(id)a0;
- (void)installOnQueue:(id)a0;
- (void)_scheduleNextBlock;
- (void)enqueueEmptyNotification:(id /* block */)a0;
- (void)enqueueWithPriority:(unsigned long long)a0 block:(id /* block */)a1;
- (void)enqueueWithPriority:(unsigned long long)a0 qos:(unsigned int)a1 block:(id /* block */)a2;
- (id)initWithPriorityLevels:(unsigned long long)a0 concurrentScheduling:(BOOL)a1;
- (void)queue:(id)a0 didExecute:(id)a1;
- (id)queue:(id)a0 receivedDispatchAsync:(id /* block */)a1;
- (void)queue:(id)a0 skippedExecuting:(id)a1;
- (void)queueDidSuspend:(id)a0;
- (void)queueWillResume:(id)a0;
- (void)resumeScheduling;
- (unsigned long long)schedulingLimitForPriorityLevel:(unsigned long long)a0;
- (void)suspendScheduling;

@end

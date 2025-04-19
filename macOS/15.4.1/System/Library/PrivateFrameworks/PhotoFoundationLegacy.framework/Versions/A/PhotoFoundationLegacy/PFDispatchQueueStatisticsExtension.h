@interface PFDispatchQueueStatisticsExtension : PFDispatchQueueExtension {
    _Atomic unsigned long long _enqueuedCount;
    _Atomic unsigned long long _maxEnqueuedCount;
    _Atomic unsigned long long _executingCount;
    _Atomic unsigned long long _completedCount;
    _Atomic unsigned long long _executionTime;
    _Atomic unsigned long long _maxExecutionTime;
    _Atomic unsigned long long _maxWaitTime;
    _Atomic unsigned long long _totalWaitTime;
    unsigned long long _maxEnqueuedCountTrigger;
    unsigned long long _maxExecutionTimeTrigger;
    unsigned long long _maxWaitTimeTrigger;
    unsigned long long _lastLogTime;
}

- (id)description;
- (id)init;
- (unsigned long long)completedCount;
- (unsigned long long)executionTime;
- (void)queue:(id)a0 didDequeue:(id)a1 skipExecution:(id /* block */)a2;
- (void)installOnQueue:(id)a0;
- (BOOL)_shouldLog;
- (BOOL)_updateMaximum:(_Atomic unsigned long long *)a0 value:(unsigned long long)a1;
- (void)blockCompletedAfterWait:(unsigned long long)a0 executionTime:(unsigned long long)a1 queue:(id)a2;
- (void)blockEnqueued:(id)a0;
- (Class)blockInfoClass;
- (unsigned long long)enqueuedCount;
- (unsigned long long)executingCount;
- (unsigned long long)maxEnqueuedCount;
- (void)maxEnqueuedCountIncreased:(id)a0;
- (unsigned long long)maxExecutionTime;
- (void)maxExecutionTimeIncreased:(id)a0;
- (unsigned long long)maxWaitTime;
- (void)maxWaitTimeIncreased:(id)a0;
- (id)newBlockInfo;
- (void)queue:(id)a0 didExecute:(id)a1;
- (void)queue:(id)a0 skippedExecuting:(id)a1;
- (void)queue:(id)a0 willEnqueueAsync:(id)a1 when:(id /* block */)a2;
- (void)queue:(id)a0 willEnqueueSync:(id)a1;
- (void)queue:(id)a0 willExecute:(id)a1;
- (unsigned long long)totalWaitTime;

@end

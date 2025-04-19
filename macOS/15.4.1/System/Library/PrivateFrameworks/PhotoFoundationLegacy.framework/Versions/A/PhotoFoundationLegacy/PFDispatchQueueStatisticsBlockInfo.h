@interface PFDispatchQueueStatisticsBlockInfo : NSObject

@property BOOL skippedExecuting;
@property (readonly) unsigned long long receivedTimestamp;
@property (readonly) unsigned long long enqueueTimestamp;
@property (readonly) unsigned long long dequeueTimestamp;
@property (readonly) unsigned long long executionTimestamp;
@property (readonly) unsigned long long completionTimestamp;

+ (void)initialize;

- (id)init;
- (unsigned long long)executionTime;
- (void)blockCompleted;
- (void)blockDequeued;
- (void)blockEnqueued;
- (void)blockWillStart;
- (unsigned long long)currentAbsoluteTime;
- (unsigned long long)executionLatency;
- (unsigned long long)nsecBetween:(unsigned long long)a0 and:(unsigned long long)a1;

@end

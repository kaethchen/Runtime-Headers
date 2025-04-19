@class NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CalAccumulatingQueue : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _block;
    id /* block */ _throttleBlock;
    double _delay;
    NSMutableSet *_tags;
    NSMutableDictionary *_context;
    BOOL _executionPending;
    unsigned long long _pendingPopTime;
    NSObject<OS_dispatch_source> *_pendingExecutionTimer;
}

- (void).cxx_destruct;
- (void)_callTargetBlockAndReset;
- (void)_cancelPendingTimer;
- (void)_executeBlockWithThrottleBlock;
- (void)_executeBlockWithoutThrottleBlock;
- (id)_initWithQueue:(id)a0 andBlock:(id /* block */)a1 delay:(double)a2 throttle:(id /* block */)a3;
- (void)_scheduleTimerWithDelay:(double)a0;
- (void)executeBlock;
- (id)initWithQueue:(id)a0 andBlock:(id /* block */)a1;
- (id)initWithQueue:(id)a0 andBlock:(id /* block */)a1 delay:(double)a2;
- (id)initWithQueue:(id)a0 andBlock:(id /* block */)a1 throttle:(id /* block */)a2;
- (void)updateTags:(id)a0;
- (void)updateTags:(id)a0 withContext:(id)a1;
- (void)updateTagsAndExecuteBlock:(id)a0;
- (void)updateTagsAndExecuteBlock:(id)a0 withContext:(id)a1;

@end

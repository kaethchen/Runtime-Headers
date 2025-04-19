@class NSOrderedSet, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSObject;
@protocol OS_dispatch_group, OS_os_log, OS_dispatch_queue, FCKeyedOperationQueueDelegate;

@interface FCKeyedOperationQueue : NSObject {
    id<FCKeyedOperationQueueDelegate> _delegate;
    NSMutableOrderedSet *_mutableKeyQueue;
    NSMutableSet *_keysForExecutingOperations;
    long long _maxConcurrentOperationCount;
    NSMutableDictionary *_cancelHandlersByKey;
    NSObject<OS_dispatch_group> *_operationExecutionGroup;
}

@property (readonly, weak, nonatomic) id<FCKeyedOperationQueueDelegate> delegate;
@property (copy, nonatomic) NSOrderedSet *keyQueue;
@property (nonatomic, getter=isSuspended) BOOL suspended;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executionQueue;
@property (retain, nonatomic) NSObject<OS_os_log> *log;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 maxConcurrentOperationCount:(long long)a1;
- (void)notifyWhenAllOperationsAreFinishedUsingBlock:(id /* block */)a0;

@end

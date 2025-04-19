@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MTPeriodicQueue : NSObject

@property (retain) NSMutableArray *mutableObjects;
@property (retain) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain) NSObject<OS_dispatch_source> *timer;
@property double flushTimeInterval;
@property (getter=isFlushTimerEnabled) BOOL flushTimerEnabled;
@property long long maximumBatchSize;
@property (copy) id /* block */ flushHandler;
@property (retain) NSObject<OS_dispatch_queue> *flushQueue;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)insertObject:(id)a0;
- (void)appendObject:(id)a0;
- (void)__endFlushTimer;
- (void)__flushObjects:(id)a0;
- (void)__beginFlushTimer;
- (id)__clearObjects;
- (void)__flushObjects;
- (void)__flushObjects:(id)a0 maximumBatchSize:(long long)a1 flushHandler:(id /* block */)a2;
- (void)_beginFlushTimer;
- (void)_endFlushTimer;
- (void)flushObjects;
- (void)insertObjects:(id)a0;

@end

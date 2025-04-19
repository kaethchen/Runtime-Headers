@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group, TVISOperationQueueOwner;

@interface TVISOperationQueue : NSObject {
    struct { BOOL respondsToWillScheduleWork; BOOL respondsToDidFinishWork; BOOL respondsToWillBeginWork; BOOL respondsToDidEndWork; BOOL respondsToWillBeginTransaction; BOOL respondsToDidEndTransaction; BOOL respondsToBarrierTask; } _ownerFlags;
}

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *transactionQ;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQ;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *transactionTracker;
@property (readonly, weak, nonatomic) id<TVISOperationQueueOwner> owner;

- (void).cxx_destruct;
- (id)initWithOwner:(id)a0;
- (void)_didFinishWork;
- (void)async:(id)a0 :(id /* block */)a1;
- (void)_didEndTransaction:(id)a0;
- (void)_didEndWork;
- (id /* block */)_promise:(id)a0 :(id /* block */)a1;
- (id /* block */)_promiseTransaction:(id)a0 :(id)a1 :(id /* block */)a2;
- (void)_willBeginTransaction:(id)a0;
- (void)_willBeginWork;
- (void)_willScheduleWork;
- (void)after:(double)a0 :(id)a1 :(id /* block */)a2;
- (void)asyncTransaction:(id)a0 :(id /* block */)a1;
- (void)barrierAsync:(id)a0 :(id /* block */)a1;
- (void)barrierSync:(id)a0 :(id /* block */)a1;
- (id)initWithOwner:(id)a0 queue:(id)a1;
- (void)notify:(id)a0 :(id)a1 :(id /* block */)a2;
- (void)sync:(id)a0 :(id /* block */)a1;

@end

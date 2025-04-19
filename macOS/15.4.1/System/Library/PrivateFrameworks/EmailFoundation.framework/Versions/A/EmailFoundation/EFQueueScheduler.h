@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface EFQueueScheduler : NSObject <EFSuspendableScheduler, EFAssertableScheduler> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) BOOL prefersImmediateExecution;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (void)suspend;
- (void)performBlock:(id /* block */)a0;
- (id)initWithQueue:(id)a0;
- (void)performSyncBlock:(id /* block */)a0;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1;
- (id)performCancelableBlock:(id /* block */)a0;
- (void)assertIsExecuting:(BOOL)a0;
- (void)performSyncBarrierBlock:(id /* block */)a0;
- (void)performVoucherPreservingBlock:(id /* block */)a0;
- (id)performWithObject:(id)a0;

@end

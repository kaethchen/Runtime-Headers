@class EFPromise, NSConditionLock;
@protocol EFScheduler;

@interface EFLazyFuture : EFFuture {
    NSConditionLock *_stateLock;
    id<EFScheduler> _scheduler;
    id /* block */ _block;
    EFPromise *_promise;
}

- (BOOL)run;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (BOOL)tryCancel;
- (BOOL)isCancelled;
- (BOOL)isFinished;
- (void)addFailureBlock:(id /* block */)a0;
- (void)addSuccessBlock:(id /* block */)a0;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (id)initWithScheduler:(id)a0 block:(id /* block */)a1;
- (void)onScheduler:(id)a0 addFailureBlock:(id /* block */)a1;
- (void)onScheduler:(id)a0 addSuccessBlock:(id /* block */)a1;
- (id)resultIfAvailable:(id *)a0;

@end

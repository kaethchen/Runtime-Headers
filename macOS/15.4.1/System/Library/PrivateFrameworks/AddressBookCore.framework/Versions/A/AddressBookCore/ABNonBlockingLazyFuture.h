@class NSString, CNFuture;

@interface ABNonBlockingLazyFuture : NSObject <CNFuture> {
    CNFuture *_future;
    id /* block */ _block;
    id /* block */ _cleanupBlock;
}

@property (readonly, getter=isFinished) BOOL finished;
@property (readonly, getter=isCancelled) BOOL cancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lazyFutureWithBlock:(id /* block */)a0 cleanupBlock:(id /* block */)a1;

- (void)dealloc;
- (BOOL)cancel;
- (id)result:(id *)a0;
- (void)addFailureBlock:(id /* block */)a0;
- (void)addFailureBlock:(id /* block */)a0 scheduler:(id)a1;
- (void)addSuccessBlock:(id /* block */)a0;
- (void)addSuccessBlock:(id /* block */)a0 scheduler:(id)a1;
- (id)flatMap:(id /* block */)a0;
- (id)recover:(id /* block */)a0;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (id)resultWithTimeout:(double)a0 error:(id *)a1;
- (void)cleanupBlocks;
- (id)initWithBlock:(id /* block */)a0 cleanupBlock:(id /* block */)a1;
- (void)resolveFuture;

@end

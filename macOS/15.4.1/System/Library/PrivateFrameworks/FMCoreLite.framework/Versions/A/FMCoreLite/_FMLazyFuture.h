@class NSObject;
@protocol OS_dispatch_queue, FMScheduler;

@interface _FMLazyFuture : FMFuture

@property (copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) id<FMScheduler> scheduler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic) BOOL started;

- (void).cxx_destruct;
- (id)addCompletionBlock:(id /* block */)a0;
- (id)addFailureBlock:(id /* block */)a0;
- (id)addSuccessBlock:(id /* block */)a0;
- (void)_runIfNecessary;
- (id)initWithBlock:(id /* block */)a0 scheduler:(id)a1;

@end

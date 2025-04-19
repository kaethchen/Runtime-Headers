@class NSString;
@protocol CNFuture;

@interface ABForwardingFuture : NSObject <CNFuture> {
    id<CNFuture> _delegate;
}

@property (readonly, getter=isFinished) BOOL finished;
@property (readonly, getter=isCancelled) BOOL cancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)futureWithFuture:(id)a0;

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
- (id)initWithFuture:(id)a0;

@end

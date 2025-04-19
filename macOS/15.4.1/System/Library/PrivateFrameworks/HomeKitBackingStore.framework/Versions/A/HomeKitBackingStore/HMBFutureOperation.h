@class NAFuture;

@interface HMBFutureOperation : HMFOperation

@property (readonly, copy) id /* block */ block;
@property (readonly) NAFuture *future;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;
- (void)main;
- (void)cancelWithError:(id)a0;

@end

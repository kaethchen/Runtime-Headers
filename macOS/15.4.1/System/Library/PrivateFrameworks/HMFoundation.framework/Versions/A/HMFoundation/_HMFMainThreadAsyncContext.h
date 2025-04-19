@interface _HMFMainThreadAsyncContext : NSObject <HMFAsyncContext>

- (id)description;
- (void)performBlock:(id /* block */)a0;
- (void)assertIsExecuting;

@end

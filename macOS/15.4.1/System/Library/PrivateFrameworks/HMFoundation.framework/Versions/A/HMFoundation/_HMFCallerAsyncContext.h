@interface _HMFCallerAsyncContext : NSObject <HMFAsyncContext>

- (id)description;
- (void)performBlock:(id /* block */)a0;
- (void)assertIsExecuting;

@end

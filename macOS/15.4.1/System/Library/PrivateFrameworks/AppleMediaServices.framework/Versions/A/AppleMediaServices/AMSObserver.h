@interface AMSObserver : NSObject

@property (copy) id /* block */ completionBlock;
@property (copy) id /* block */ failureBlock;
@property (copy) id /* block */ resultBlock;

- (void).cxx_destruct;
- (id)initWithResultBlock:(id /* block */)a0 completionBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;
- (void)_sendCompletionUsingQueue:(id)a0;
- (void)_sendFailure:(id)a0 usingQueue:(id)a1;
- (void)_sendResult:(id)a0 usingQueue:(id)a1;
- (id)initWithResultBlock:(id /* block */)a0;

@end

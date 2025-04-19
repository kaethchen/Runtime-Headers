@class AMSMutablePromise, NSObject;
@protocol OS_dispatch_queue;

@interface AMSUniqueExecutionQueue : NSObject

@property (copy) id /* block */ block;
@property (retain) NSObject<OS_dispatch_queue> *completionCallbacksQueue;
@property (retain) NSObject<OS_dispatch_queue> *executeBlockQueue;
@property (retain) AMSMutablePromise *executionPromise;
@property (readonly) NSObject<OS_dispatch_queue> *executionPromiseAccessQueue;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;
- (void)addCompletionBlock:(id /* block */)a0;
- (void)_beginExecutingBlockWithPromise:(id)a0;
- (id)_createExecutionPromise;
- (void)addCompletionBlockForSubsequentExecution:(id /* block */)a0;

@end

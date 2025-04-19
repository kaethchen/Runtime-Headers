@class JIMPeriodicTaskManager, NSString, NSOperationQueue, NSTimer, NSOperation;

@interface JIMPeriodicTask : NSObject

@property (weak) JIMPeriodicTaskManager *manager;
@property (copy) NSString *operationClassName;
@property (copy) id /* block */ operationCompletionBlock;
@property (copy) id /* block */ executionBlock;
@property (weak) NSOperation *executingOperation;
@property (weak) NSOperationQueue *workingQueue;
@property (copy) NSString *name;
@property double idleInterval;
@property double retryInterval;
@property BOOL lastOperationUnFinished;
@property (retain) NSTimer *timer;

- (void).cxx_destruct;
- (void)_timerFired:(id)a0;
- (void)rescheduleWithInterval:(double)a0;

@end

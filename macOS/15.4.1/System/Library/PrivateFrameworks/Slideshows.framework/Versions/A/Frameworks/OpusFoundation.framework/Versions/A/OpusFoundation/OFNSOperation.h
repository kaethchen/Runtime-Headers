@class NSObject, NSString, NSCondition, NSError, NSMutableArray;
@protocol OS_dispatch_source, OFNSOperationDelegate;

@interface OFNSOperation : NSOperation {
    double _startTime;
    NSCondition *_finishingCondition;
    BOOL _isFinishingCondition;
    NSObject<OS_dispatch_source> *_cancelTimer;
}

@property BOOL isExecuting;
@property BOOL isFinishing;
@property BOOL isFinished;
@property (copy) id /* block */ executionBlock;
@property (retain) NSMutableArray *subOperations;
@property OFNSOperation *mainOperation;
@property BOOL canBeCancelled;
@property float progress;
@property (retain) id userData;
@property (copy) NSError *error;
@property (copy) NSString *identifier;
@property (nonatomic) void *context;
@property (nonatomic) id<OFNSOperationDelegate> finishDelegate;
@property (copy) id /* block */ cancelBlock;
@property (copy) id /* block */ finishBlock;
@property (copy) id /* block */ progressBlock;
@property BOOL needsToRetry;
@property (readonly) unsigned long long retryCount;

+ (id)operationWithBlock:(id /* block */)a0 progressBlock:(id /* block */)a1 cancelBlock:(id /* block */)a2 completionHandler:(id /* block */)a3;
+ (id)blockOperationWithExecutionBlock:(id /* block */)a0 finishBlock:(id /* block */)a1 andFinishDelegate:(id)a2;
+ (id)nullOperationWithFinishBlock:(id /* block */)a0 andFinishDelegate:(id)a1;
+ (id)operationWithFinishBlock:(id /* block */)a0 andFinishDelegate:(id)a1;

- (void)dealloc;
- (id)init;
- (void)finish;
- (void)start;
- (void)cancel;
- (BOOL)isConcurrent;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)operationDescription;
- (unsigned long long)launchOperation;
- (BOOL)shouldContinue;
- (BOOL)_finish:(BOOL)a0;
- (double)elapsedTime;
- (BOOL)hasSucceeded;
- (void)cancelOperation;
- (void)finishOperation;
- (BOOL)performSynchronously;
- (void)performAsynchronously:(id)a0;
- (void)_launchOperation;
- (void)cleanupOperation;
- (void)_updateProgressBlock;
- (void)performAsynchronously:(id)a0 progressBlock:(id /* block */)a1;
- (void)performAsynchronously:(id)a0 progressBlock:(id /* block */)a1 timeout:(unsigned long long)a2;
- (BOOL)performSubOperationSynchronously:(id)a0 progressBlock:(id /* block */)a1 timeout:(unsigned long long)a2;
- (BOOL)performSynchronously:(id /* block */)a0;
- (BOOL)performSynchronously:(id /* block */)a0 timeout:(unsigned long long)a1;

@end

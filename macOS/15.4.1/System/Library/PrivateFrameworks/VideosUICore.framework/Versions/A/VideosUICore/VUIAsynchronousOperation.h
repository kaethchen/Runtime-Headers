@interface VUIAsynchronousOperation : NSOperation {
    int _state;
}

- (void)start;
- (BOOL)isAsynchronous;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)executionDidBegin;
- (void)finishExecutionIfPossible;

@end

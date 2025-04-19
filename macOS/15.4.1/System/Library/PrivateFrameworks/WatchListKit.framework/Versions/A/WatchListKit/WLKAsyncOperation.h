@interface WLKAsyncOperation : NSOperation {
    struct { BOOL isReady; BOOL isCancelled; BOOL isExecuting; BOOL isFinished; } _state;
}

+ (id)keyPathsForValuesAffectingIsCancelled;
+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)keyPathsForValuesAffectingIsReady;

- (id)init;
- (void)start;
- (void)cancel;
- (BOOL)isAsynchronous;
- (BOOL)isCancelled;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)executionDidBegin;
- (void)finishExecutionIfPossible;

@end

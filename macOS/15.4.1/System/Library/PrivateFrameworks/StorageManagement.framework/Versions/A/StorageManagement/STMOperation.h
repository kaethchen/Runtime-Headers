@class NSError, NSOperationQueue;

@interface STMOperation : NSOperation {
    BOOL _isExecuting;
    BOOL _isFinished;
    double _startTime;
    double _finishTime;
}

@property (retain) NSError *error;
@property (weak) NSOperationQueue *operationQueue;
@property (readonly) double startTime;
@property (readonly) double finishTime;
@property (readonly) double duration;

+ (id)operation;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (BOOL)isAsynchronous;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)finishWithError:(id)a0;
- (void)setIsFinished:(BOOL)a0;
- (void)setIsExecuting:(BOOL)a0;
- (void)willDequeueFromOperationQueue:(id)a0;
- (void)willEnqueueInOperationQueue:(id)a0;

@end

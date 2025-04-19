@interface DDMAssetURLProtocolOperation : NSOperation

@property (nonatomic) BOOL executing;
@property (nonatomic) BOOL finished;
@property (copy) id /* block */ resumeBlock;

- (void).cxx_destruct;
- (void)start;
- (BOOL)isAsynchronous;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)main;
- (void)finishOperation;
- (id)initWithProtocolResumeBlock:(id /* block */)a0;

@end

@interface SOAsynchronousOperation : NSOperation

@property (nonatomic) unsigned long long state;

- (id)init;
- (void)finish;
- (void)start;
- (BOOL)isReady;
- (BOOL)isAsynchronous;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)main;

@end

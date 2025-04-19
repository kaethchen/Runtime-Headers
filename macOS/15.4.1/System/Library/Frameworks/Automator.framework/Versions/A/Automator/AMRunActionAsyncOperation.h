@interface AMRunActionAsyncOperation : AMRunActionOperation

@property long long state;

- (void)finish;
- (void)start;
- (BOOL)isConcurrent;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)am_main;
- (void)didFinishRunningWithError:(id)a0;

@end

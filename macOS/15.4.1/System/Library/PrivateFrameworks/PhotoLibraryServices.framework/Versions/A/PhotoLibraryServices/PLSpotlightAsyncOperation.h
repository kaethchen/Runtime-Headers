@interface PLSpotlightAsyncOperation : NSOperation

@property unsigned long long operationState;

- (void)start;
- (void)cancel;
- (BOOL)isAsynchronous;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)main;
- (id)_keyObserverStringForOperationState:(unsigned long long)a0;

@end

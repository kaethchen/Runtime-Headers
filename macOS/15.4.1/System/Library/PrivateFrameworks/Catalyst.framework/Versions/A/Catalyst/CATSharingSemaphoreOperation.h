@interface CATSharingSemaphoreOperation : CATOperation

- (void)cancel;
- (BOOL)isAsynchronous;
- (void)signal;

@end

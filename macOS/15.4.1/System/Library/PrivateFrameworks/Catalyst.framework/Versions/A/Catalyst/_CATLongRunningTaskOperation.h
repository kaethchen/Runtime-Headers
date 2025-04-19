@interface _CATLongRunningTaskOperation : CATTaskOperation

- (void)cancel;
- (BOOL)isAsynchronous;
- (void)main;

@end

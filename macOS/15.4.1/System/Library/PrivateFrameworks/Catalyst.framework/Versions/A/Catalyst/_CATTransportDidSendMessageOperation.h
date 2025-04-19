@interface _CATTransportDidSendMessageOperation : NSBlockOperation

- (void)cancel;
- (BOOL)isCancelled;
- (BOOL)isCanceled;

@end

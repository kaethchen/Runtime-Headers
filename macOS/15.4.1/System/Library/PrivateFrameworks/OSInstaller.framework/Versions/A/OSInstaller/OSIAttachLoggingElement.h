@interface OSIAttachLoggingElement : OSIInstallQueueElement

+ (BOOL)flushCurrentInstallLogToMutableProduct;
+ (void)markDetached;

- (id)operationName;
- (BOOL)runReturningError:(id *)a0;
- (BOOL)_attachLog;
- (double)estimatedTimeToComplete;

@end

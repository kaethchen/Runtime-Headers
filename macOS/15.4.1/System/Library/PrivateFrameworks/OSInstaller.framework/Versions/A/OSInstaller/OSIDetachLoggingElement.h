@interface OSIDetachLoggingElement : OSIInstallQueueElement

- (id)operationName;
- (BOOL)runReturningError:(id *)a0;
- (double)estimatedTimeToComplete;

@end

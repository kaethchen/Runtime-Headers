@interface OSIPromoteInstallVolumeElement : OSIInstallQueueElement

- (id)operationName;
- (BOOL)runReturningError:(id *)a0;
- (double)estimatedTimeToComplete;

@end

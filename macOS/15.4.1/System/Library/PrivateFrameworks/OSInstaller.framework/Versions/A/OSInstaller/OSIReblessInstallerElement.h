@interface OSIReblessInstallerElement : OSIInstallQueueElement

- (id)operationName;
- (BOOL)runReturningError:(id *)a0;
- (BOOL)_runReturningError:(id *)a0;
- (double)estimatedTimeToComplete;

@end

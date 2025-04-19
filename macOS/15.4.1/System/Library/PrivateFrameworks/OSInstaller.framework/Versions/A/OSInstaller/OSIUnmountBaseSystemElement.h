@interface OSIUnmountBaseSystemElement : OSIInstallQueueElement

- (id)initWithOptions:(id)a0;
- (id)operationName;
- (BOOL)runReturningError:(id *)a0;
- (BOOL)_ejectDiskImageWithPath:(id)a0 withError:(id *)a1;
- (double)estimatedTimeToComplete;

@end

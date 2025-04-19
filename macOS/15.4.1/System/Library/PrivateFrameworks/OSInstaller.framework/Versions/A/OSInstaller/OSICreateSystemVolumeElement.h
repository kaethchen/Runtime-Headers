@interface OSICreateSystemVolumeElement : OSIInstallQueueElement

- (id)initWithOptions:(id)a0;
- (id)operationName;
- (BOOL)runReturningError:(id *)a0;
- (double)estimatedTimeToComplete;
- (BOOL)fixVolumeGroupUUIDWithError:(id *)a0;

@end

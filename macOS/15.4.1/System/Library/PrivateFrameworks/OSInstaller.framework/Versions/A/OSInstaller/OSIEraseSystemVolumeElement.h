@interface OSIEraseSystemVolumeElement : OSIInstallQueueElement

@property long long itemsToDo;
@property long long itemsDone;

- (id)initWithOptions:(id)a0;
- (id)operationName;
- (BOOL)runReturningError:(id *)a0;
- (double)estimatedTimeToComplete;
- (BOOL)fixVolumeGroupUUIDWithError:(id *)a0;

@end

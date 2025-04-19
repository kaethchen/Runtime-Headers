@interface ICNFIMAPAggregateFetchUIDOperation : ICNFIMAPAggregateClientOperation

@property unsigned int expectedSize;

- (id)activityString;
- (id)initWithOperations:(id)a0;
- (void)cleanupAfterCompletion;
- (id)commandTypeString;
- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;
- (id)initWithOperations:(id)a0 expectedSize:(unsigned int)a1;

@end

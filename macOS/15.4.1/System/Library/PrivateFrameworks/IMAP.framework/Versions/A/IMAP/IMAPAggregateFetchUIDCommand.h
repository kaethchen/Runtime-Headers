@interface IMAPAggregateFetchUIDCommand : IMAPAggregateCommand

@property unsigned int expectedSize;

- (id)activityString;
- (void)cleanupAfterCompletion;
- (id)commandTypeString;
- (id)initWithCommands:(id)a0;
- (id)initWithCommands:(id)a0 expectedSize:(unsigned int)a1;
- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;

@end

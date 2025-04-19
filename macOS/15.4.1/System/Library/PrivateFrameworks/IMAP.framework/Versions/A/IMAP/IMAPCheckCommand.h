@interface IMAPCheckCommand : IMAPSingleCommand

- (id)activityString;
- (id)commandTypeString;
- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;
- (BOOL)shouldSendAgainOnError;

@end

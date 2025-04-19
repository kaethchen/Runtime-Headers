@interface ICNFIMAPAggregateGetQuotaRootOperation : ICNFIMAPAggregateClientOperation

- (id)activityString;
- (id)commandTypeString;
- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;
- (BOOL)shouldSendAgainOnError;

@end

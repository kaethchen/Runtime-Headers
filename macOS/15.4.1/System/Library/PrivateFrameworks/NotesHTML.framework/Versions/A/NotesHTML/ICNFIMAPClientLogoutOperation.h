@interface ICNFIMAPClientLogoutOperation : ICNFIMAPSingleClientOperation

- (id)init;
- (id)activityString;
- (BOOL)alwaysAllowToComplete;
- (id)commandTypeString;
- (BOOL)executeOnConnection:(id)a0;
- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;

@end

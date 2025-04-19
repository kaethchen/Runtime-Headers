@interface ICNFIMAPClientSuspendOperation : ICNFIMAPClientOperation

@property BOOL shouldExecuteSynchronously;

- (id)init;
- (BOOL)alwaysAllowToComplete;
- (id)commandTypeString;
- (long long)maxAllowedConnectionState;

@end

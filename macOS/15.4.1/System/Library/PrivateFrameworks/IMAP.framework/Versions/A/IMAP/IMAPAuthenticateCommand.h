@class ECSASLClient;

@interface IMAPAuthenticateCommand : IMAPSingleCommand

@property (readonly, nonatomic) ECSASLClient *saslClient;
@property BOOL includeInitialResponse;

- (id)init;
- (void).cxx_destruct;
- (id)activityString;
- (id)commandTypeString;
- (id)debugCommandStringWithAccount:(id)a0;
- (BOOL)executeOnConnection:(id)a0;
- (BOOL)handlesAllUntaggedResponses;
- (id)initWithSASLClient:(id)a0;
- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;
- (id)newCommandDataForLiteralPlus:(BOOL)a0;

@end

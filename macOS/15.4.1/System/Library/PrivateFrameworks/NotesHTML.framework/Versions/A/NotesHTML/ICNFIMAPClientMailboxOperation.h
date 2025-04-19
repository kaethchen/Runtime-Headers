@class NSString;

@interface ICNFIMAPClientMailboxOperation : ICNFIMAPSingleClientOperation

@property (copy) NSString *mailboxName;
@property (copy) NSString *mailboxArgumentName;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMailboxName:(id)a0;
- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;
- (id)newCommandDataForLiteralPlus:(BOOL)a0;
- (BOOL)shouldSendAgainOnError;
- (id)simpleDescriptionString;
- (id)debugCommandString;

@end

@class NSString, NSDictionary;

@interface IMAPListCommand : IMAPSingleCommand

@property (readonly, copy) NSString *mailboxName;
@property (copy) NSString *referenceName;
@property long long options;
@property (copy) NSDictionary *listing;
@property (copy) NSString *separator;

- (id)init;
- (void).cxx_destruct;
- (id)activityString;
- (id)commandTypeString;
- (BOOL)executeOnConnection:(id)a0;
- (id)initWithMailboxName:(id)a0 options:(long long)a1;
- (id)initWithMailboxName:(id)a0 referenceName:(id)a1 options:(long long)a2;
- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;
- (id)newCommandDataForLiteralPlus:(BOOL)a0;
- (BOOL)shouldSendAgainOnError;

@end

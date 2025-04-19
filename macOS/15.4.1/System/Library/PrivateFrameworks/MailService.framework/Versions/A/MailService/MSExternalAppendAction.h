@class ACAccount, MCMessage;

@interface MSExternalAppendAction : MSExternalAction

@property (readonly) MCMessage *message;
@property (readonly) ACAccount *account;
@property (readonly) int mailboxType;

+ (id)entityName;

- (id)init;
- (void).cxx_destruct;
- (id)initWithManagedObject:(id)a0;
- (id)initWithMessage:(id)a0 account:(id)a1 mailboxType:(int)a2;
- (id)managedObjectForContext:(id)a0;

@end

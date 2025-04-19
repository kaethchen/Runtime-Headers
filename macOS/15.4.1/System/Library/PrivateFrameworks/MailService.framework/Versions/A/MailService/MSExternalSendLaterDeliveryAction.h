@class NSNumber, ACAccount;

@interface MSExternalSendLaterDeliveryAction : MSExternalAction

@property (readonly) NSNumber *libraryID;
@property (readonly) ACAccount *account;
@property (readonly) int mailboxType;

+ (id)entityName;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithManagedObject:(id)a0;
- (id)initWithLibraryID:(id)a0 account:(id)a1 destinationMailboxType:(int)a2;
- (id)managedObjectForContext:(id)a0;

@end

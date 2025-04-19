@class NFIMAPAccountProxy;

@interface NFIMAPFolderProxy : ICNFIMAPMailboxProxy

@property (weak) NFIMAPAccountProxy *account;

- (id)initWithManagedObject:(id)a0;
- (id)mailbox;
- (BOOL)addMessageToServer:(id)a0 withMessageType:(char)a1;
- (void)deleteMessageFromPersistence:(id)a0;
- (void)failedToRenameMailboxWithServerName:(id)a0 oldName:(id)a1;
- (BOOL)isMessageDeletedFromPersistence:(id)a0;
- (BOOL)messageShouldBePersisted:(id)a0;

@end

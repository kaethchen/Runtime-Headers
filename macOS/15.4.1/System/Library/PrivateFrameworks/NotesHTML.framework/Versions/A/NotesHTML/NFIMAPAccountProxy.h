@class NSString;

@interface NFIMAPAccountProxy : ICNFIMAPAccountProxy <NFAccountProxy>

@property (copy, nonatomic) NSString *fullName;
@property (copy, nonatomic) NSString *parentACAccountIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithManagedObject:(id)a0;
- (BOOL)hasNotes;
- (id)parentACAccount;
- (BOOL)renameMailbox:(id)a0 newParentMailbox:(id)a1;
- (void)deleteMailboxFromPersistence:(id)a0;
- (BOOL)deleteMailboxFromServer:(id)a0;
- (id)mailboxProxyForMailbox:(id)a0;
- (unsigned long long)maximumConnectionCount;
- (id)newMailboxProxyWithMailbox:(id)a0;
- (void)playOfflineActions;
- (BOOL)shouldAddMailboxToPersistence:(id)a0 withParent:(id)a1;
- (BOOL)useDefaultMailboxAsMailboxHierarchyRoot;

@end

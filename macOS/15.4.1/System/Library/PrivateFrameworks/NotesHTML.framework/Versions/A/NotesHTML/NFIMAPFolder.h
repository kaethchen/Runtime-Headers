@class NSString, NSManagedObject, NSSet, NSNumber;
@protocol ICNFIMAPPersistedAccount;

@interface NFIMAPFolder : NFFolder <ICNFIMAPPersistedMailbox>

@property (retain, nonatomic) NFIMAPFolder *parent;
@property (retain, nonatomic) NSNumber *allegedHighestModificationSequence;
@property (retain, nonatomic) NSNumber *computedHighestModificationSequence;
@property (copy, nonatomic) NSString *serverName;
@property (retain, nonatomic) NSNumber *uidValidity;
@property (retain, nonatomic) NSNumber *uidNext;
@property (retain, nonatomic) NSManagedObject<ICNFIMAPPersistedAccount> *account;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSSet *persistedMessages;
@property (retain, nonatomic) NSNumber *imapAllegedHighestModificationSequence;
@property (retain, nonatomic) NSNumber *imapComputedHighestModificationSequence;
@property (retain, nonatomic) NSNumber *imapUIDNext;
@property (retain, nonatomic) NSNumber *imapUIDValidity;
@property (copy, nonatomic) NSString *imapServerName;
@property (readonly, nonatomic) BOOL isRootMailbox;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createFolderWithName:(id)a0 parentFolder:(id)a1 context:(id)a2;
+ (id)folderWithName:(id)a0 parentFolder:(id)a1 context:(id)a2;
+ (Class)noteClass;

- (BOOL)isRemote;
- (BOOL)validateValue:(inout id *)a0 forKey:(id)a1 error:(out id *)a2;
- (id)newMessage;
- (unsigned int)maximumIMAPUID;
- (unsigned long long)totalCountOfMessages;
- (id)newNote;
- (BOOL)_isSiblingWithSameNameAllowed:(id)a0;
- (void)addChildMailboxes:(id)a0;
- (void)addChildMailboxesObject:(id)a0;
- (void)addPersistedMessages:(id)a0;
- (void)addPersistedMessagesObject:(id)a0;
- (id)cacheDirectoryContentsExcludingObjectIDs:(id)a0;
- (id)copyIncompleteMessagesIncludingObjectIDs:(id)a0;
- (id)getDetailsForMessagesWithIMAPUIDs:(id)a0;
- (id)messageWithUniqueID:(id)a0;
- (id)messagesWithObjectIDs:(id)a0;
- (id)newSubfolderWithName:(id)a0;
- (id)newSubfolderWithName:(id)a0 serverName:(id)a1;
- (void)removeChildMailboxes:(id)a0;
- (void)removeChildMailboxesObject:(id)a0;
- (void)removePersistedMessages:(id)a0;
- (void)removePersistedMessagesObject:(id)a0;
- (id)subfolderWithName:(id)a0;
- (BOOL)validateAccount:(inout id *)a0 error:(out id *)a1;

@end

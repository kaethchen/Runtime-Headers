@class NSString, EMSmartMailbox, NSObject;
@protocol OS_os_log;

@interface MFSpecialMailbox : MFMailbox <EFLoggable> {
    EMSmartMailbox *_emSmartMailbox;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (copy, nonatomic) id /* block */ smartMailboxCreator;
@property (nonatomic) BOOL forceDisplayNameForMultipleChildren;
@property (readonly, copy, nonatomic) NSString *underlyingName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)followUpMailbox;
+ (id)VIPSendersMailbox;
+ (id)_archiveMailboxForFavoritesV2;
+ (id)_draftsMailboxForFavoritesV2;
+ (id)_inboxMailboxForFavoritesV2;
+ (id)_junkMailboxForFavoritesV2;
+ (id)_sentMessagesMailboxForFavoritesV2;
+ (id)_trashMailboxForFavoritesV2;
+ (id)allMailboxesMailbox;
+ (id)appleScriptNameForMailboxType:(int)a0;
+ (id)archiveMailbox;
+ (id)draftsMailbox;
+ (id)flagMailboxes;
+ (id)flagsMailbox;
+ (id)inboxMailbox;
+ (id)junkMailbox;
+ (id)outboxMailbox;
+ (void)readFlagMailboxesFromDiskForFlagMailboxes:(id)a0;
+ (id)readLaterMailbox;
+ (id)sendLaterMailbox;
+ (id)sentMessagesMailbox;
+ (id)specialMailboxForMailboxType:(int)a0;
+ (id)specialMailboxWithIdentifier:(id)a0;
+ (id)trashMailbox;
+ (void)updateVisibleFlagMailboxes;
+ (id)visibleFlagMailboxes;

- (void).cxx_destruct;
- (id)displayName;
- (id)objectSpecifier;
- (id)childAtIndex:(unsigned long long)a0;
- (id)children;
- (id)account;
- (id)objectID;
- (id)criteria;
- (id)messages;
- (unsigned long long)numberOfChildren;
- (unsigned long long)displayCount;
- (void)setCriteria:(id)a0;
- (unsigned long long)indexOfChild:(id)a0;
- (id)_loadUserInfo;
- (BOOL)hasMessages;
- (id)sortedChildAtIndex:(unsigned long long)a0 hidingGmail:(BOOL)a1;
- (id)_followUpChildren;
- (id)_initWithName:(id)a0 underlyingName:(id)a1 type:(int)a2 uuid:(id)a3 emSmartMailboxCreator:(id /* block */)a4;
- (id)_readLaterChildren;
- (id)_specialMailboxIdentifier;
- (void)_updateDontIndexFlagFile;
- (id)_viewerAttributesKey;
- (BOOL)allCriteriaMustBeSatisfied;
- (id)appleScriptKey;
- (id)childEnumeratorIncludingHiddenChildren:(BOOL)a0;
- (id)criterion;
- (unsigned long long)displayCountUsingCurrentFocus:(id)a0;
- (id)emSmartMailbox;
- (void)enumerateVisibleChildrenHidingGmail:(BOOL)a0 usingBlock:(id /* block */)a1;
- (id)expandedUnifiedMailboxes;
- (unsigned long long)indexToInsertChildMailbox:(id)a0;
- (id)mutableCopyOfChildrenIncludingHiddenChildren:(BOOL)a0 hidingGmail:(BOOL)a1;
- (unsigned long long)numberOfSortedChildrenHidingGmail:(BOOL)a0;
- (unsigned long long)numberOfVisibleChildrenHidingGmail:(BOOL)a0;
- (id)persistentUIIdentifier;
- (void)saveUserInfo;
- (void)setAllCriteriaMustBeSatisfied:(BOOL)a0;
- (void)setEmSmartMailbox:(id)a0;
- (id)visibleChildAtIndex:(unsigned long long)a0;

@end

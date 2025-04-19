@class EFOrderedDictionary, EMQuery, EFLazyCache, NSMutableDictionary, EFLocked, NSObject, NSMutableOrderedSet, EMThreadScope;
@protocol OS_os_log, EMMailboxTypeResolver, EFAssertableScheduler, EMInMemoryThreadCollectionDelegate, EMInMemoryThreadCollectionDataSource;

@interface EMInMemoryThreadCollection : NSObject {
    NSMutableOrderedSet *_conversationIDs;
    NSMutableDictionary *_threadsByConversationID;
    NSMutableDictionary *_inMemoryThreadsByConversationID;
    NSMutableDictionary *_mailboxesByConversationID;
    EFLocked *_oldestThreadsByMailboxObjectIDs;
    EFLocked *_sectionIndexesByConversationID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _threadsLock;
}

@property (readonly, nonatomic) EFLazyCache *inMemoryThreadCache;
@property (readonly, nonatomic) long long dateSortOrder;
@property (readonly, nonatomic) id /* block */ comparator;
@property (readonly, nonatomic) EFOrderedDictionary *sectionPredicates;
@property (readonly, nonatomic) id<EFAssertableScheduler> scheduler;
@property (nonatomic) BOOL limitedCache;
@property (readonly, weak, nonatomic) id<EMInMemoryThreadCollectionDataSource> dataSource;
@property (readonly, weak, nonatomic) id<EMInMemoryThreadCollectionDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_os_log> *logClient;
@property (readonly, copy, nonatomic) EMQuery *query;
@property (readonly, copy, nonatomic) EMThreadScope *threadScope;
@property (readonly, nonatomic) id<EMMailboxTypeResolver> mailboxTypeResolver;

+ (id /* block */)_comparatorForInThreadProxiesWithSortDescriptors:(id)a0 sectionComparator:(id /* block */)a1;

- (void).cxx_destruct;
- (id)itemIDs;
- (id)threadsAndMessagesForObjectIDs:(id)a0;
- (void)clearInMemoryThreadCache;
- (void)clearOldestThreadsByMailboxObjectIDs;
- (void)conversationIDDidChangeForMessages:(id)a0 fromConversationID:(long long)a1;
- (void)conversationNotificationLevelDidChangeForConversation:(long long)a0 conversationID:(long long)a1;
- (void)enumerateObjectIDsInBatchesOfSize:(unsigned long long)a0 block:(id /* block */)a1;
- (id)initWithQuery:(id)a0 mailboxTypeResolver:(id)a1 dataSource:(id)a2 delgate:(id)a3 scheduler:(id)a4 logClient:(id)a5 limitedCache:(BOOL)a6;
- (void)initializeOldestThreadsByMailbox;
- (id)messageListItemForObjectID:(id)a0 error:(id *)a1;
- (id)messagesForThread:(id)a0;
- (void)messagesWereAdded:(id)a0;
- (void)messagesWereChanged:(id)a0 forKeyPaths:(id)a1 deleted:(BOOL)a2;
- (void)notifyObserverOfOldestThreadsByMailboxObjectIDs;
- (void)objectIDDidChangeForMessage:(id)a0 oldObjectID:(id)a1 oldConversationID:(long long)a2;
- (BOOL)removeThreadProxies:(id)a0 forMove:(BOOL)a1;
- (id)sectionIdentifierForThreadObjectID:(id)a0;
- (void)clearForRecovery;
- (void)performBlockOnSchedulerIfNecessary:(id /* block */)a0;

@end

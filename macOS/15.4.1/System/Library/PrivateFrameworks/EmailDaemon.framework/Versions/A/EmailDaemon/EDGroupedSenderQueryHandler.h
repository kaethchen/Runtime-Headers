@class EDMessageQueryHelper, EFOrderedDictionary, EDMessagePersistence, EDSenderPersistence, EDBusinessCloudStorage, EMListUnsubscribeDetector, NSString, EMQuery, NSObject, _EDGroupedSenderList, EDBusinessPersistence, EMThreadScope;
@protocol OS_dispatch_queue, EFScheduler, EMMessageListItemQueryResultsObserver;

@interface EDGroupedSenderQueryHandler : EDMessageRepositoryQueryHandler <EDMessageQueryHelperDelegate, EDGroupedSenderMessageProvider, EDBusinessCloudStorageObserver, EDBusinessChangeHookResponder, EDMessageChangeHookResponder, EDMessageRepositoryQueryHandler> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _groupedSendersLock;
}

@property (readonly, nonatomic) EDSenderPersistence *senderPersistence;
@property (retain, nonatomic) EDMessagePersistence *messagePersistence;
@property (retain, nonatomic) EDBusinessPersistence *businessPersistence;
@property (retain, nonatomic) EDBusinessCloudStorage *businessCloudStorage;
@property (retain, nonatomic) EDMessageQueryHelper *messageQueryHelper;
@property (readonly, nonatomic) id<EMMessageListItemQueryResultsObserver> resultsObserverIfUncanceled;
@property (retain, nonatomic) _EDGroupedSenderList *groupedSenders;
@property (readonly, nonatomic) EFOrderedDictionary *sectionPredicates;
@property (readonly, nonatomic) id<EFScheduler> scheduler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *resultQueue;
@property BOOL didCancel;
@property (nonatomic) BOOL keepMessagesInListOnBucketChange;
@property (nonatomic) long long grouping;
@property (readonly, nonatomic) EMListUnsubscribeDetector *unsubscribeDetector;
@property (readonly, nonatomic) EMThreadScope *threadScope;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) EMQuery *query;

+ (id /* block */)_comparatorForSortDescriptors:(id)a0 sectionPredicates:(id)a1;
+ (unsigned long long)_sectionIndexForGroupedSender:(id)a0 sectionPredicates:(id)a1 sectionIdentifier:(id *)a2;
+ (id)resolveMergePathsForMergedBusinesses:(id)a0;

- (void).cxx_destruct;
- (BOOL)start;
- (void)cancel;
- (void)tearDown;
- (id)messagesForGroupedSender:(id)a0 limit:(long long)a1;
- (void)persistenceDidFinishMergingBusinessesAfterJournalReconciliation;
- (id)_externalBusinessIDForEmailAddress:(id)a0;
- (id)_extraInfoForSenderItemIDsBySection:(id)a0 includePrecachedSendersFromSenders:(id)a1;
- (void)_filterGroupedSenderChanges:(id)a0 withVisibleSenders:(id)a1;
- (id)_groupedSenderForEDGroupedSender:(id)a0;
- (id)_groupedSenderForObjectID:(id)a0;
- (id)_itemIDsWithSectionChangesFrom:(id)a0 to:(id)a1;
- (id)_messageQueryFromGroupedQuery:(id)a0;
- (void)_messagesWereAdded:(id)a0 toInitialBatch:(BOOL)a1;
- (void)_messagesWereChanged:(id)a0 previousMessages:(id)a1 forKeyPaths:(id)a2 deleted:(BOOL)a3;
- (void)_notifyObserversOfInsertedSenders:(id)a0 senderItemIDsBySection:(id)a1 previousSender:(id)a2 includePrecachedSenders:(BOOL)a3 notifyBlock:(id /* block */)a4;
- (void)_notifyObserversOfMovedSenders:(id)a0 previousSender:(id)a1 includePrecachedSenders:(BOOL)a2 notifyBlock:(id /* block */)a3;
- (void)_notifyResultsObserverOfChangesToVisibleGroupedSendersFrom:(id)a0 to:(id)a1 forChangedGroups:(id)a2 itemIDsWithSectionChanges:(id)a3 includePrecachedSenders:(BOOL)a4 logMessage:(id)a5;
- (void)_persistenceDidFinishMergingBusinesses;
- (BOOL)_queryHelperIsCurrent:(id)a0;
- (unsigned long long)_sectionIndexForGroupedSender:(id)a0 sectionIdentifier:(id *)a1;
- (id)_senderItemIDsBySectionForSenders:(id)a0;
- (id)_updateDifference:(id)a0 from:(id)a1 forChangedGroups:(id)a2;
- (id)groupedSenderForObjectID:(id)a0 isPersisted:(BOOL *)a1 error:(id *)a2;
- (id)initWithQuery:(id)a0 messagePersistence:(id)a1 senderPersistence:(id)a2 businessPersistence:(id)a3 businessCloudStorage:(id)a4 hookRegistry:(id)a5 remindMeNotificationController:(id)a6 observer:(id)a7 observationIdentifier:(id)a8 keepMessagesInListOnBucketChange:(BOOL)a9;
- (void)persistenceDidAddMessages:(id)a0 generationWindow:(id)a1;
- (void)persistenceIsMergingBusinessID:(long long)a0 intoBusinessID:(long long)a1;
- (void)queryHelper:(id)a0 businessIDDidChangeForMessages:(id)a1 fromBusinessID:(long long)a2;
- (void)queryHelper:(id)a0 conversationIDDidChangeForMessages:(id)a1 fromConversationID:(long long)a2;
- (void)queryHelper:(id)a0 conversationNotificationLevelDidChangeForConversation:(long long)a1 conversationID:(long long)a2;
- (void)queryHelper:(id)a0 didAddMessages:(id)a1;
- (void)queryHelper:(id)a0 didDeleteMessages:(id)a1;
- (void)queryHelper:(id)a0 didFindMessages:(id)a1 forInitialBatch:(BOOL)a2;
- (void)queryHelper:(id)a0 didUpdateMessages:(id)a1 forKeyPaths:(id)a2;
- (void)queryHelper:(id)a0 messageFlagsDidChangeForMessages:(id)a1 previousMessages:(id)a2;
- (void)queryHelper:(id)a0 objectIDDidChangeForMessage:(id)a1 oldObjectID:(id)a2 oldConversationID:(long long)a3;
- (void)queryHelperDidFindAllMessages:(id)a0;
- (void)queryHelperDidFinishRemoteSearch:(id)a0;
- (void)queryHelperNeedsRestart:(id)a0;
- (void)test_tearDown;
- (void)updateUnseenCountsForBusinessesWithExternalIDs:(id)a0;
- (void)updatedBusinessesWithExternalIDs:(id)a0 removedBusinessesWithExternalIDs:(id)a1;

@end

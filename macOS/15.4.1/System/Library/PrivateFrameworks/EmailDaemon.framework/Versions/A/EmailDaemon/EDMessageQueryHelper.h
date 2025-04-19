@class NSString, EDRemindMeNotificationController, EDMessagePersistence, EDMessageQueryEvaluator, EFCancelationToken, EMQuery, EDPersistenceHookRegistry, EFPromise, NSObject, NSMutableSet;
@protocol OS_os_log, EFScheduler, EDMessageQueryHelperDelegate, EDSearchProvider;

@interface EDMessageQueryHelper : NSObject <EDCategoryChangeHookResponder, EDBusinessChangeHookResponder, EDMessageChangeHookResponder, EDRemindMeNotificationControllerObserver, EDRemoteSearchDelegate, EFLoggable, EDMessageQueryHelperMessageSource, EFCancelable> {
    struct atomic_flag { _Atomic BOOL _Value; } _didStart;
    NSMutableSet *_noLongerMatchingMessages;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _noLongerMatchingMessagesLock;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) long long initialBatchSize;
@property (readonly, nonatomic) long long maximumBatchSize;
@property (readonly, nonatomic) EDMessagePersistence *messagePersistence;
@property (readonly, nonatomic) EDPersistenceHookRegistry *hookRegistry;
@property (readonly, nonatomic) id<EDSearchProvider> searchProvider;
@property (readonly, nonatomic) EDRemindMeNotificationController *remindMeNotificationController;
@property (readonly, nonatomic) id<EFScheduler> scheduler;
@property (readonly, weak, nonatomic) id<EDMessageQueryHelperDelegate> delegate;
@property (readonly, nonatomic) EDMessageQueryEvaluator *queryEvaluator;
@property (readonly, nonatomic) BOOL shouldReconcileJournal;
@property (readonly, nonatomic) BOOL keepMessagesInListOnBucketChange;
@property (readonly, nonatomic) BOOL updateDisplayDate;
@property (readonly, nonatomic) BOOL addMessagesSynchronously;
@property (readonly, nonatomic) EFPromise *initialResultsPromise;
@property (readonly) NSString *pendingFlagChangesKey;
@property (readonly) NSString *pendingConversationIDChangesKey;
@property (readonly) NSString *pendingReadLaterDateChangesKey;
@property (readonly) NSString *pendingDisplayDateChangesKey;
@property (readonly) NSString *pendingCategorizationChangesKey;
@property (readonly) NSString *pendingAuthenticationChangesKey;
@property (retain, nonatomic) EFCancelationToken *cancelationToken;
@property (readonly, nonatomic) EMQuery *query;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (void)_calculateAndReportChangesForPersistedMessages:(id)a0 withPendingChangesKey:(id)a1 changeBlock:(id /* block */)a2;
- (id)_filteredMessagesForPredicate:(id)a0 limit:(long long)a1;
- (void)_foundMessages:(id)a0 inRemoteSearch:(BOOL)a1;
- (void)_getInitialResults;
- (void)_performBlockAfterGenerationCheck:(id /* block */)a0 generation:(id)a1 keyPaths:(id)a2 removedMessages:(id)a3 changedMessages:(id)a4 addedMessages:(id)a5;
- (id)_persistedMessagesFromSendersWithAddresses:(id)a0;
- (void)_persistenceDidDeleteMessages:(id)a0 includeMessagesWithDeletedFlag:(BOOL)a1;
- (void)_persistenceDidReconcileJournaledMessages:(id)a0 generationWindow:(id)a1;
- (id)_predicateWithAdditionalPredicates:(id)a0;
- (void)_reportChangesForCurrentlyMatchingMessages:(id)a0 previouslyMatchingMessages:(id)a1 keyPaths:(id)a2 generation:(id)a3;
- (void)_reportChangesForPersistedMessages:(id)a0 withPendingChangesKey:(id)a1 keyPaths:(id)a2 generation:(id)a3;
- (id)_transformAndFilterMessages:(id)a0 includeDeleted:(BOOL)a1;
- (id)_unjournaledMessagesForMessages:(id)a0;
- (void)_updateDisplayDateForMessagesIfNeeded;
- (void)controller:(id)a0 messageTimerFired:(id)a1;
- (id)initWithQuery:(id)a0 initialBatchSize:(long long)a1 maximumBatchSize:(long long)a2 messagePersistence:(id)a3 hookRegistry:(id)a4 searchProvider:(id)a5 scheduler:(id)a6 remindMeNotificationController:(id)a7 delegate:(id)a8 shouldReconcileJournal:(BOOL)a9 shouldAddMessagesSynchronously:(BOOL)a10 keepMessagesInListOnBucketChange:(BOOL)a11;
- (id)messagesWithAdditionalPredicates:(id)a0 limit:(long long)a1;
- (void)persistenceDidAddMessages:(id)a0 generationWindow:(id)a1;
- (void)persistenceDidChangeBusinessIDForMessages:(id)a0 fromBusinessID:(long long)a1;
- (void)persistenceDidChangeCategorizationForMessages:(id)a0 userInitiated:(BOOL)a1 generationWindow:(id)a2;
- (void)persistenceDidChangeConversationNotificationLevel:(long long)a0 conversationID:(long long)a1 generationWindow:(id)a2;
- (void)persistenceDidChangeFlags:(id)a0 messages:(id)a1 generationWindow:(id)a2;
- (void)persistenceDidChangeGlobalMessageID:(long long)a0 orConversationID:(long long)a1 message:(id)a2 generationWindow:(id)a3;
- (void)persistenceDidChangeReadLaterDate:(id)a0 messages:(id)a1 changeIsRemote:(BOOL)a2 generationWindow:(id)a3;
- (void)persistenceDidDeleteAllMessagesInMailboxesWithURLs:(id)a0 generationWindow:(id)a1;
- (void)persistenceDidDeleteMessages:(id)a0 generationWindow:(id)a1;
- (void)persistenceDidNotChangeCategorizationForMessages:(id)a0;
- (void)persistenceDidReconcileJournaledMessages:(id)a0 generationWindow:(id)a1;
- (void)persistenceDidUpdateAuthenticationStateForMessages:(id)a0;
- (void)persistenceDidUpdateDisplayDateForMessages:(id)a0 changeIsRemote:(BOOL)a1 generation:(long long)a2;
- (void)persistenceDidUpdateProperties:(id)a0 message:(id)a1 generationWindow:(id)a2;
- (void)persistenceIsChangingConversationID:(long long)a0 messages:(id)a1 generationWindow:(id)a2;
- (void)persistenceWillChangeCategorizationForMessages:(id)a0;
- (void)persistenceWillChangeConversationID:(long long)a0 messages:(id)a1;
- (void)persistenceWillChangeFlags:(id)a0 messages:(id)a1;
- (void)persistenceWillChangeReadLaterDate:(id)a0 messages:(id)a1;
- (void)persistenceWillUpdateAuthenticationStateForMessages:(id)a0;
- (void)persistenceWillUpdateDisplayDateForMessages:(id)a0;
- (void)remoteSearchDidFindMessages:(id)a0;
- (void)remoteSearchDidFinish;
- (id)sortableMessagesWithAdditionalPredicates:(id)a0 limit:(long long)a1;

@end

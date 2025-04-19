@class NSMutableDictionary, _EDMessageQueryHelperDelegateImpl, NSObject, EDMessageQueryHelper, EDUpdateThrottler, EMMailboxScope, EMThreadReloadSummaryHelper, NSString, EMInMemoryThreadCollection, EFProcessTransaction, EDVIPManager, NSArray, EMCollectionItemIDStateCapturer;
@protocol OS_os_log, EMMessageListItemQueryResultsObserver, EFAssertableScheduler, EDSearchProvider, OS_dispatch_queue;

@interface EDInMemoryThreadQueryHandler : EDMessageRepositoryQueryHandler <EDMessageQueryHelperDelegate, EMInMemoryThreadCollectionDataSource, EMInMemoryThreadCollectionDelegate, EFLoggable, EFContentProtectionObserver, EMCollectionItemIDStateCapturerDelegate> {
    EMInMemoryThreadCollection *_threadCollection;
    NSMutableDictionary *_changesWhilePaused;
    EFProcessTransaction *_processTransaction;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) EDVIPManager *vipManager;
@property (readonly, nonatomic) id<EDSearchProvider> searchProvider;
@property (readonly, nonatomic) id<EMMessageListItemQueryResultsObserver> resultsObserverIfNotPaused;
@property (retain, nonatomic) EDMessageQueryHelper *messageQueryHelper;
@property (readonly, nonatomic) _EDMessageQueryHelperDelegateImpl *messageQueryHelperDelegateImpl;
@property (readonly, copy, nonatomic) NSArray *messageSortDescriptors;
@property (readonly, nonatomic) EDUpdateThrottler *updateThrottler;
@property (readonly, nonatomic) EMThreadReloadSummaryHelper *reloadSummaryHelper;
@property (readonly, nonatomic) id<EFAssertableScheduler> scheduler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *contentProtectionQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *resultQueue;
@property (nonatomic) BOOL didCancel;
@property (nonatomic) BOOL isInitialized;
@property (nonatomic) BOOL isPreparingFirstBatch;
@property (nonatomic) BOOL hasEverReconciledJournal;
@property (nonatomic) BOOL isPaused;
@property (nonatomic) BOOL hasChangesWhilePaused;
@property (readonly, nonatomic) EMMailboxScope *mailboxScope;
@property (readonly, nonatomic) EMCollectionItemIDStateCapturer *stateCapturer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)start;
- (void)cancel;
- (void)tearDown;
- (void)contentProtectionStateChanged:(long long)a0 previousState:(long long)a1;
- (id)labelForStateCapture;
- (id)threadsAndMessagesForObjectIDs:(id)a0;
- (void)_vipsDidChange:(id)a0;
- (void)_blockedSendersDidChange:(id)a0;
- (void)_contentProtectionChangedToLocked;
- (void)_contentProtectionChangedToUnlocked;
- (void)_createHelper;
- (id)_extaInfoPrecachedThreadsForInitialObjectIDs:(id)a0;
- (id)_extraInfoForThreadObjectIDs:(id)a0 isMove:(BOOL)a1;
- (id)_messageQueryFromThreadsQuery:(id)a0;
- (id)_predicateForMessagesInConversations:(id)a0;
- (BOOL)_queryHelperIsCurrent:(id)a0;
- (void)_refreshObserver;
- (void)_restartHelper;
- (void)collection:(id)a0 didMergeInThreadsForMove:(BOOL)a1 newObjectIDs:(id)a2 existingObjectID:(id)a3 hasChanges:(BOOL *)a4;
- (id)collection:(id)a0 messagesInConversationIDs:(id)a1 limit:(long long)a2;
- (void)collection:(id)a0 notifyOfOldestThreadsByMailboxObjectIDs:(id)a1;
- (void)collection:(id)a0 notifyReplacedExistingObjectID:(id)a1 newObjectID:(id)a2;
- (BOOL)collection:(id)a0 reportChanges:(id)a1;
- (BOOL)collection:(id)a0 reportChanges:(id)a1 reloadSummaries:(BOOL)a2;
- (BOOL)collection:(id)a0 reportDeletes:(id)a1;
- (void)didSendUpdatesInCollection:(id)a0;
- (id)initWithQuery:(id)a0 messagePersistence:(id)a1 hookRegistry:(id)a2 remindMeNotificationController:(id)a3 vipManager:(id)a4 searchProvider:(id)a5 observer:(id)a6 observationIdentifier:(id)a7 observationResumer:(id)a8 helperObserver:(id)a9;
- (id)itemIDsForStateCaptureWithErrorString:(id *)a0;
- (void)logThreadObjectIDsChangesWithMessage:(id)a0 newObjectIDs:(id)a1 beforeExistingObjectID:(id)a2;
- (void)logThreadObjectIDsWithMessage:(id)a0 objectIDs:(id)a1;
- (id)mailboxesInCollection:(id)a0;
- (id)messageListItemForObjectID:(id)a0 error:(id *)a1;
- (id)messagesForThread:(id)a0;
- (id)messagesInConversationIDs:(id)a0 limit:(long long)a1;
- (void)prepareToSendUpdatesInCollection:(id)a0;
- (void)queryHelper:(id)a0 businessIDDidChangeForMessages:(id)a1 fromBusinessID:(long long)a2;
- (void)queryHelper:(id)a0 conversationIDDidChangeForMessages:(id)a1 fromConversationID:(long long)a2;
- (void)queryHelper:(id)a0 conversationNotificationLevelDidChangeForConversation:(long long)a1 conversationID:(long long)a2;
- (void)queryHelper:(id)a0 didAddMessages:(id)a1;
- (void)queryHelper:(id)a0 didDeleteMessages:(id)a1;
- (void)queryHelper:(id)a0 didFindMessages:(id)a1 forInitialBatch:(BOOL)a2;
- (void)queryHelper:(id)a0 didUpdateMessages:(id)a1 forKeyPaths:(id)a2;
- (void)queryHelper:(id)a0 messageFlagsDidChangeForMessages:(id)a1 previousMessages:(id)a2;
- (void)queryHelper:(id)a0 objectIDDidChangeForMessage:(id)a1 oldObjectID:(id)a2 oldConversationID:(long long)a3;
- (id)queryHelperDelegate;
- (void)queryHelperDidFindAllMessages:(id)a0;
- (void)queryHelperDidFinishRemoteSearch:(id)a0;
- (void)queryHelperNeedsRestart:(id)a0;
- (void)test_tearDown;

@end

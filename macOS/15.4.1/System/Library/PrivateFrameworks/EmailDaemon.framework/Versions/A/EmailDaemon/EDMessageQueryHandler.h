@class NSMutableDictionary, EMCollectionItemIDStateCapturer, NSString, EDMessageQueryHelper, NSObject, EFDebouncer;
@protocol OS_os_log, EFScheduler, EDSearchProvider, OS_dispatch_queue, EDResumable;

@interface EDMessageQueryHandler : EDMessageRepositoryQueryHandler <EMCollectionItemIDStateCapturerDelegate, EDMessageQueryHelperDelegate, EFLoggable, EFContentProtectionObserver> {
    struct EFAtomicObject { _Atomic long long cfObject; } _updateOldestMessagesCancelationToken;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) id<EDSearchProvider> searchProvider;
@property (retain, nonatomic) EDMessageQueryHelper *currentQueryHelper;
@property (readonly, nonatomic) id<EFScheduler> scheduler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *contentProtectionQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *resultQueue;
@property (nonatomic) BOOL didCancel;
@property (nonatomic) BOOL didFindRequestedItemForInitialBatch;
@property (nonatomic) BOOL isInitialized;
@property (nonatomic) BOOL hasEverReconciledJournal;
@property (readonly, copy, nonatomic) NSMutableDictionary *oldestMessageIDsByMailboxObjectIDs;
@property (readonly, nonatomic) EMCollectionItemIDStateCapturer *stateCapturer;
@property (readonly, nonatomic) id<EDResumable> observerResumer;
@property (retain, nonatomic) EFDebouncer *resumeClientDebouncer;
@property (retain, nonatomic) id<EFScheduler> resumeClientScheduler;
@property (nonatomic) BOOL hasUrgentPredicate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)findMessagesByPreviousObjectIDForAddedMessages:(id)a0 messageSource:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)start;
- (void)cancel;
- (void)contentProtectionStateChanged:(long long)a0 previousState:(long long)a1;
- (id)labelForStateCapture;
- (void)_contentProtectionChangedToLocked;
- (void)_contentProtectionChangedToUnlocked;
- (id)_createChangesForMessagesWithConversationID:(long long)a0 block:(id /* block */)a1;
- (void)_createHelper;
- (id)_extraInfoForMessages:(id)a0 messagesToPrecache:(id)a1 outObjectIDs:(id *)a2;
- (id)_getResultsObserver;
- (void)_initializeOldestMessagesByMailbox;
- (id)_messagesBeforeMessageWithObjectID:(id)a0 fromMessagesFromQueryHelper:(id)a1 afterRequestedMessage:(id *)a2;
- (id)_messagesForInitialBatchWithMessagesFromQueryHelper:(id)a0 requestedMessage:(id *)a1;
- (id)_objectIDsAndUnreadObjectIDsFromMessages:(id)a0 unreadObjectIDs:(id *)a1;
- (id)_oldestItemQueryForMailbox:(id)a0;
- (void)_oldestMessagesByMailboxObjectIDsWasUpdated;
- (void)_oldestMessagesNeedUpdate;
- (BOOL)_queryHelperIsCurrent:(id)a0;
- (void)_reportFoundMessages:(id)a0 before:(id)a1 messagesToPrecache:(id)a2;
- (id)_requestedItemObjectID;
- (void)_restartHelper;
- (void)_updateOldestMessagesForMailboxes:(id)a0 cancelationToken:(id)a1;
- (id)findMessagesByPreviousObjectIDForAddedMessages:(id)a0 helper:(id)a1;
- (id)initWithQuery:(id)a0 messagePersistence:(id)a1 hookRegistry:(id)a2 remindMeNotificationController:(id)a3 searchProvider:(id)a4 observer:(id)a5 observationIdentifier:(id)a6 observationResumer:(id)a7;
- (id)itemIDsForStateCaptureWithErrorString:(id *)a0;
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

@end

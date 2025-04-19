@class EMThreadScope, EDThreadPersistence, EMThreadReloadSummaryHelper, NSString, NSMutableDictionary, EFCancelationToken, EMCollectionItemIDStateCapturer, NSMutableArray, NSMutableSet, EDUpdateThrottler, NSObject, EMMailboxScope;
@protocol OS_os_log, EFScheduler, EFCancelable;

@interface EDPrecomputedThreadQueryHandler : EDMessageRepositoryQueryHandler <EDMessageChangeHookResponder, EDRemindMeNotificationControllerObserver, EDThreadChangeHookResponder, EFLoggable, EMCollectionItemIDStateCapturerDelegate, EDBusinessChangeHookResponder>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) id<EFScheduler> changeScheduler;
@property (readonly, nonatomic) id<EFScheduler> backgroundWorkScheduler;
@property (retain, nonatomic) EFCancelationToken *cancelationToken;
@property (retain, nonatomic) NSMutableDictionary *pendingChanges;
@property (retain, nonatomic) NSMutableArray *pendingPositionChanges;
@property (retain, nonatomic) NSMutableSet *unreportedJournaledObjectIDs;
@property (retain, nonatomic) NSMutableDictionary *reportedJournaledObjectIDs;
@property (retain, nonatomic) NSMutableDictionary *oldestThreadObjectIDsByMailbox;
@property (retain, nonatomic) id<EFCancelable> updateOldestThreadsCancelationToken;
@property (readonly, nonatomic) EDUpdateThrottler *updateThrottler;
@property (readonly, nonatomic) EMThreadReloadSummaryHelper *reloadSummaryHelper;
@property (readonly, nonatomic) EMMailboxScope *mailboxScope;
@property (readonly, nonatomic) EMCollectionItemIDStateCapturer *stateCapturer;
@property (readonly, nonatomic) BOOL updateDisplayDate;
@property (readonly, nonatomic) EMThreadScope *threadScope;
@property (readonly, nonatomic) EDThreadPersistence *threadPersistence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)start;
- (void)cancel;
- (id)labelForStateCapture;
- (void)_addChangeToPendingChanges:(id)a0 forThreadObjectID:(id)a1;
- (id)_extaInfoPrecachedThreadsForInitialObjectIDs:(id)a0;
- (void)_flushUpdatesWithReason:(id)a0;
- (void)_getInitialResults;
- (BOOL)_isAddingOrDeletingObjectID:(id)a0;
- (id)_messageForPersistedMessage:(id)a0;
- (void)_oldestThreadsNeedUpdate;
- (void)_onScheduler:(id)a0 performCancelableBlock:(id /* block */)a1;
- (void)_persistenceIsAddingThreadWithObjectID:(id)a0;
- (void)_persistenceIsChangingThreadWithObjectID:(id)a0 changedKeyPaths:(id)a1;
- (void)_updateDisplayDateForMessagesIfNeeded;
- (void)controller:(id)a0 messageTimerFired:(id)a1;
- (id)initWithQuery:(id)a0 threadScope:(id)a1 messagePersistence:(id)a2 threadPersistence:(id)a3 hookRegistry:(id)a4 remindMeNotificationController:(id)a5 observer:(id)a6 observationIdentifier:(id)a7 observationResumer:(id)a8;
- (id)itemIDsForStateCaptureWithErrorString:(id *)a0;
- (id)messageListItemForObjectID:(id)a0 error:(id *)a1;
- (void)persistenceDidChangeBusinessIDForMessages:(id)a0 fromBusinessID:(long long)a1;
- (void)persistenceDidChangeConversationNotificationLevel:(long long)a0 conversationID:(long long)a1 generationWindow:(id)a2;
- (void)persistenceDidChangeGlobalMessageID:(long long)a0 orConversationID:(long long)a1 message:(id)a2 generationWindow:(id)a3;
- (void)persistenceDidFinishThreadUpdates;
- (void)persistenceDidUpdateProperties:(id)a0 message:(id)a1 generationWindow:(id)a2;
- (void)persistenceIsAddingThreadWithObjectID:(id)a0 journaled:(BOOL)a1 generationWindow:(id)a2;
- (void)persistenceIsChangingThreadWithObjectID:(id)a0 changedKeyPaths:(id)a1 generationWindow:(id)a2;
- (void)persistenceIsDeletingThreadWithObjectID:(id)a0 generationWindow:(id)a1;
- (void)persistenceIsMarkingThreadAsJournaledWithObjectID:(id)a0 generationWindow:(id)a1;
- (void)persistenceIsReconcilingJournaledThreadsWithObjectIDs:(id)a0 generationWindow:(id)a1;
- (void)test_tearDown;

@end

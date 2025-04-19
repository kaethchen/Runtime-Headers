@class NSString, EDRemindMeNotificationController, EDMessagePersistence, EMQuery, EMObjectID, EFLocked, NSObject, EDVIPManager, EDThreadPersistence, EDPersistenceHookRegistry, EMThreadScope;
@protocol EDResumable, OS_os_log, EMMessageListItemQueryResultsObserver, EDSearchProvider, EMMessageQueryHelperObserver_xpc, EDThreadQueryHandlerDelegate;

@interface EDThreadQueryHandler : NSObject <EDThreadChangeHookResponder, EDThreadMigratorDelegate, EMMessageListItemQueryResultsObserver, EFLoggable, EDThreadQueryHandler> {
    _Atomic char _state;
    struct atomic_flag { _Atomic BOOL _Value; } _isRunning;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) id<EMMessageListItemQueryResultsObserver> resultsObserver;
@property (readonly, nonatomic) EMObjectID *observationIdentifier;
@property (readonly, nonatomic) id<EMMessageQueryHelperObserver_xpc> helperObserver;
@property (readonly, nonatomic) EDMessagePersistence *messagePersistence;
@property (readonly, nonatomic) EDThreadPersistence *threadPersistence;
@property (readonly, nonatomic) EDPersistenceHookRegistry *hookRegistry;
@property (readonly, nonatomic) EDVIPManager *vipManager;
@property (readonly, nonatomic) id<EDSearchProvider> searchProvider;
@property (readonly, nonatomic) EDRemindMeNotificationController *remindMeNotificationController;
@property (readonly, nonatomic) EFLocked *underlyingHandler;
@property (readonly, weak, nonatomic) id<EDThreadQueryHandlerDelegate> delegate;
@property (readonly, nonatomic) id<EDResumable> observerResumer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) EMThreadScope *threadScope;
@property (readonly, copy, nonatomic) EMQuery *query;

- (void).cxx_destruct;
- (BOOL)start;
- (void)cancel;
- (BOOL)isStarted;
- (void)tearDown;
- (void)_tearDownWithQueryHandlerBlock:(id /* block */)a0;
- (void)persistenceDidResetThreadScope:(id)a0;
- (id)_addSnippetHintsToExtraInfo:(id)a0;
- (void)_createUnderlyingHandlerIfNeededAndStart;
- (void)checkIfPrecomputedStateIsAvailable;
- (id)inMemoryMessageObjectIDsForThread:(id)a0;
- (id)initWithQuery:(id)a0 messagePersistence:(id)a1 threadPersistence:(id)a2 hookRegistry:(id)a3 vipManager:(id)a4 searchProvider:(id)a5 remindMeNotificationController:(id)a6 observer:(id)a7 observationIdentifier:(id)a8 helperObserver:(id)a9 delegate:(id)a10 observationResumer:(id)a11;
- (id)messageListItemForObjectID:(id)a0 isPersisted:(BOOL *)a1 error:(id *)a2;
- (id)messageReconciliationQueries;
- (id)messagesInConversationIDs:(id)a0 limit:(long long)a1;
- (void)observer:(id)a0 matchedAddedObjectIDs:(id)a1 after:(id)a2 extraInfo:(id)a3;
- (void)observer:(id)a0 matchedAddedObjectIDs:(id)a1 before:(id)a2 extraInfo:(id)a3;
- (void)observer:(id)a0 matchedChangesForObjectIDs:(id)a1;
- (void)observer:(id)a0 matchedDeletedObjectIDs:(id)a1;
- (void)observer:(id)a0 matchedMovedObjectIDs:(id)a1 after:(id)a2 extraInfo:(id)a3;
- (void)observer:(id)a0 matchedMovedObjectIDs:(id)a1 before:(id)a2 extraInfo:(id)a3;
- (void)observer:(id)a0 matchedOldestItemsUpdatedForMailboxes:(id)a1;
- (void)observer:(id)a0 replacedExistingObjectID:(id)a1 withNewObjectID:(id)a2;
- (void)observer:(id)a0 wasUpdated:(id)a1;
- (void)observerDidFinishInitialLoad:(id)a0;
- (void)observerDidFinishRemoteSearch:(id)a0;
- (void)observerWillRestart:(id)a0;
- (void)requestSummaryForMessageObjectID:(id)a0;
- (void)test_tearDown;
- (void)threadMigratorDidComplete:(id)a0;
- (id)threadReconciliationQueries;
- (void)triggerMigration;

@end

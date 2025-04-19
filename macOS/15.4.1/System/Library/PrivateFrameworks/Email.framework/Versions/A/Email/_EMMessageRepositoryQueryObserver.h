@class NSString, EMInMemoryThreadCollection, EMQuery, EMObjectID, EMInMemoryThreadQueryHandler, EFCancelationToken, _EMMessageRepositoryMessageQueryHelperObserver, EMMessageRepository;
@protocol EFScheduler, EMInMemoryThreadQueryHandlerStorable, EMQueryResultsObserver, EFCancelable;

@interface _EMMessageRepositoryQueryObserver : NSObject <EMMessageListItemQueryResultsObserver, EMRecoverableObserver> {
    EMMessageRepository *_repository;
    EMQuery *_query;
    id<EMQueryResultsObserver> _observer;
    EFCancelationToken *_token;
    id<EFCancelable> _remoteCancelable;
    id<EFScheduler> _recoveryScheduler;
    _EMMessageRepositoryMessageQueryHelperObserver *_queryHelperObserver;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _recoveryLock;
    long long _recoveryAttempt;
    BOOL _recoveryIsScheduled;
    id<EMInMemoryThreadQueryHandlerStorable> _queryHandlerStorable;
}

@property (readonly, nonatomic) EMObjectID *observationIdentifier;
@property (readonly, nonatomic) EMInMemoryThreadCollection *threadCollection;
@property (weak, nonatomic) EMInMemoryThreadQueryHandler *inMemoryThreadQueryHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
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
- (void)clearInMemoryThreadDataIfNeeded;
- (id)_createInMemoryThreadQueryHandler;
- (void)_createInMemoryThreadQueryHandlerIfNeeded;
- (void)_performQueryWithRemoteConnection:(id)a0 forRecovery:(BOOL)a1;
- (id)initWithRepository:(id)a0 query:(id)a1 observer:(id)a2 queryHandlerStorable:(id)a3;
- (void)performWithRemoteConnection:(id)a0;
- (id)queryHelperObserver;
- (void)recoverWithRemoteConnection:(id)a0;
- (void)refreshQueryWithRemoteConnection:(id)a0;
- (id)trampoliningObserver;

@end

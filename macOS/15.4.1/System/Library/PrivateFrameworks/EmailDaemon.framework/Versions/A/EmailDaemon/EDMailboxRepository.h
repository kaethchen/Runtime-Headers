@class EDMailboxPersistence, NSString, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface EDMailboxRepository : NSObject <EFLoggable, EMMailboxRepositoryInterface>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) EDMailboxPersistence *mailboxPersistence;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serializationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)_performCreateMailboxChangeAction:(id)a0;
- (BOOL)_performDeleteMailboxChangeAction:(id)a0;
- (BOOL)_performMoveMailboxChangeAction:(id)a0;
- (BOOL)_performRenameMailboxChangeAction:(id)a0;
- (void)cancelObservation:(id)a0;
- (void)getAllMailboxObjectIDsWithCompletion:(id /* block */)a0;
- (void)getMailboxesWithCompletion:(id /* block */)a0;
- (id)initWithMailboxPersistence:(id)a0;
- (void)mailboxObjectIDsForMailboxType:(long long)a0 completionHandler:(id /* block */)a1;
- (void)mailboxTypeForMailboxObjectID:(id)a0 completionHandler:(id /* block */)a1;
- (void)performMailboxChangeAction:(id)a0 completionHandler:(id /* block */)a1;
- (void)recordFrecencyEventWithMailboxesWithIDs:(id)a0;
- (void)refreshMailboxList:(long long)a0;
- (void)startObservingMailboxChangesWithChangeObserver:(id)a0 observationIdentifier:(id)a1;
- (void)testRecordFrecencyEventsForAllMailboxes;
- (void)testResetFrecencyForAllMailboxes;

@end

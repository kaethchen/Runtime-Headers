@class NSMutableDictionary, NSString, ECLocalMessageActionResults, IMAPTaskManager, NSURL, NSObject, NSMutableArray;
@protocol OS_os_log, IMAPMessageDataSource;

@interface IMAPLocalActionSyncTask : IMAPTask <EFSignpostable, IMAPMessageActionSyncOperationDelegate, IMAPMessageActionPersistResultsOperationDelegate, IMAPGetNewLocalActionsOperationDelegate> {
    NSMutableArray *_messageActions;
    NSMutableDictionary *_progressesByActionIDs;
}

@property (class, readonly) NSObject<OS_os_log> *signpostLog;

@property (retain, nonatomic) IMAPTaskManager *taskManager;
@property (retain, nonatomic) NSURL *currentMailboxURL;
@property (retain, nonatomic) id<IMAPMessageDataSource> currentDataSource;
@property (nonatomic) BOOL actionOperationRunning;
@property (nonatomic) BOOL needToCheckForActions;
@property (nonatomic) BOOL needToPersistResults;
@property (retain, nonatomic) ECLocalMessageActionResults *resultsToPersist;
@property (readonly) unsigned long long signpostID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)end;
- (void)operationFinished:(id)a0;
- (id)initWithMailboxName:(id)a0;
- (void)addLocalAction:(id)a0;
- (void)_createProgressForAction:(id)a0;
- (void)checkForNewMessageActions;
- (void)getNewMessageActionsOperation:(id)a0 didGetActions:(id)a1;
- (id)initWithTaskManager:(id)a0;
- (void)messageActionSyncOperationCompleted:(id)a0 results:(id)a1;
- (id)nextNetworkOperation;
- (id)nextPersistenceOperation;
- (void)recalculatePriorities;
- (void)_updateMailboxIfNeeded;
- (id)mailboxNameWithoutPII;
- (void)persistActionResultsOperationCompleted:(id)a0 needToReplayAction:(BOOL)a1 messagesNeedingBodies:(id)a2;

@end

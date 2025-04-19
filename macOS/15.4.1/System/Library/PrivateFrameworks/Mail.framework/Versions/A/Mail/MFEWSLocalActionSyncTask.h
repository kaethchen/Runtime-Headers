@class NSString, ECLocalMessageActionResults, NSMutableDictionary, NSMutableArray;

@interface MFEWSLocalActionSyncTask : MFEWSTask <MFEWSGetNewMessageActionsOperationDelegate, MFEWSMessageActionSyncOperationDelegate, MFEWSPersistActionResultsOperationDelegate> {
    NSMutableArray *_messageActions;
    NSMutableDictionary *_progressesByActionIDs;
}

@property (nonatomic) BOOL actionOperationRunning;
@property (nonatomic) BOOL needToCheckForActions;
@property (nonatomic) BOOL needToPersistResults;
@property (retain, nonatomic) ECLocalMessageActionResults *resultsToPersist;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)end;
- (void)addLocalAction:(id)a0;
- (void)_createProgressForAction:(id)a0;
- (void)checkForNewMessageActions;
- (void)getNewMessageActionsOperation:(id)a0 didGetActions:(id)a1;
- (id)initWithAccountName:(id)a0;
- (void)messageActionSyncOperationCompleted:(id)a0 results:(id)a1;
- (id)nextNetworkOperation;
- (id)nextPersistenceOperation;
- (void)persistActionResultsOperationCompleted:(id)a0 needToReplayAction:(BOOL)a1;
- (void)recalculatePriorities;

@end

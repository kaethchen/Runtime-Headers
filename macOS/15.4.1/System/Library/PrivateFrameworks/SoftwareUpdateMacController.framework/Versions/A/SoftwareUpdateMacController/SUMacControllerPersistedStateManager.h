@class SUCoreFSM, SUCorePersistedState, NSObject;
@protocol OS_dispatch_queue;

@interface SUMacControllerPersistedStateManager : NSObject

@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (retain, nonatomic) SUCoreFSM *stateMachine;
@property (retain, nonatomic) SUCorePersistedState *persistedState;

+ (id)_getSUMacControllerPersistedStateManagerStateTable;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)_isDownloadedMAAsset:(id)a0 assetDesc:(id)a1;
- (long long)actionPersistDecidePhase:(id)a0 error:(id *)a1;
- (id)_constructFromDescriptor:(id)a0 reloadedSU:(id)a1 reloadedBrain:(id)a2 reloadedSFR:(id)a3;
- (BOOL)_isPersistedStateAvailable;
- (void)_registerStateMachineHandlers;
- (id)_stateSafeLoadPersistedState;
- (void)_stateSafeResetPersistedState;
- (id)_validatePersistedEvent:(id)a0;
- (long long)actionPersistCancelledUpdate:(id)a0 error:(id *)a1;
- (long long)actionPersistDownloadFinished:(id)a0 error:(id *)a1;
- (long long)actionPersistLoadDownloaded:(id)a0 error:(id *)a1;
- (long long)actionPersistLoadPersistedState:(id)a0 error:(id *)a1;
- (long long)actionPersistLoadPrepared:(id)a0 error:(id *)a1;
- (long long)actionPersistPrepareFinished:(id)a0 error:(id *)a1;
- (long long)actionPersistPrepareStarted:(id)a0 error:(id *)a1;
- (long long)actionPersistReloadAssets:(id)a0 error:(id *)a1;
- (long long)actionPersistReportDownloadValid:(id)a0 error:(id *)a1;
- (long long)actionPersistReportFailed:(id)a0 error:(id *)a1;
- (long long)actionPersistReportInvalid:(id)a0 error:(id *)a1;
- (long long)actionPersistReportPrepareValid:(id)a0 error:(id *)a1;
- (long long)actionUnknownAction:(id)a0 error:(id *)a1;
- (id)currentPersistedVersionNumber;
- (void)currentUpdateCancelled;
- (void)loadPersistedStateWithCompletion:(id /* block */)a0;
- (long long)performAction:(id)a0 onEvent:(id)a1 inState:(id)a2 withInfo:(id)a3 nextState:(id)a4 error:(id *)a5;
- (void)persistDownloadFinishedForClient:(id)a0 updateUUID:(id)a1 descriptor:(id)a2 overrides:(id)a3;
- (void)persistPrepareFinishedForClient:(id)a0 updateUUID:(id)a1 descriptor:(id)a2 overrides:(id)a3;
- (void)persistPrepareStarted;

@end

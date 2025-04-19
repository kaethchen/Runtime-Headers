@class SUCoreUpdate, NSString, SUCoreFSM, SUMacControllerClient, SUCoreLog, SUMacControllerScanManager, NSObject, NSMutableArray, SUCoreScan, SUCoreMobileAsset, SUCoreMSU;
@protocol OS_dispatch_queue;

@interface SUMacControllerSplatRollbackManager : NSObject <SUCoreMSUDelegate, SUCoreUpdateDelegate>

@property (readonly, retain, nonatomic) SUCoreLog *logger;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (retain, nonatomic) SUCoreFSM *stateMachine;
@property (readonly, retain, nonatomic) SUMacControllerScanManager *scanManager;
@property (retain, nonatomic) NSMutableArray *currentRequests;
@property (retain, nonatomic) NSString *rollbackUUID;
@property (retain, nonatomic) SUCoreMSU *coreMSU;
@property (retain, nonatomic) SUCoreScan *coreScanner;
@property (retain, nonatomic) SUCoreMobileAsset *coreMobileAsset;
@property (retain, nonatomic) SUCoreUpdate *coreUpdate;
@property (retain, nonatomic) SUMacControllerClient *macScanClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_getSUMacControllerSplatRollbackManagerStateTable;

- (void).cxx_destruct;
- (id)summary;
- (void)_callClientCompletionBlocksWithSuccess:(BOOL)a0 error:(id)a1;
- (void)_registerStateMachineHandlers;
- (long long)actionSplatRollbackFailed:(id)a0 error:(id *)a1;
- (long long)actionSplatRollbackIsInstalled:(id)a0 error:(id *)a1;
- (long long)actionSplatRollbackLoadBrain:(id)a0 error:(id *)a1;
- (long long)actionSplatRollbackRequest:(id)a0 error:(id *)a1;
- (long long)actionSplatRollbackScanForUpdates:(id)a0 error:(id *)a1;
- (long long)actionSplatRollbackSecondRequest:(id)a0 error:(id *)a1;
- (long long)actionSplatRollbackUpdate:(id)a0 error:(id *)a1;
- (long long)actionSplatRollbackUpdateComplete:(id)a0 error:(id *)a1;
- (long long)actionUnknownAction:(id)a0 error:(id *)a1;
- (id)initWithName:(id)a0 scanManager:(id)a1;
- (void)msuAnomaly:(id)a0;
- (void)msuWakeupPreflightFailed:(id)a0;
- (void)msuWakeupPreflighted;
- (long long)performAction:(id)a0 onEvent:(id)a1 inState:(id)a2 withInfo:(id)a3 nextState:(id)a4 error:(id *)a5;
- (void)queryCurrentStateWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)rollbackAttemptFailed:(id)a0 withError:(id)a1;
- (void)rollbackSplatUpdateWithClientRequest:(id)a0 completion:(id /* block */)a1;
- (void)updateAnomaly:(id)a0;
- (void)updateRolledBack:(id)a0;

@end

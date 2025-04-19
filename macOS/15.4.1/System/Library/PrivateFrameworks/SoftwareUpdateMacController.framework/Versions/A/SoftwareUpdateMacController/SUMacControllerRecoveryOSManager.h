@class SUCoreFSM, SUCoreLog, NSObject, SUMacControllerRecoveryOSEventInfo;
@protocol OS_dispatch_queue;

@interface SUMacControllerRecoveryOSManager : NSObject

@property (readonly, retain, nonatomic) SUCoreLog *logger;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (retain, nonatomic) SUCoreFSM *stateMachine;
@property (retain, nonatomic) SUMacControllerRecoveryOSEventInfo *currentEvent;
@property (retain, nonatomic) SUMacControllerRecoveryOSEventInfo *pendingEvent;

+ (id)sharedManager;
+ (id)_getSUMacControllerRecoveryOSManagerStateTable;
+ (BOOL)recoveryOSUpdateSupportedWithOverrides:(id)a0 coreDescriptor:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)summary;
- (long long)actionRecoveryCancelling:(id)a0 error:(id *)a1;
- (void)_callCompletion:(id /* block */)a0 success:(BOOL)a1 required:(BOOL)a2 updateInfo:(id)a3 error:(id)a4;
- (void)_callDownloadProgressCallbackFromEventInfo:(id)a0 percentComplete:(double)a1;
- (void)_callInstallProgressCallbackFromEventInfo:(id)a0 percentComplete:(double)a1;
- (void)_callProgressCallbackFromEventInfo:(id)a0 progress:(id)a1;
- (void)_registerStateMachineHandlers;
- (long long)actionRecoveryDownloadUpdate:(id)a0 error:(id *)a1;
- (long long)actionRecoveryInstallComplete:(id)a0 error:(id *)a1;
- (long long)actionRecoveryInstallUpdate:(id)a0 error:(id *)a1;
- (long long)actionRecoveryLoadBrain:(id)a0 error:(id *)a1;
- (long long)actionRecoveryLocatedUpdate:(id)a0 error:(id *)a1;
- (long long)actionRecoveryQueryUpdate:(id)a0 error:(id *)a1;
- (long long)actionRecoveryRequestCancelInstall:(id)a0 error:(id *)a1;
- (long long)actionRecoveryRequestCancelLocated:(id)a0 error:(id *)a1;
- (long long)actionRecoveryRequestCancelScan:(id)a0 error:(id *)a1;
- (long long)actionRecoverySetupDownload:(id)a0 error:(id *)a1;
- (long long)actionRecoveryStartupManager:(id)a0 error:(id *)a1;
- (long long)actionRecoveryUpdateCancelled:(id)a0 error:(id *)a1;
- (long long)actionRecoveryUpdateCompleted:(id)a0 error:(id *)a1;
- (long long)actionRecoveryUpdateNoCancelNeeded:(id)a0 error:(id *)a1;
- (long long)actionUnknownAction:(id)a0 error:(id *)a1;
- (id)authenticationHeaderFromEvent:(id)a0;
- (void)cancelRecoveryOSUpdateWithCompletion:(id /* block */)a0;
- (void)installRecoveryOSForCoreDescriptor:(id)a0 coreSFRDescriptor:(id)a1 withOverrides:(id)a2 progressCallback:(id /* block */)a3 completion:(id /* block */)a4;
- (void)locateRecoveryOSForCoreDescriptor:(id)a0 coreSFRDescriptor:(id)a1 withOverrides:(id)a2 completion:(id /* block */)a3;
- (long long)performAction:(id)a0 onEvent:(id)a1 inState:(id)a2 withInfo:(id)a3 nextState:(id)a4 error:(id *)a5;
- (void)queryCurrentStateWithOptions:(id)a0 completion:(id /* block */)a1;
- (id)recoveryOSUpdateOptionsFromEvent:(id)a0;
- (id)sanitizeOptionsForLogging:(id)a0;

@end

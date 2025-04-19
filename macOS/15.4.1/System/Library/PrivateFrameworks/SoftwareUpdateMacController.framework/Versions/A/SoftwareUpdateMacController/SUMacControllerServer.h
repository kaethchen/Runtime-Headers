@class SUCoreConnectServerPolicy, NSString, SUCoreConnectServer, SUCoreLog, SUMacController, NSObject;
@protocol OS_dispatch_queue;

@interface SUMacControllerServer : NSObject <SUCoreConnectServerDelegate>

@property (readonly, retain, nonatomic) SUCoreLog *logger;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *controllerAccessQueue;
@property (retain, nonatomic) SUMacController *controller;
@property (retain, nonatomic) SUCoreConnectServer *coreServer;
@property (retain, nonatomic) SUCoreConnectServerPolicy *serverConnectionPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)initializeServer;

- (id)init;
- (void).cxx_destruct;
- (id)summary;
- (void)_handleCommandCancelCurrentUpdateFromMessage:(id)a0 proxyObject:(id)a1 reply:(id /* block */)a2;
- (void)_handleCommandRollbackSplatUpdateFromMessage:(id)a0 proxyObject:(id)a1 reply:(id /* block */)a2;
- (void)_callReloadCompletionBlock:(id /* block */)a0 withError:(id)a1;
- (void)_handleCommandAdoptSimulationsFromMessage:(id)a0 proxyObject:(id)a1 reply:(id /* block */)a2;
- (void)_handleCommandApplyUpdateFromMessage:(id)a0 proxyObject:(id)a1 reply:(id /* block */)a2;
- (void)_handleCommandCommitStashFromMessage:(id)a0 proxyObject:(id)a1 reply:(id /* block */)a2;
- (void)_handleCommandDocumentationFromMessage:(id)a0 proxyObject:(id)a1 reply:(id /* block */)a2;
- (void)_handleCommandDownloadAndPrepareUpdateFromMessage:(id)a0 proxyObject:(id)a1 reply:(id /* block */)a2;
- (void)_handleCommandDownloadSFRUpdateFromMessage:(id)a0 proxyObject:(id)a1 reply:(id /* block */)a2;
- (void)_handleCommandDownloadUpdateFromMessage:(id)a0 proxyObject:(id)a1 reply:(id /* block */)a2;
- (void)_handleCommandPerformSemiSplatFromMessage:(id)a0 proxyObject:(id)a1 reply:(id /* block */)a2;
- (void)_handleCommandPingFromMessage:(id)a0 proxyObject:(id)a1 reply:(id /* block */)a2;
- (void)_handleCommandPreparePackageFromMessage:(id)a0 proxyObject:(id)a1 reply:(id /* block */)a2;
- (void)_handleCommandPrepareUpdateFromMessage:(id)a0 proxyObject:(id)a1 reply:(id /* block */)a2;
- (void)_handleCommandPrerequisiteCheckFromMessage:(id)a0 proxyObject:(id)a1 reply:(id /* block */)a2;
- (void)_handleCommandQueryStateFromMessage:(id)a0 proxyObject:(id)a1 reply:(id /* block */)a2;
- (void)_handleCommandReleaseControlFromMessage:(id)a0 proxyObject:(id)a1 reply:(id /* block */)a2;
- (void)_handleCommandReloadFromMessage:(id)a0 proxyObject:(id)a1 reply:(id /* block */)a2;
- (void)_handleCommandRequestControlFromMessage:(id)a0 proxyObject:(id)a1 reply:(id /* block */)a2;
- (void)_handleCommandScanForSFRFromMessage:(id)a0 proxyObject:(id)a1 reply:(id /* block */)a2;
- (void)_handleCommandScanForSplatFromMessage:(id)a0 proxyObject:(id)a1 reply:(id /* block */)a2;
- (void)_handleCommandScanFromMessage:(id)a0 proxyObject:(id)a1 reply:(id /* block */)a2;
- (void)_handleCommandUpdateConfigWithDefaultsFromMessage:(id)a0 proxyObject:(id)a1 reply:(id /* block */)a2;
- (void)_handleCommandWaitForControllerSetupFromMessage:(id)a0 proxyObject:(id)a1 reply:(id /* block */)a2;
- (void)_handleCommandWakeupUpdateBrainFromMessage:(id)a0 proxyObject:(id)a1 reply:(id /* block */)a2;
- (void)_initializeController;
- (void)_initializeCoreServer;
- (void)_initializeSUCore;
- (void)_initializeServerConnectionPolicy;
- (void)_stateSafeInitializeController;
- (void)connectionClosedForClientID:(id)a0;
- (void)handleMessage:(id)a0 proxyObject:(id)a1 reply:(id /* block */)a2;
- (void)sendDelegateCallbackReadyForClientID:(id)a0;

@end

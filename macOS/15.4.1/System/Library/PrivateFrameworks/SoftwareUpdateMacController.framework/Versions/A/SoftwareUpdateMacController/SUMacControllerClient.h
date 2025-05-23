@class NSObject, NSString, NSDictionary, SUCoreLog, SUCoreDiag, SUCoreConnectClientPolicy, SUCoreConnectClient;
@protocol OS_dispatch_queue, SUMacControllerDelegate;

@interface SUMacControllerClient : NSObject <SUCoreConnectClientDelegate>

@property (nonatomic) unsigned long long requestCookieCounter;
@property (readonly, retain, nonatomic) NSString *clientID;
@property (readonly, retain, nonatomic) SUCoreConnectClientPolicy *coreConnectClientPolicy;
@property (readonly, retain, nonatomic) SUCoreConnectClient *coreConnectClient;
@property (readonly, retain, nonatomic) SUCoreLog *logger;
@property (readonly, weak, nonatomic) id<SUMacControllerDelegate> delegate;
@property (readonly, retain, nonatomic) NSString *sender;
@property (readonly, retain, nonatomic) SUCoreDiag *diag;
@property (readonly, retain, nonatomic) NSString *clientCookie;
@property (nonatomic) long long accessControlPriority;
@property (retain, nonatomic) NSDictionary *accessControlAdditionalContext;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *clientCompletionQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)handleMessage:(id)a0 reply:(id /* block */)a1;
- (id)summary;
- (void)connectionClosed;
- (void)handleResponse:(id)a0 error:(id)a1;
- (void)applyDescriptor:(id)a0 overrides:(id)a1 completion:(id /* block */)a2;
- (void)applyDescriptor:(id)a0 overrides:(id)a1 progressBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (void)cancelCurrentUpdateWithOverrides:(id)a0 completion:(id /* block */)a1;
- (void)commitStashCommitOnlyForDescriptor:(id)a0 overrides:(id)a1 progressBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (void)commitStashForDescriptor:(id)a0 overrides:(id)a1 progressBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (void)createAndPersistStashForDescriptor:(id)a0 overrides:(id)a1 progressBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (void)documentationForBaseOSWithOverrides:(id)a0 completion:(id /* block */)a1;
- (void)documentationForSplatWithOverrides:(id)a0 completion:(id /* block */)a1;
- (id)initWithClientID:(id)a0 delegate:(id)a1;
- (void)performSemiSplatForDescriptor:(id)a0 overrides:(id)a1 completion:(id /* block */)a2;
- (void)prepareUpdateDescriptor:(id)a0 overrides:(id)a1 progressBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (void)queryCurrentStateWithCompletion:(id /* block */)a0;
- (void)rollbackSplatUpdateWithOverrides:(id)a0 completion:(id /* block */)a1;
- (void)scanForUpdateWithOverrides:(id)a0 completion:(id /* block */)a1;
- (id)newPackageDescriptorWithUpdateBrainPath:(id)a0 updateBundlePath:(id)a1 error:(id *)a2;
- (void)_callCommandCompletion:(id /* block */)a0 withError:(id)a1 logKey:(id)a2 command:(id)a3 requestCookie:(id)a4;
- (void)_commitStashWithCommand:(id)a0 forDescriptor:(id)a1 overrides:(id)a2 progressBlock:(id /* block */)a3 completion:(id /* block */)a4;
- (void)_documentationRestrictingToType:(id)a0 withOverrides:(id)a1 completion:(id /* block */)a2;
- (void)_handleDelegateReady:(id)a0;
- (void)_initializeClientConnectionPolicyClassAllowlists;
- (id)_newClientContext;
- (id)_newPackageDescriptorWithUpdateBrainPath:(id)a0 updateBundlePath:(id)a1 sfrBundlePath:(id)a2 error:(id *)a3;
- (id)_newProxyObjectForProgressBlock:(id /* block */)a0 logKey:(id)a1 requestCookie:(id)a2;
- (id)_newRequestCookie;
- (void)adoptSimulationsAtPath:(id)a0 completion:(id /* block */)a1;
- (void)documentationWithOverrides:(id)a0 completion:(id /* block */)a1;
- (void)downloadSFRFromUpdateDescriptor:(id)a0 overrides:(id)a1 progressBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (void)downloadSFRFromUpdateDescriptor:(id)a0 overrides:(id)a1 progressBlock:(id /* block */)a2 pathCompletion:(id /* block */)a3;
- (void)downloadUpdateDescriptor:(id)a0 overrides:(id)a1 progressBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (id)initWithClientID:(id)a0 delegate:(id)a1 completionQueue:(id)a2;
- (id)initWithClientID:(id)a0 delegate:(id)a1 serviceName:(id)a2;
- (id)initWithClientID:(id)a0 delegate:(id)a1 serviceName:(id)a2 completionQueue:(id)a3;
- (id)newPackageDescriptorWithUpdateBrainPath:(id)a0 sfrBundlePath:(id)a1 error:(id *)a2;
- (id)newPackageDescriptorWithUpdateBrainPath:(id)a0 updateBundlePath:(id)a1 sfrBundlePath:(id)a2 error:(id *)a3;
- (void)pingDaemonWithCompletion:(id /* block */)a0;
- (void)prepareDownloadedUpdateDescriptor:(id)a0 overrides:(id)a1 progressBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (void)preparePackageDescriptor:(id)a0 overrides:(id)a1 progressBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (void)prerequisiteCheckForDescriptor:(id)a0 overrides:(id)a1 progressBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (void)queryCurrentStateWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)releaseControlWithCompletion:(id /* block */)a0;
- (void)reloadControllerWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)requestControlWithCompletion:(id /* block */)a0;
- (void)rollbackSplatUpdateWithOverrides:(id)a0 progressBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)scanForSFRUpdateWithTargetRestoreVersion:(id)a0 targetBuildVersion:(id)a1 targetProductVersion:(id)a2 overrides:(id)a3 progressBlock:(id /* block */)a4 completion:(id /* block */)a5;
- (void)scanForSplatUpdateWithOverrides:(id)a0 completion:(id /* block */)a1;
- (void)scanForSplatUpdateWithOverrides:(id)a0 progressBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)scanForUpdateWithOverrides:(id)a0 progressBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (id)summaryWithRequestCookie:(id)a0;
- (void)updateConfigWithDefaults:(id)a0 completion:(id /* block */)a1;
- (void)waitForControllerSetupCompleteWithCompletion:(id /* block */)a0;
- (void)wakeupUpdateBrainForDescriptor:(id)a0 overrides:(id)a1 progressBlock:(id /* block */)a2 completion:(id /* block */)a3;

@end

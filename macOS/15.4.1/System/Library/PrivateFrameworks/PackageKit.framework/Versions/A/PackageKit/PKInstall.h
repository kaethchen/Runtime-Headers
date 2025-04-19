@class NSError, PKInstallSandbox, NSArray, NSSet, PKInstallRequest, PKInstallOperationController, NSObject, PKInstallAnalyzer;
@protocol OS_dispatch_queue;

@interface PKInstall : NSObject {
    PKInstallRequest *_installRequest;
    id _delegate;
    PKInstallSandbox *_installSandbox;
    PKInstallAnalyzer *_installAnalyzer;
    PKInstallOperationController *_installController;
    NSObject<OS_dispatch_queue> *_installControllerUpdateQueue;
    BOOL _isCancelled;
    int _installState;
    NSArray *_clientSideRegistrationPaths;
    NSSet *_previousPackageIdentifiersSharingGroupsWithCurrentRequest;
}

@property (getter=isDone) BOOL done;
@property (retain) NSError *error;
@property BOOL installStarted;

+ (BOOL)_DebuggingQoSEnabled;

- (void)dealloc;
- (int)installState;
- (BOOL)cancel;
- (double)estimatedTimeRemaining;
- (id)request;
- (double)progressValue;
- (void)_releaseResources;
- (id)initWithRequest:(id)a0 delegate:(id)a1 error:(id *)a2;
- (void)_clearResponsibilityForClientAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)_currentPackageSpecifier;
- (void)_handleCanCancelDidChange:(id)a0;
- (id)_installController;
- (void)_installMain:(id)a0;
- (void)_installRejectedWithError:(id)a0;
- (id)_previousPackageIdentifiersSharingGroupsWithCurrentRequest;
- (void)_recordInstallationAnalyticsWithInstallResult:(BOOL)a0;
- (void)_setInstallController:(id)a0;
- (void)_setResponsibilityForClientAuditToken:(struct { unsigned int x0[8]; })a0;
- (void)_startWithQualityOfServiceClass:(unsigned int)a0;
- (BOOL)canCancel;
- (void)clearResponsibilityFromClient;
- (void)clearResponsibilityHostedTeam;
- (id)registrationPaths;
- (void)setResponsibilityHostedTeamToPackageTeamID;
- (void)setResponsibilityToClient;

@end

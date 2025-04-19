@class NSDate, NSString, CPLSyncSession, CPLScopeFilter, CPLEngineSyncTask, NSEnumerator, CPLEngineLibrary, CPLBackgroundActivity, NSObject;
@protocol CPLSyncSessionConfiguration, CPLEngineForceSyncTaskDelegate, CPLEngineStoreUserIdentifier, OS_dispatch_queue;

@interface CPLEngineForceSyncTask : CPLForceSyncTask <CPLEngineSyncTaskDelegate, CPLSyncSessionConfiguration> {
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _currentTaskLock;
    BOOL _reallyLaunched;
    BOOL _reallyCancelled;
    CPLEngineSyncTask *_currentTask;
    CPLSyncSession *_fakeSession;
    NSEnumerator *_syncTaskEnumerator;
    id<CPLSyncSessionConfiguration> _configuration;
}

@property (retain, nonatomic) id<CPLEngineStoreUserIdentifier> transportUserIdentifier;
@property (readonly, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) CPLScopeFilter *filter;
@property (retain, nonatomic) CPLEngineLibrary *engineLibrary;
@property (weak, nonatomic) id<CPLEngineForceSyncTaskDelegate> delegate;
@property (copy, nonatomic) id /* block */ taskDidFinishWithErrorBlock;
@property (retain, nonatomic) CPLBackgroundActivity *taskActivity;
@property (readonly, nonatomic) BOOL forBackup;
@property (readonly, nonatomic) BOOL forDownload;
@property (readonly, nonatomic) BOOL forcingProcessedStagedScopes;
@property (nonatomic) BOOL bypassForceSyncLimitations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BOOL allowsLocalConflictResolutionWhenOverQuota;
@property (readonly) BOOL allowsLocalConflictResolution;
@property (readonly) long long maximumComputeStatesToUploadPerBatch;
@property (readonly) BOOL isComputeStateTaskUploadEnabled;
@property (readonly, nonatomic) BOOL shouldCheckEPPCapability;

- (void)dealloc;
- (void).cxx_destruct;
- (id)redactedDescription;
- (void)_finishWithError:(id)a0;
- (void)task:(id)a0 didFinishWithError:(id)a1;
- (void)cancelTask;
- (id)_phaseDescription;
- (id)_currentTask;
- (void)_dispatchNextSyncTask;
- (void)_dispatchSyncTask:(id)a0;
- (void)_dropCurrentTask;
- (id)initWithScopeIdentifiers:(id)a0 engineLibrary:(id)a1 filter:(id)a2 delegate:(id)a3;
- (void)launchTask;
- (void)reallyCancel;
- (void)reallyLaunch;
- (void)task:(id)a0 didProgress:(float)a1 userInfo:(id)a2;

@end

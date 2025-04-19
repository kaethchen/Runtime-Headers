@class NSString, NSTimer;
@protocol WBSCloudHistoryServiceProtocol;

@interface CloudHistorySyncPlanner : NSObject <WBTabGroupManagerObserver> {
    id<WBSCloudHistoryServiceProtocol> _cloudHistory;
    BOOL _isCloudHistoryEnabled;
    BOOL _isMonitoringForTriggersAndSyncAttemptNotifications;
    NSTimer *_historyItemsAddedOrChangedIdleTimer;
    NSTimer *_historyItemsRemovedIdleTimer;
    BOOL _ignoresDisplaysDidSleepNotification;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::default_delete<SafariShared::SuddenTerminationDisabler>> { struct __compressed_pair<SafariShared::SuddenTerminationDisabler *, std::default_delete<SafariShared::SuddenTerminationDisabler>> { struct SuddenTerminationDisabler *__value_; } __ptr_; } _pendingCloudOperationSuddenTerminationDisabler;
    NSTimer *_saveChangesBeforeTerminationTimeoutTimer;
}

@property (readonly, nonatomic, getter=isCloudHistoryEnabled) BOOL cloudHistoryEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlanner;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)_sync;
- (void)_cloudHistoryConfigurationChanged:(id)a0;
- (void)_historyItemsWereRemoved:(id)a0;
- (void)_historyWasCleared:(id)a0;
- (void)_cloudHistoryConfigurationDidFullyConfigure:(id)a0;
- (void)_cloudHistorySaveAttemptDidComplete:(id)a0;
- (void)_displaysDidSleep:(id)a0;
- (void)_displaysDidWake:(id)a0;
- (void)_fetchDateOfNextPermittedSaveChangesAttemptWithCompletionHandler:(id /* block */)a0;
- (void)_historyItemsWereAddedOrChanged:(id)a0;
- (void)_historyItemsWereAddedOrChangedTimerFired:(id)a0;
- (void)_historyItemsWereRemovedTimerFired:(id)a0;
- (void)_invalidateHistoryTimers;
- (BOOL)_isDeferringTerminationToSaveChanges;
- (void)_resetCloudHistoryIfNecessary;
- (void)_safariSyncStatusMayHaveChanged:(id)a0;
- (void)_saveAttemptDuringTerminationDidFinish;
- (void)_saveChanges;
- (void)_saveChangesBeforeTerminationTimerFired:(id)a0;
- (void)_startMonitoringForTriggersAndSyncAttemptNotifications;
- (void)_stopMonitoringForTriggersAndSyncAttemptNotifications;
- (BOOL)_syncOnAppStartupIfReady;
- (void)_systemWillSleep:(id)a0;
- (void)_updateProfileLocalIdentifiersToServerIdentifiersMapInCloudHistory;
- (void)savePendingChangesToCloudAndTerminate;
- (BOOL)shouldDeferTerminationToSaveChangesToCloud;
- (void)stopTryingToDownloadRemoteConfiguration;
- (void)syncForDebugPurposesBypassingThrottler:(BOOL)a0;
- (void)syncOnAppStartup;
- (void)tabGroupManagerDidUpdateProfiles:(id)a0;

@end

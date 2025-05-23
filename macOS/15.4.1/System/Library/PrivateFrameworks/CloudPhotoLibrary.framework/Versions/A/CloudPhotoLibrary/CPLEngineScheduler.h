@class NSDate, NSString, CPLSyncSession, NSArray, NSMutableDictionary, CPLSyncSessionPredictor, CPLEngineLibrary, CPLPlatformObject, NSObject, NSCountedSet, NSMutableSet;
@protocol OS_dispatch_queue, CPLSyncSessionConfiguration;

@interface CPLEngineScheduler : NSObject <CPLAbstractObject, CPLEngineComponent> {
    NSDate *_preparingFirstSessionStartDate;
    unsigned long long _requiredFirstState;
    unsigned long long _lastRequestGeneration;
    unsigned long long _currentRequestGeneration;
    BOOL _needsToUpdateLastSyncDate;
    BOOL _nextSessionShouldRequestMoreTime;
    BOOL _lastSessionWasDeferredBecauseOfTimeButDidNotRequestMoreTime;
    CPLSyncSession *_nextSession;
    double _intervalForRetry;
    NSDate *_proposedScheduleDate;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _currentSyncState;
    unsigned long long _pendingRequiredFirstState;
    BOOL _shouldNoteServerHasChanges;
    CPLSyncSession *_currentSession;
    BOOL _opened;
    NSDate *_unavailabilityLimitDate;
    NSString *_unavailabilityReason;
    unsigned long long _foregroundCalls;
    NSCountedSet *_disablingReasons;
    NSCountedSet *_blockingElements;
    NSMutableDictionary *_blockedElements;
    NSMutableSet *_blockWaiters;
    NSCountedSet *_unblockOnceElements;
    NSObject<OS_dispatch_queue> *_blockingLock;
    unsigned long long _significantWorkCalls;
    unsigned long long _disablingMinglingCount;
    NSDate *_lastSyncSessionDateCausedByForeground;
    NSDate *_deferDate;
    BOOL _protectAgainstFastRelaunch;
    BOOL _didWriteFirstSyncMarker;
    BOOL _delayedFirstSyncBecauseOfRapidLaunch;
    BOOL _isOverridingForeground;
    NSDate *_lastSuccessfulSyncSessionDate;
    NSArray *_lastSessionInformation;
    NSArray *_lastScopeIdentifiersExcludedFromPushToTransport;
    NSArray *_lastScopeIdentifiersExludedFromMingling;
    id _syncObserver;
}

@property (readonly, weak, nonatomic) CPLEngineLibrary *engineLibrary;
@property (readonly, nonatomic) CPLSyncSessionPredictor *predictor;
@property (readonly, nonatomic) id<CPLSyncSessionConfiguration> configuration;
@property (copy, nonatomic) id /* block */ requiredStateObserverBlock;
@property (copy, nonatomic) id /* block */ shouldBackOffOnErrorBlock;
@property (readonly, nonatomic) unsigned long long requiredState;
@property (readonly, nonatomic) BOOL hasAScheduledSyncSession;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)platformImplementationProtocol;
+ (id)validElements;

- (void).cxx_destruct;
- (void)openWithCompletionHandler:(id /* block */)a0;
- (id)componentName;
- (void)noteClientIsBeginningSignificantWork;
- (void)noteClientIsEndingSignificantWork;
- (void)noteClientIsInBackground;
- (void)noteClientIsInForegroundQuietly:(BOOL)a0;
- (void)_backOff;
- (void)noteResourceDownloadQueueIsFull;
- (void)disableMingling;
- (void)getStatusWithCompletionHandler:(id /* block */)a0;
- (void)_disableFastRelaunchProtection;
- (void)_disableRetryAfterLocked;
- (void)_disableSynchronizationBecauseContainerHasBeenWipedLocked;
- (void)_disableSynchronizationWithReasonLocked:(id)a0;
- (void)_enableSynchronizationWithReasonLocked:(id)a0;
- (void)_handleResetAnchorWithError:(id)a0 completionHandler:(id /* block */)a1;
- (void)_handleResetClientCacheWithError:(id)a0 completionHandler:(id /* block */)a1;
- (void)_handleResetCloudCacheWithError:(id)a0 completionHandler:(id /* block */)a1;
- (void)_handleResetGlobalAnchorWithError:(id)a0 completionHandler:(id /* block */)a1;
- (void)_keepSessionInformation:(id)a0;
- (id)_minimalDateForFirstSync;
- (void)_noteServerIsUnavailableWithErrorLocked:(id)a0 reason:(id)a1;
- (void)_noteSyncSession:(id)a0 failedDuringPhase:(unsigned long long)a1 withError:(id)a2;
- (void)_noteSyncSessionNeededFromState:(unsigned long long)a0 minimumDelay:(double)a1;
- (void)_noteSyncSessionNeededFromState:(unsigned long long)a0 proposedScheduleDate:(id)a1;
- (void)_noteSyncSessionNeededFromStateDontRewindImmediately:(unsigned long long)a0;
- (id)_pathToFirstSynchronizationMarker;
- (void)_prepareFirstSession;
- (void)_reallyNoteServerHasChangesLocked;
- (void)_reallyStartSyncSession:(id)a0;
- (void)_reallyUnscheduleSession;
- (void)_resetFirstSynchronizationMarker;
- (void)_scheduleNextSyncSession;
- (void)_setRequiredFirstState:(unsigned long long)a0;
- (void)_startRequiredSyncSession:(id)a0;
- (void)_startSyncSession:(id)a0 withMinimalPhase:(unsigned long long)a1 rewind:(BOOL)a2;
- (void)_stopPreparingFirstSession;
- (BOOL)_syncSessionIsPossible;
- (void)_unscheduleNextSyncSession;
- (void)_updateLastSyncDateIfNecessaryLocked;
- (void)_updateOverridingForeground;
- (void)_writeFirstSynchronizationMarker;
- (void)blockAllSyncSessionsWithReason:(id)a0 onlyIfBlocked:(BOOL)a1 block:(id /* block */)a2;
- (void)blockEngineElement:(id)a0;
- (void)closeAndDeactivate:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)disableSynchronizationIfBlockedWithReason:(id)a0 completionHandler:(id /* block */)a1;
- (void)disableSynchronizationWithReason:(id)a0;
- (void)enableMingling;
- (void)enableSynchronizationWithReason:(id)a0;
- (void)forceStartSyncSession:(id)a0 withMinimalPhase:(unsigned long long)a1;
- (void)getCurrentRequiredStateWithCompletionHandler:(id /* block */)a0;
- (void)getStatusDictionaryWithCompletionHandler:(id /* block */)a0;
- (id)initWithEngineLibrary:(id)a0;
- (BOOL)isClientInForeground;
- (BOOL)isMinglingEnabled;
- (BOOL)isSynchronizationDisabledWithReasonError:(id *)a0;
- (void)kickOffSyncSession;
- (void)noteClientIsInSyncWithClientCache;
- (void)noteClientIsNotInSyncWithClientCache;
- (void)noteClientNeedsToPull;
- (void)noteContainerHasBeenWiped;
- (void)noteNetworkStateDidChange;
- (void)noteQuotaHasChanged;
- (void)noteScopeListNeedsUpdate;
- (void)noteScopeNeedsToPullFromTransport;
- (void)noteScopeNeedsToPushHighPriorityToTransport;
- (void)noteScopeNeedsToPushToTransportWithChangeTypes:(unsigned long long)a0;
- (void)noteScopeNeedsToUploadComputeState;
- (void)noteScopeNeedsUpdate;
- (void)noteServerHasChanges;
- (void)noteServerIsUnavailableWithError:(id)a0;
- (void)noteServerMightBeAvailableNow;
- (void)noteStoreNeedsCleanup;
- (void)noteStoreNeedsSetup;
- (void)noteStoreNeedsToUpdateDisabledFeatures;
- (void)noteSyncSession:(id)a0 failedDuringPhase:(unsigned long long)a1 withError:(id)a2;
- (void)noteSyncSession:(id)a0 stateWillBeAttempted:(unsigned long long)a1;
- (void)noteSyncSessionSucceeded:(id)a0;
- (void)noteTransportNeedsUpdate;
- (void)resetBackoffInterval;
- (void)startRequiredSyncSessionNow:(id)a0;
- (void)testKey:(id)a0 value:(id)a1 completionHandler:(id /* block */)a2;
- (void)unblockEngineElement:(id)a0;
- (void)unblockEngineElementOnce:(id)a0;
- (BOOL)waitForEngineElementToBeBlocked:(id)a0 timeout:(double)a1;
- (void)willRunEngineElement:(id)a0;

@end

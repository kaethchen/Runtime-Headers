@class NSDate, PFStateCaptureHandler, PLBackgroundJobLibraryCoordinator, NSDictionary, NSObject, PFCoalescer, NSString, NSPointerArray, PFCameraViewfinderSessionWatcher, NSMutableSet, NSNumber, PLBackgroundJobCriteria, PLBackgroundJobStatusCenter;
@protocol OS_xpc_object, OS_dispatch_queue, OS_dispatch_source;

@interface PLBackgroundJobService : NSObject <PFCameraViewfinderSessionWatcherDelegate, PFStateCaptureProvider, PLBackgroundJobLibraryCoordinatorDelegate> {
    NSMutableSet *_registeredXPCActivities;
    NSObject<OS_xpc_object> *_runningXPCActivity;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    unsigned long long _stateLock_state;
    PLBackgroundJobStatusCenter *_statusCenter;
    PLBackgroundJobLibraryCoordinator *_libraryCoordinator;
    PLBackgroundJobCriteria *_runningCriteria;
    PLBackgroundJobCriteria *_pausedCriteria;
    PFCoalescer *_registrationCoalescer;
    PFCameraViewfinderSessionWatcher *_cameraWatcher;
    NSDictionary *_libraryInvalidationCompletionHandlerByLibraryURL;
    NSDictionary *_bundlesToProcessByCriteriaShortCode;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bundlesToProcessByCriteriaShortCodeLock;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_source> *_runningXPCActivityDeferTimer;
    BOOL _deferringService;
    NSNumber *_simulateXpcActivityDeferring;
    BOOL _cameraForeground;
    BOOL _needsActivityUnregistrationOnFirstLaunch;
    PFStateCaptureHandler *_stateCaptureHandler;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _watchdogTimerLock;
    NSDate *_watchdogTimerLock_dateOfWatchdogTimerStart;
    double _watchdogTimerLock_registrationCoalescerPushBackTimeInterval;
    NSString *_watchdogTimerLock_watchdogTimerSourceDescription;
}

@property (retain, nonatomic) NSPointerArray *observers;
@property (readonly) NSDictionary *statusCenterDump;
@property (readonly) unsigned long long serviceState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_verifyActivityHandlerInvokedWithCorrectIdentifier:(id)a0 forCriteria:(id)a1;
+ (void)_removeAllBundlesFromUserDefaultsWithoutLocking;
+ (BOOL)_stateIsReadyForRegistration:(unsigned long long)a0;
+ (BOOL)_stateIsReadyToRun:(unsigned long long)a0;
+ (BOOL)verifyStateTransitionFromState:(unsigned long long)a0 toState:(unsigned long long)a1;

- (id)init;
- (void).cxx_destruct;
- (void)_shutdown;
- (id)stateCaptureDictionary;
- (void)signalBackgroundProcessingNeededOnLibrary:(id)a0;
- (void)startWatchdogTimerIfNeededWithSourceDescription:(id)a0;
- (id)_bundlesToProcessByCriteriaShortCodesAsPathStringsAlreadyLocked;
- (BOOL)_activityIsRegisteredForCriteria:(id)a0;
- (void)_appendBundleRecordsToProcessingSet:(id)a0 criteriaShortCode:(id)a1;
- (id)_bundlesToProcessByCriteriaShortCodesAsPathStrings;
- (void)_fireWatchdogTimerWithStartTime:(id)a0 startingPushBackTimeInterval:(double)a1 sourceDescription:(id)a2;
- (id)_getBundleRecordsFromProcessingSetForAllCriterias;
- (id)_getBundleRecordsFromProcessingSetForCriteriaShortCode:(id)a0;
- (void)_invalidateSignalNeededForCrashRecoveryOnBundle:(id)a0;
- (void)_loadBundleRecordsDictionaryFromUserDefaults;
- (void)_noteSignalNeededForCrashRecoveryOnBundle:(id)a0;
- (void)_persistBundleRecordsDictionaryToUserDefaults;
- (void)_registerActivityIfNecessaryOnBundles:(id)a0;
- (void)_registerActivityWithCriteria:(id)a0;
- (void)_registerActivityWithoutCoalescingIfNecessaryOnBundle:(id)a0;
- (void)_registerBackgroundProcessingNeededForBundles:(id)a0 context:(id)a1;
- (void)_removeAllBundlesFromProcessingSet;
- (void)_removeAllBundlesFromProcessingSetForCriteriaShortCode:(id)a0;
- (void)_removeBundleRecordFromProcessingSet:(id)a0 criteriaShortCode:(id)a1;
- (void)_removeRegisteredActivityForCriteria:(id)a0;
- (void)_runActivity:(id)a0 withCriteria:(id)a1;
- (void)_setRegisteredActivityForCriteria:(id)a0;
- (void)_setRunningCriteria:(id)a0;
- (void)_setServiceState:(unsigned long long)a0;
- (void)_setServiceStateOnQueue:(unsigned long long)a0;
- (BOOL)_signalNeededOnBundle:(id)a0;
- (void)_simulateXPCShouldDefer:(BOOL)a0;
- (void)_startPollingForActivityStatus;
- (void)_startPollingForActivityStatusOnQueue;
- (void)_startRunningBackgroundJobsWithCriteria:(id)a0;
- (void)_startRunningBackgroundJobsWithCriteriaOnQueue:(id)a0;
- (void)_stopPollingForActivityStatus;
- (void)_stopRunningBackgroundJobs;
- (void)_unregisterActivityIfNeededShouldConsiderDeferring:(BOOL)a0;
- (void)_unregisterActivityIfNeededShouldConsiderDeferring_enqueue:(BOOL)a0;
- (void)_updateCameraForegroundState:(BOOL)a0;
- (void)cameraWatcherDidChangeState:(id)a0;
- (id)initWithLibraryCoordinator:(id)a0;
- (id)initWithLibraryCoordinator:(id)a0 statusCenter:(id)a1;
- (void)invalidateLibraryBundle:(id)a0 completion:(id /* block */)a1;
- (void)libraryCoordinatorFinishedJobsOnAllSubmittedBundles;
- (void)libraryCoordinatorFinishedJobsOnSubmittedBundle:(id)a0 withCriteria:(id)a1;
- (void)performCrashRecoveryIfNeededOnBundle:(id)a0;
- (void)signalBackgroundProcessingNeededOnBundle:(id)a0;

@end

@class NSArray, NSString, NSSet, NSMutableDictionary, NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface FPDConfigurationStore : NSObject {
    NSMutableDictionary *_temporaryFileTrackingDelayPerVariant;
    double _defaultTemporaryFileTrackingDelay;
    NSObject<OS_dispatch_queue> *_refreshQueue;
    NSHashTable *_observers;
}

@property (readonly, nonatomic) BOOL trialClientLoadedSuccessfully;
@property (readonly, nonatomic) int trialTestFactor;
@property (readonly, nonatomic) int hardConcurrentOperationLimit;
@property (readonly, nonatomic) int softConcurrentOperationLimit;
@property (readonly, nonatomic) int hardConcurrentContentUpdateLimit;
@property (readonly, nonatomic) int softConcurrentContentUpdateLimit;
@property (readonly, nonatomic) int hardConcurrentMetadataOnlyUpdateLimit;
@property (readonly, nonatomic) int softConcurrentMetadataOnlyUpdateLimit;
@property (readonly, nonatomic) int hardConcurrentProvideFileLimit;
@property (readonly, nonatomic) int softConcurrentProvideFileLimit;
@property (readonly, nonatomic) NSArray *userPackageExtensions;
@property (readonly, nonatomic) BOOL hasUpcallExecutionTimeLimits;
@property (readonly, nonatomic) double upcallExecutionTimeLimitBase;
@property (readonly, nonatomic) double upcallExecutionTimeLimitPerKiloByte;
@property (readonly, nonatomic) double upcallExcutionTimeLimitStaleProgress;
@property (readonly, nonatomic) double upcallExcutionTimeLimitProgressCancellationGracePeriod;
@property (readonly, nonatomic) int errorGenerationUpdateSeconds;
@property (readonly, nonatomic) int lowPrioritySignalProviderChangesIntervalSeconds;
@property (readonly, nonatomic) int vfsDirectoryListerLimit;
@property (readonly, nonatomic) int maxFSEventQueueSize;
@property (readonly, nonatomic) int fseventProcessBatchSize;
@property (readonly, nonatomic) double fseventsAggregationDelay;
@property (readonly, nonatomic) int maxLookupDepth;
@property (readonly, nonatomic) int sqlDatabaseFlushIntervalMilliseconds;
@property (readonly, nonatomic) int sqlDatabaseVacuumBatchSize;
@property (readonly, nonatomic) double sqlDatabaseBatchDelay;
@property (readonly, nonatomic) int sqlDatabaseBatchChangeCount;
@property (readonly, nonatomic) int sqlDatabaseOnNextDurableFlushTriggerThreshold;
@property (readonly, nonatomic) int sqlDatabaseStatementCacheMaxCount;
@property (readonly, nonatomic) int sqlDatabaseStatementWarnTime;
@property (readonly, nonatomic) int pendingSetMaxItemCount;
@property (readonly, nonatomic) double pendingSetRefreshInterval;
@property (readonly, nonatomic) int pendingSetRegatherThreshold;
@property (readonly, nonatomic) int perfTelemetrySubSamplingPercentage;
@property (readonly, nonatomic) NSArray *dynamicErrorSampleRatePerProvider;
@property (readonly, nonatomic) BOOL hangingDownloadCancellationPromptEnabled;
@property (readonly, nonatomic) int maxFPCKDatabaseChecks;
@property (readonly, nonatomic) int maxFPCKDatabaseChecksDiagnostic;
@property (readonly, nonatomic) BOOL avoidNilErrorItemsForDetailedPayload;
@property (readonly, nonatomic) long long minimumDiskSpaceRequiredToBeGreedy;
@property (readonly, nonatomic) double relativeDiskSpaceRequiredToBeGreedy;
@property (readonly, nonatomic) long long diskSpaceRequiredToReturnToGreedyState;
@property (readonly, nonatomic) double relativeDiskSpaceRequiredToReturnToGreedyState;
@property (readonly, nonatomic) int diskSpaceCheckInterval;
@property (readonly, nonatomic) int minTimeBetweenSpeculativeDownloadsPurgeSession;
@property (readonly, nonatomic) int minTimeToPreventDownloadsAfterReturningToGreedyState;
@property (readonly, nonatomic) int speculativeSetRecencyDays;
@property (readonly, nonatomic) int speculativeSetPageSize;
@property (readonly, nonatomic) long long speculativeSetRefreshInterval;
@property (readonly, nonatomic) int speculativeSetMaximumDownloadsAllowed;
@property (readonly, nonatomic) long long speculativeSetMaximumDownloadsRefreshInterval;
@property (readonly, nonatomic) long long speculativeSetCancelDownloadDelay;
@property (readonly, nonatomic) long long speculativeRefreshInheritedContentPolicyMaximumJobs;
@property (readonly, nonatomic) NSString *targetedSPSErrorsPayload;
@property (readonly, nonatomic) long long spsFeedbackRequestPromptTimeoutInSeconds;
@property (readonly, nonatomic) long long spsFeedbackBackoffAfterSayingYesInSeconds;
@property (readonly, nonatomic) long long spsFeedbackBackoffAfterOtherResponsesInSeconds;
@property (readonly, nonatomic) long long spsFeedbackBackoffAfterOtherResponses_MultipleAttempts_InSeconds;
@property (readonly, nonatomic) BOOL externalFeedbackAllowed;
@property (readonly, nonatomic) NSSet *externalFeedbackDenyList;
@property (readonly, nonatomic) unsigned long long residencyReasonEnablement;

+ (id)defaultStore;
+ (void)__test_only_reloadDefaultStore;

- (id)init;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)refresh;
- (id)loadTrialClient;
- (void)__test_only_refresh;
- (double)temporaryFileTrackingDelayForVariant:(id)a0;

@end

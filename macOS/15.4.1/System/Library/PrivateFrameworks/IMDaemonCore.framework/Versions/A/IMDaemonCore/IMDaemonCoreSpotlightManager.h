@class IMDSpotlightDaemonClient;

@interface IMDaemonCoreSpotlightManager : NSObject

@property (class, readonly, nonatomic) IMDaemonCoreSpotlightManager *sharedManager;

@property (retain, nonatomic) IMDSpotlightDaemonClient *indexingDelegate;

- (void).cxx_destruct;
- (void)registerForCoreSpotlightIndexing;
- (void)_reindexResumed;
- (long long)_batchIndexingIntervalBagValue;
- (void)_checkSpotlightClientStateForReindexIfNeeded;
- (void)_checkSpotlightClientStateForReindexIfNeededWithAttempts:(long long)a0;
- (id)_currentClientState;
- (long long)_currentSpotlightVersion;
- (BOOL)_deferXPCActivity:(id)a0;
- (BOOL)_deviceConditionsAllowsSpotlightIndexingForActivity:(id)a0;
- (long long)_expectedSpotlightVersion;
- (void)_indexNextBatchIfNecessaryForActivity:(id)a0;
- (BOOL)_needsDeferredIndexing;
- (BOOL)_needsReindexingDueToVersionMismatch;
- (id)_newSpotlightBatchIndexingXPCCriteria;
- (void)_reindexPaused;
- (BOOL)_shouldDeferXPCActivity:(id)a0;
- (void)registerForCoreSpotlightMigration;
- (id)spotlightIndexQueue;

@end

@class NSObject, NSSet, NSBackgroundActivityScheduler, NSMutableSet, NSError, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface SUBackgroundManager : NSObject {
    NSMutableArray *_userVisibleUpdates;
    NSMutableArray *_configDataUpdates;
    NSMutableArray *_firmwareUpdates;
    NSMutableArray *_backgroundInstallCriticalUpdates;
    NSMutableArray *_registerForPostLogoutCriticalUpdates;
    NSMutableArray *_productsQueuedForStaging;
    NSMutableArray *_productsDownloadingInBackground;
    NSBackgroundActivityScheduler *_stageActivityScheduler;
    NSMutableSet *_errorUpdateKeys;
    NSMutableArray *_autoInstalledJournalEntries;
    BOOL _timeToScan;
    BOOL _canDownloadAndStage;
    BOOL _wasScanIncomplete;
    NSError *_error;
    NSString *_catalogTestMode;
    struct AuthorizationOpaqueRef { } *_authRef;
    NSObject<OS_dispatch_queue> *_productStateQueue;
    NSObject<OS_dispatch_queue> *_backgroundOpsQueue;
    NSObject<OS_dispatch_queue> *_modifyAuthQueue;
}

@property long long numInflightOperations;
@property (retain) NSSet *previousIncompleteKeys;
@property (nonatomic) BOOL suspended;

+ (id)sharedBackgroundManager;

- (void)dealloc;
- (id)init;
- (id)error;
- (void)resetState;
- (void)archiveToCoder:(id)a0;
- (void)evaluateAvailableUpdatesAndLog:(BOOL)a0;
- (long long)_activityDelay;
- (id)_appropriateProductsForAction:(long long)a0;
- (void)_backgroundDownloadDidFinishForProduct:(id)a0;
- (BOOL)_canDownloadAndStageUpdates;
- (BOOL)_evaluateScanRequirements;
- (BOOL)_isProductEligibleForAutoInstallOfRestartRequiredUpdates:(id)a0;
- (void)_markPendingCriticalUpdateForPostLogoutInstallIfAppropriate:(id)a0;
- (void)_performBackgroundConfigDataInstallForProduct:(id)a0;
- (id)_popProduct;
- (void)_pushProductToStage:(id)a0;
- (void)_reevaluateAvailableUpdatesIfNecessary;
- (void)_scheduleStagingForQueuedProducts;
- (BOOL)_shouldStageUpdate:(id)a0;
- (void)_stageProducts:(id)a0 replyWhenDone:(id /* block */)a1;
- (void)addToAutoInstallJournalForProduct:(id)a0 wasAdminAutoInstall:(BOOL)a1;
- (id)autoInstalledJournalEntries;
- (void)cancelBackgroundDownloadIfNecessaryForProductKeys:(id)a0 replyWhenDone:(id /* block */)a1;
- (void)clearAutoInstalledUpdates;
- (BOOL)downloadAndStageUpdates:(id)a0 doDownload:(BOOL)a1 notifyWhenFinished:(BOOL)a2 inForeground:(BOOL)a3 withReply:(id /* block */)a4;
- (void)downloadRecommendedUpdates;
- (BOOL)downloadUpdates:(id)a0 notifyWhenFinished:(BOOL)a1 inForeground:(BOOL)a2 withReply:(id /* block */)a3;
- (id)incompleteProductKeys;
- (void)installStatus:(id)a0 didChangeExternallyForProductKey:(id)a1;
- (long long)nextActionForProductKey:(id)a0 returningProduct:(id *)a1;
- (void)restoreFromCoder:(id)a0;
- (void)setCatalogTestMode:(id)a0;
- (BOOL)shouldRetryAheadOfSchedule;
- (BOOL)synchronousRefreshAvailableUpdatesIfRequired;

@end

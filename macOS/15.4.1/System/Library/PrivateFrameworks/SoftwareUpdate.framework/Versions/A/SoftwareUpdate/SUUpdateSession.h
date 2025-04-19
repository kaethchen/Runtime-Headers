@class NSMutableDictionary, NSDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface SUUpdateSession : NSObject {
    NSMutableDictionary *_updateStatusByKey;
    NSMutableDictionary *_initiatedDownloads;
    NSDictionary *_completeUpdatesByKey;
    NSMutableSet *_backgroundKeys;
    NSMutableDictionary *_initiatedInstalls;
    NSMutableDictionary *_factoredInstallSizeByKey;
    NSMutableDictionary *_downloadDoneBlocksByKey;
    NSMutableDictionary *_completionSemaphoreByKey;
    long long _foregroundTransactions;
    long long _backgroundTransactions;
    NSMutableDictionary *_assertionByTransactionID;
    NSMutableDictionary *_transactionIDToProductKeys;
    NSObject<OS_dispatch_queue> *_updateStatusQueue;
    NSObject<OS_dispatch_queue> *_clientNotifyQueue;
    NSObject<OS_dispatch_queue> *_transactionQueue;
}

@property (copy) id /* block */ transactionCountDidChangeHandler;
@property (copy) id /* block */ installStateDidChangeHandler;
@property BOOL isPreparingForReboot;
@property BOOL nowIsLater;
@property BOOL pendingStageInstallCancelled;
@property (copy) id /* block */ installedBundleURLsHandler;

+ (id)sharedUpdateSession;

- (void)dealloc;
- (id)init;
- (void)resetState;
- (void)archiveToCoder:(id)a0;
- (void)_cancelBackgroundDownloadOperations;
- (void)_changeStateForProduct:(id)a0 toState:(unsigned long long)a1 error:(id)a2 message:(id)a3;
- (void)_changeStateForProduct:(id)a0 toState:(unsigned long long)a1 message:(id)a2;
- (void)_installProducts:(id)a0 authorization:(struct AuthorizationOpaqueRef { } *)a1 holdingBoostDuringInstall:(BOOL)a2 stageInstall:(BOOL)a3 clientBlocksRestart:(BOOL)a4 packageScriptUserID:(unsigned int)a5;
- (void)_installStateDidChangeForKey:(id)a0;
- (id)_nonatomicStatusForUpdateWithProductKey:(id)a0 estimatedDownloadTimeRemaining:(float *)a1;
- (void)_resetUpdateStateIfProductIsNotDownloadedButProductStateIsGreaterThanOrEqualToDownloadedForProducts:(id)a0;
- (BOOL)_shouldResetStatus:(id)a0 afterScan:(BOOL)a1;
- (void)_startDownloadingUpdateWithProduct:(id)a0 inForeground:(BOOL)a1 forActivePhases:(unsigned long long)a2 completionBlock:(id /* block */)a3;
- (BOOL)_startTransactionForForeground:(BOOL)a0 withProducts:(id)a1 includingInstall:(BOOL)a2 outTransactionID:(long long *)a3;
- (void)_stopTransactionWithID:(long long)a0;
- (id)_updateStatusForProducts:(id)a0;
- (long long)activeBackgroundTransactions;
- (long long)activeForegroundTransactions;
- (void)cancelAllUpdatesWithReply:(id /* block */)a0;
- (void)cancelUpdatesForProductKeys:(id)a0 reply:(id /* block */)a1;
- (void)changeStateForProduct:(id)a0 toState:(unsigned long long)a1 message:(id)a2;
- (void)changeStateForProducts:(id)a0 toState:(unsigned long long)a1 error:(id)a2 message:(id)a3;
- (id)combinedStatusForUpdatesWithProductKeys:(id)a0 individualStatus:(id *)a1;
- (unsigned long long)diskSpaceRequiredForProducts:(id)a0 includingInstall:(BOOL)a1;
- (void)dumpDebugInfo;
- (void)dumpStateFromCoder:(id)a0;
- (void)finishStagingProduct:(id)a0 completionBlock:(id /* block */)a1;
- (void)fixupStatusForLocalUpdateWithProductKey:(id)a0;
- (id)productKeysInActiveForegroundTransactions;
- (void)restoreFromCoder:(id)a0;
- (void)setProductProperties:(id)a0 forProducts:(id)a1;
- (void)setupStatusForAvailableProducts:(id)a0 afterScan:(BOOL)a1;
- (void)startDownloadingForProducts:(id)a0 inForeground:(BOOL)a1 replyWhenDone:(id /* block */)a2;
- (void)startUpdateForProducts:(id)a0 usingClientAuthorization:(struct AuthorizationOpaqueRef { } *)a1 inForeground:(BOOL)a2 holdingBoostDuringInstall:(BOOL)a3 stageInstall:(BOOL)a4 clientBlocksRestart:(BOOL)a5 packageScriptUserID:(unsigned int)a6 sendingStatusUpdates:(BOOL)a7 replyWhenDone:(id /* block */)a8;
- (id)statusForUpdateWithProductKey:(id)a0;
- (void)updateStatusChangedExternally:(id)a0;

@end

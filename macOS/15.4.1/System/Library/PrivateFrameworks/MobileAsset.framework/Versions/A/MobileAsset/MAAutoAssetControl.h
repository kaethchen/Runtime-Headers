@class NSString, SUCoreConnectClient;

@interface MAAutoAssetControl : NSObject <SUCoreConnectClientDelegate>

@property (readonly, retain, nonatomic) NSString *controlClientName;
@property (readonly, retain, nonatomic) NSString *controlClientProcessName;
@property (readonly, nonatomic) long long controlClientProcessID;
@property (retain, nonatomic) SUCoreConnectClient *connectionClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)simulateCacheDeleteDetermineReclaimableSpace:(id)a0 withUrgency:(int)a1 error:(id *)a2;
+ (id)forceGlobalPurge:(id)a0 forcingUnlock:(BOOL)a1;
+ (id)_privateStateQueue;
+ (id)activeJobSummary:(BOOL)a0 error:(id *)a1;
+ (id)activeJobSummary:(BOOL)a0 limitedToAssetTypes:(id)a1 error:(id *)a2;
+ (id)assetSelectorOrAllSelector:(id)a0;
+ (id)autoAssetControl;
+ (id)availableForStagingAssetSummary:(id *)a0;
+ (id)controlStatistics:(BOOL)a0 error:(id *)a1;
+ (id)defaultDispatchQueue;
+ (id)forceGlobalAbandon:(id)a0;
+ (id)forceGlobalForget:(id)a0;
+ (id)forceGlobalUnlock:(id)a0;
+ (void)frameworkInstanceSetLogDomain;
+ (id)frameworkInstanceUUID;
+ (id)knownAssetSummary:(BOOL)a0 error:(id *)a1;
+ (id)knownAssetSummary:(BOOL)a0 limitedToAssetTypes:(id)a1 error:(id *)a2;
+ (id)lockedAssetSummary:(BOOL)a0 error:(id *)a1;
+ (id)lockedAssetSummary:(BOOL)a0 limitedToAssetTypes:(id)a1 error:(id *)a2;
+ (id)pushNotificationHistory:(BOOL)a0 error:(id *)a1;
+ (id)scheduledJobSummary:(BOOL)a0 error:(id *)a1;
+ (id)scheduledJobSummary:(BOOL)a0 limitedToAssetTypes:(id)a1 error:(id *)a2;
+ (long long)simulateCacheDeleteReclaimSpace:(id)a0 withUrgency:(int)a1 targetingPurgeAmount:(long long)a2 error:(id *)a3;
+ (id)simulateSetJobOperation:(long long)a0 withEndEvent:(long long)a1 forSelector:(id)a2;
+ (id)stagedAssetSummary:(BOOL)a0 error:(id *)a1;
+ (id)stagedAssetSummary:(BOOL)a0 limitedToAssetTypes:(id)a1 error:(id *)a2;

- (id)init;
- (void).cxx_destruct;
- (void)handleMessage:(id)a0 reply:(id /* block */)a1;
- (void)_activeJobSummary:(BOOL)a0 limitedToAssetTypes:(id)a1 isSynchronous:(BOOL)a2 completion:(id /* block */)a3;
- (void)_availableForStagingAssetSummaryIsSynchronous:(BOOL)a0 completion:(id /* block */)a1;
- (void)_controlStatistics:(BOOL)a0 isSynchronous:(BOOL)a1 completion:(id /* block */)a2;
- (void)_failedControl:(id)a0 withErrorCode:(long long)a1 withResponseError:(id)a2 description:(id)a3 isSynchronous:(BOOL)a4 completion:(id /* block */)a5;
- (void)_failedControlLockSummary:(id)a0 withErrorCode:(long long)a1 withResponseError:(id)a2 description:(id)a3 isSynchronous:(BOOL)a4 completion:(id /* block */)a5;
- (void)_failedControlStatistics:(id)a0 withErrorCode:(long long)a1 withResponseError:(id)a2 description:(id)a3 isSynchronous:(BOOL)a4 completion:(id /* block */)a5;
- (void)_failedControlSummary:(id)a0 withErrorCode:(long long)a1 withResponseError:(id)a2 description:(id)a3 isSynchronous:(BOOL)a4 completion:(id /* block */)a5;
- (void)_failedSimulateCacheDeleteOperation:(id)a0 withErrorCode:(long long)a1 withResponseError:(id)a2 description:(id)a3 isSynchronous:(BOOL)a4 completion:(id /* block */)a5;
- (void)_forceGlobalAbandon:(id)a0 isSynchronous:(BOOL)a1 completion:(id /* block */)a2;
- (void)_forceGlobalForget:(id)a0 isSynchronous:(BOOL)a1 completion:(id /* block */)a2;
- (void)_forceGlobalPurge:(id)a0 forcingUnlock:(BOOL)a1 isSynchronous:(BOOL)a2 completion:(id /* block */)a3;
- (void)_forceGlobalUnlock:(id)a0 isSynchronous:(BOOL)a1 completion:(id /* block */)a2;
- (void)_knownAssetSummary:(BOOL)a0 limitedToAssetTypes:(id)a1 isSynchronous:(BOOL)a2 completion:(id /* block */)a3;
- (void)_lockedAssetSummary:(BOOL)a0 limitedToAssetTypes:(id)a1 isSynchronous:(BOOL)a2 completion:(id /* block */)a3;
- (void)_scheduledJobSummary:(BOOL)a0 limitedToAssetTypes:(id)a1 isSynchronous:(BOOL)a2 completion:(id /* block */)a3;
- (void)_simulateCacheDeleteDetermineReclaimableSpace:(id)a0 withUrgency:(int)a1 error:(id *)a2 isSynchronous:(BOOL)a3 completion:(id /* block */)a4;
- (void)_simulateCacheDeleteReclaimSpace:(id)a0 withUrgency:(int)a1 targetingPurgeAmount:(long long)a2 isSynchronous:(BOOL)a3 completion:(id /* block */)a4;
- (void)_simulateSetJobOperation:(long long)a0 withEndEvent:(long long)a1 forSelector:(id)a2 isSynchronous:(BOOL)a3 completion:(id /* block */)a4;
- (void)_stagedAssetSummary:(BOOL)a0 limitedToAssetTypes:(id)a1 isSynchronous:(BOOL)a2 completion:(id /* block */)a3;
- (void)_successControl:(id)a0 isSynchronous:(BOOL)a1 completion:(id /* block */)a2;
- (void)_successControlLockSummary:(id)a0 withLockSummaryEntries:(id)a1 isSynchronous:(BOOL)a2 completion:(id /* block */)a3;
- (void)_successControlStatistics:(id)a0 withControlStatistics:(id)a1 isSynchronous:(BOOL)a2 completion:(id /* block */)a3;
- (void)_successControlSummary:(id)a0 withJobSummaryEntries:(id)a1 isSynchronous:(BOOL)a2 completion:(id /* block */)a3;
- (void)_successSimulateCacheDeleteOperation:(id)a0 withReclaimableSpace:(long long)a1 isSynchronous:(BOOL)a2 completion:(id /* block */)a3;
- (void)connectToServerFrameworkCompletion:(id /* block */)a0;
- (void)connectionClosed;
- (void)handleResponse:(id)a0 error:(id)a1;

@end

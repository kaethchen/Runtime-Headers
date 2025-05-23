@interface UAFAutoAssetManager : NSObject

+ (id)_createXPCConnection;
+ (void)_logDailyStatusEventForAssetSetArrived:(id)a0 entries:(id)a1 assetSetArrived:(BOOL)a2;
+ (id)latestAtomicInstanceForClients:(id)a0;
+ (void)logAtomicInstance:(id)a0 name:(id)a1 entries:(id)a2;
+ (id)sizeInBytesForConfig:(id)a0 key:(id)a1 error:(id *)a2;
+ (int)listenForUpdates:(id)a0 updateHandler:(id /* block */)a1;
+ (id)assetSetNamesFromUsages:(id)a0 configurationManager:(id)a1;
+ (id)atomicInstanceFromLockPath:(id)a0;
+ (BOOL)autoAssetExistsWithEntries:(id)a0;
+ (id)autoAssetSetForStatus:(id)a0;
+ (id)backgroundNeedPolicy;
+ (void)conditionallyLockLatestAssetSet:(id)a0 newestInstance:(id)a1 checkAtomicError:(id)a2 completion:(id /* block */)a3;
+ (id)configureAssetSet:(id)a0 specifiers:(id)a1 changed:(BOOL *)a2 downloaded:(BOOL *)a3 currentPolicy:(id *)a4;
+ (void)configureAutoAssetsFromAssetSetUsages:(id)a0 subscriptions:(id)a1 configurationManager:(id)a2 lockIfUnchanged:(BOOL)a3 userInitiated:(BOOL)a4;
+ (id)currentLockURLForAssetSet:(id)a0;
+ (id)defaultCheckPolicy;
+ (void)eliminateAssetType:(id)a0;
+ (id)fileLockPolicy;
+ (id)forceRemoveAutoAssetSet:(id)a0;
+ (id)getAutoAssetSet:(id)a0 specifiers:(id)a1 addEntries:(BOOL)a2 configured:(BOOL *)a3 downloaded:(BOOL *)a4 currentPolicy:(id *)a5;
+ (id)getAutoSetEntries:(id)a0 specifiers:(id)a1;
+ (id)getConcurrentQueue;
+ (id)getCurrentSpecifiers:(id)a0 expectedAutoAssetType:(id)a1;
+ (unsigned long long)getDownloadStatusFromAssetSetUsages:(id)a0 configurationManager:(id)a1;
+ (void)getDownloadStatusFromAssetSetUsages:(id)a0 configurationManager:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (unsigned long long)getDownloadStatusFromMAAutoAssetSetStatus:(id)a0;
+ (id)getReason:(id)a0 operation:(id)a1;
+ (id)getSerialQueue;
+ (id)getSpecifiers:(id)a0 assetSetUsages:(id)a1 experiment:(id)a2;
+ (id)immediateNeedPolicy;
+ (void)invalidateAtomicInstance:(id)a0 assetSetName:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (id)latestAtomicInstanceForClients:(id)a0 OSSupported:(BOOL *)a1 error:(id *)a2;
+ (id)latestAtomicInstanceFromMA:(id)a0 error:(id *)a1;
+ (id)latestStatusForClients:(id)a0 error:(id *)a1;
+ (id)lockLatestAssetSet:(id)a0;
+ (void)lockLatestAssetSet:(id)a0 completion:(id /* block */)a1;
+ (id)manageAssetSet:(id)a0 specifiers:(id)a1 lockIfUnchanged:(BOOL)a2 userInitiated:(BOOL)a3 experiment:(id)a4;
+ (void)observeAllAssetSets;
+ (void)observeAssetSet:(id)a0;
+ (void)observeAssetSetExperimentalNamespace:(id)a0;
+ (BOOL)releaseIncompatibleAssetSet:(id)a0 specifiers:(id)a1 configuration:(id)a2;
+ (void)removeAutoAssetSet:(id)a0 completion:(id /* block */)a1;
+ (void)removeUnusedAutoAssetSets:(id)a0 usedAutoAssetSets:(id)a1;
+ (BOOL)sendNotificationForAssetSet:(id)a0;
+ (void)setBackgroundNeedPolicy:(id)a0 configuration:(id)a1;
+ (id)setLatestAtomicInstance:(id)a0 autoAssetSet:(id)a1;
+ (BOOL)shouldCheckAssetSet:(id)a0 autoAssetSet:(id)a1 changed:(BOOL)a2 downloaded:(BOOL)a3 experiment:(id)a4 locked:(BOOL *)a5 userInitiated:(BOOL *)a6 removalNeeded:(BOOL *)a7;
+ (BOOL)shouldWaitForMobileAssetStart:(id)a0;
+ (id)spaceNeededForAssetSetUsages:(id)a0 key:(id)a1 configurationManager:(id)a2 error:(id *)a3;
+ (void)stageAssetSet:(id)a0 targets:(id)a1;
+ (void)stageAssetsWithSubscriptions:(id)a0 knownAutoAssetSets:(id)a1 usedAutoAssetSets:(id)a2 autoAssetSets:(id)a3;
+ (id)targetForAssetSet:(id)a0 specifiers:(id)a1 version:(id)a2 autoAssetSets:(id)a3;
+ (void)updateAutoAssetsFromAssetSetUsages:(id)a0 configurationManager:(id)a1 expensiveNetworking:(BOOL)a2 progress:(id /* block */)a3 requestId:(id)a4 completion:(id /* block */)a5;
+ (void)waitForMobileAssetStart:(id)a0 queue:(id)a1 completion:(id /* block */)a2;

@end

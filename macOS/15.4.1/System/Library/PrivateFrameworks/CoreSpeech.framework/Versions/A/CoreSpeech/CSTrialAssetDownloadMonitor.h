@class NSDictionary;

@interface CSTrialAssetDownloadMonitor : CSEventMonitor {
    NSDictionary *_trialClientDict;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_handleSiriAttAssetTrailDownloadForNamespace:(id)a0;
- (void)_notifyTrialAssetDownloadForAssetType:(unsigned long long)a0;
- (void)_startMonitoringWithQueue:(id)a0;
- (id)_trailStageDirectoryForAsset:(id)a0;
- (BOOL)_validateDownloadedAssetForAssetType:(unsigned long long)a0;
- (void)downloadAndNotifyTrialAssetsUpdateForNamespace:(id)a0 onQueue:(id)a1;

@end

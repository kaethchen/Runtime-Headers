@interface AXTTSResourceAssetPolicy : AXAssetPolicy

- (id)compatibilityVersion;
- (id)assetType;
- (id)_voiceIdentifierForAsset:(id)a0;
- (id)assetsToPurgeFromInstalledAssets:(id)a0 withRefreshedAssets:(id)a1;
- (BOOL)daemonShouldDownloadInBackgroundIfNeeded;
- (id)downloadOptionsForOperation:(unsigned long long)a0 userInitiated:(BOOL)a1;
- (id)launchActivityIdentifier;
- (BOOL)shouldDownloadAsset:(id)a0 withInstalledAssets:(id)a1;

@end

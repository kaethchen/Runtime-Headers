@class FlexCloudManager;

@interface FlexCloudSongAsset : FMSongAsset

@property (readonly, weak, nonatomic) FlexCloudManager *cloudManager;

- (void).cxx_destruct;
- (void)cancelDownload;
- (void)requestDownload;
- (BOOL)contentUpdateAvailable;
- (void)purgeLocalCache;
- (long long)contentVersionForAssetLocation:(unsigned long long)a0;
- (unsigned long long)assetStatus;
- (long long)compatibilityVersionForAssetLocation:(unsigned long long)a0;
- (id)initWithAssetID:(id)a0 assetStatus:(unsigned long long)a1 localURL:(id)a2 cloudManager:(id)a3 contentVersion:(long long)a4 compatibilityVersion:(long long)a5;
- (BOOL)isCloudBacked;
- (void)requestDownloadWithOptions:(id)a0;

@end

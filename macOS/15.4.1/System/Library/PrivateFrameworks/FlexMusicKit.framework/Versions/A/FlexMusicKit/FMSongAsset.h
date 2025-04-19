@class NSString, NSURL;

@interface FMSongAsset : NSObject {
    double _downloadProgress;
}

@property (readonly, nonatomic) long long contentVersion;
@property (readonly, nonatomic) long long compatibilityVersion;
@property (retain) NSString *songUID;
@property (readonly) NSString *assetID;
@property (readonly) unsigned long long assetStatus;
@property (readonly) NSURL *localURL;
@property (readonly, nonatomic) double downloadProgress;
@property (readonly, nonatomic) BOOL contentUpdateAvailable;
@property (readonly, nonatomic) BOOL isCloudBacked;

- (void).cxx_destruct;
- (void)cancelDownload;
- (void)requestDownload;
- (BOOL)localURLExists;
- (void)purgeLocalCache;
- (long long)contentVersionForAssetLocation:(unsigned long long)a0;
- (long long)compatibilityVersionForAssetLocation:(unsigned long long)a0;
- (BOOL)contentUpdateAvaliable;
- (id)initWithAssetID:(id)a0 assetStatus:(unsigned long long)a1 localURL:(id)a2 contentVersion:(long long)a3 compatibilityVersion:(long long)a4;
- (id)initWithURL:(id)a0 assetID:(id)a1 contentVersion:(long long)a2 compatibilityVersion:(long long)a3;
- (void)requestDownloadWithOptions:(id)a0;
- (BOOL)updateDownloadProgress:(double)a0;

@end

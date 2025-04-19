@class NSDictionary, NSString;

@interface MAAsset : NSObject

@property (readonly, nonatomic) NSDictionary *attributes;
@property (readonly, nonatomic) NSString *assetType;
@property (readonly, nonatomic) NSString *assetId;
@property (readonly) long long state;
@property (readonly, nonatomic) NSString *purpose;

+ (void)startCatalogDownload:(id)a0 options:(id)a1 then:(id /* block */)a2;
+ (void)startCatalogDownload:(id)a0 then:(id /* block */)a1;
+ (id)loadSync:(id)a0 error:(id *)a1;
+ (void)cancelCatalogDownload:(id)a0 then:(id /* block */)a1;
+ (void)cancelCatalogDownload:(id)a0 withPurpose:(id)a1 then:(id /* block */)a2;
+ (id)getLoadResultFromMessage:(id)a0;
+ (id)loadSync:(id)a0 allowingDifferences:(id)a1 error:(id *)a2;
+ (id)loadSync:(id)a0 allowingDifferences:(id)a1 withPurpose:(id)a2 error:(id *)a3;
+ (id)loadSync:(id)a0 withPurpose:(id)a1 error:(id *)a2;
+ (void)startCatalogDownload:(id)a0 options:(id)a1 completionWithError:(id /* block */)a2;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)getLocalFileUrl;
- (void)cancelDownload:(id /* block */)a0;
- (void)attachProgressCallBack:(id /* block */)a0;
- (BOOL)nonUserInitiatedDownloadsAllowed;
- (long long)purgeSync;
- (void)startDownload:(id)a0 then:(id /* block */)a1;
- (id)initWithAttributes:(id)a0;
- (void)startDownload:(id /* block */)a0;
- (BOOL)refreshState;
- (BOOL)wasLocal;
- (BOOL)wasPurgeable;
- (id)absoluteAssetId;
- (void)purgeWithError:(id /* block */)a0;
- (BOOL)wasPreinstalled;
- (BOOL)wasDownloadable;
- (void)_invokeClientDownloadCompletionAlreadyOnQueue:(long long)a0 asset:(id)a1 completionBlockWithError:(id /* block */)a2;
- (id)assetProperty:(id)a0;
- (id)assetServerUrl;
- (long long)calculateTimeout;
- (long long)cancelDownloadSync;
- (void)commonAssetDownload:(id)a0 options:(id)a1 then:(id /* block */)a2;
- (void)configDownload:(id)a0 completion:(id /* block */)a1;
- (long long)configDownloadSync:(id)a0;
- (id)getBaseAssetRepositoryPath;
- (id)getLocalFilePath;
- (id)getLocalUrl;
- (id)hashToString:(id)a0;
- (void)invokeClientDownloadCompletion:(long long)a0 asset:(id)a1 completionBlockWithError:(id /* block */)a2;
- (void)logAsset;
- (BOOL)overrideGarbageCollectionThreshold:(unsigned long long)a0;
- (void)purge:(id /* block */)a0;
- (BOOL)spaceCheck:(long long *)a0;
- (void)startDownload:(id)a0 completionWithError:(id /* block */)a1;
- (BOOL)wasInCatalog;

@end

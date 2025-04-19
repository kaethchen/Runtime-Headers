@class MSUProductManager, NSString, NSError, NSURL, NSArray, PKDistribution, NSDictionary, PKPackageSourceManager, PKDownloader, NSObject, NSNumber, MSUProduct;
@protocol OS_dispatch_semaphore;

@interface BOSPredicateUpdateProductManager : NSObject

@property (retain) MSUProductManager *productManager;
@property (retain) PKPackageSourceManager *sourceManager;
@property (retain) MSUProduct *product;
@property (retain) NSString *productBridgeVersion;
@property (retain) NSError *error;
@property (retain) NSURL *catalogURL;
@property (retain) NSURL *catalogURLOverride;
@property unsigned long long catalogOptionsOverride;
@property (retain) NSNumber *stagedUpdatesOnlyOverride;
@property (retain) PKDownloader *downloader;
@property (retain) NSObject<OS_dispatch_semaphore> *downloaderFinished;
@property (retain) NSURL *destinationURL;
@property (copy) id /* block */ downloadProgressHandler;
@property (retain) NSArray *localPackageSpecifiers;
@property (readonly) NSArray *remotePackageSpecifiers;
@property (readonly) PKDistribution *distribution;
@property (retain) NSDictionary *macOSInstallationAuxInfo;
@property (readonly) NSURL *bridgeOSSoftwareUpdateEventRecordingServiceURL;

- (id)init;
- (void).cxx_destruct;
- (void)packageDownloader:(id)a0 didDownloadInvalidDataForPackageReference:(id)a1;
- (void)packageDownloader:(id)a0 didFailOnPackageReference:(id)a1 withError:(id)a2;
- (void)packageDownloader:(id)a0 didFinishPackageReference:(id)a1 localPackageReference:(id)a2;
- (void)packageDownloader:(id)a0 didStartDownloadingPackageWithReference:(id)a1;
- (void)packageDownloaderDidStart:(id)a0;
- (void)packageDownloaderDidStop:(id)a0;
- (void)packageDownloader:(id)a0 didChangeProgress:(double)a1;
- (void)cancelDownload;
- (void)downloadProductToDirectory:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)findProductWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)setStagedUpdatesOnly:(BOOL)a0;
- (id)_destinationURLForPackageReference:(id)a0 destinationDirectoryURL:(id)a1;
- (BOOL)_downloadPackagesForProductToDirectory:(id)a0;
- (BOOL)_queueRequiredPackagesReferencesWithDownloader:(id)a0 destinationDirectoryURL:(id)a1;
- (BOOL)_shouldEvaluateStagedUpdatesOnly;
- (void)_tryAlternateSourceInvalidatingPackageReference:(id)a0 reason:(int)a1 downloader:(id)a2 error:(id)a3;
- (id)_catalogEvaluationPredicate;
- (BOOL)_evaluateProductsInCatalogWithPredicate:(id)a0;
- (BOOL)_findProductMatchingPredicate:(id)a0;
- (id)_findProductPredicate;
- (BOOL)_loadCatalog;
- (void)_setCatalogURL:(id)a0 options:(unsigned long long)a1;
- (void)addDownloadCacheWithURL:(id)a0;
- (void)stopDownloadQueue;

@end

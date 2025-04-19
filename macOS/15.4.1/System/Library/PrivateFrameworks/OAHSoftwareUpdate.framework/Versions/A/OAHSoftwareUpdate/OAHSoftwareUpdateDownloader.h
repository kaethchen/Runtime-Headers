@class OAHUpdateServiceController, NSString, NSURL, NSArray, PKDistribution, NSError, NSDictionary, PKDownloader, PKPackageSourceManager, NSObject, NSNumber, MSUProduct;
@protocol OS_dispatch_semaphore;

@interface OAHSoftwareUpdateDownloader : NSObject

@property (retain) PKPackageSourceManager *sourceManager;
@property (retain) OAHUpdateServiceController *updateServiceController;
@property (retain) MSUProduct *product;
@property (retain) NSString *productBridgeVersion;
@property (retain) NSURL *catalogURL;
@property (retain) NSURL *catalogURLOverride;
@property unsigned long long catalogOptionsOverride;
@property (retain) NSNumber *stagedUpdatesOnlyOverride;
@property (retain) PKDownloader *downloader;
@property (retain) NSObject<OS_dispatch_semaphore> *downloaderFinished;
@property (retain) NSURL *destinationURL;
@property (copy) id /* block */ downloadProgressHandler;
@property (copy) id /* block */ downloadCancelledHandler;
@property (retain) NSArray *localProducts;
@property (retain) NSDictionary *macOSInstallationAuxInfo;
@property (readonly) NSArray *remotePackageSpecifiers;
@property (readonly) PKDistribution *distribution;
@property (retain) NSError *error;

- (id)init;
- (void).cxx_destruct;
- (void)packageDownloader:(id)a0 didDownloadInvalidDataForPackageReference:(id)a1;
- (void)packageDownloader:(id)a0 didFailOnPackageReference:(id)a1 withError:(id)a2;
- (void)packageDownloader:(id)a0 didFinishPackageReference:(id)a1 localPackageReference:(id)a2;
- (void)packageDownloader:(id)a0 didStartDownloadingPackageWithReference:(id)a1;
- (void)packageDownloaderDidStart:(id)a0;
- (void)packageDownloaderDidStop:(id)a0;
- (void)packageDownloader:(id)a0 didCancelPackageReference:(id)a1;
- (void)packageDownloader:(id)a0 didChangeProgress:(double)a1;
- (void)downloadProductToDirectory:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)setStagedUpdatesOnly:(BOOL)a0;
- (id)_catalogEvaluationPredicateWithCustomOSBuildVersion:(id)a0;
- (id)_destinationURLForPackageReference:(id)a0 destinationDirectoryURL:(id)a1;
- (BOOL)_downloadPackagesForProductToDirectory:(id)a0;
- (BOOL)_evaluateProductsInCatalogWithPredicate:(id)a0 withProductManager:(id)a1 withError:(id *)a2;
- (id)_expectedDigestForDownloadedPackage:(id)a0;
- (BOOL)_isAppleInternal;
- (BOOL)_loadCatalogWithProductManager:(id)a0 withError:(id *)a1;
- (BOOL)_queueRequiredPackagesReferencesWithDownloader:(id)a0 destinationDirectoryURL:(id)a1;
- (BOOL)_shouldEvaluateStagedUpdatesOnly;
- (BOOL)_showCatalogSelector;
- (void)_tryAlternateSourceInvalidatingPackageReference:(id)a0 reason:(int)a1 downloader:(id)a2 error:(id)a3;
- (void)cancelDownloadWithCompletion:(id /* block */)a0;
- (void)findProductWithCustomOSBuildVersion:(id)a0 completionHandler:(id /* block */)a1;

@end

@class NSThread, PKDownloader, MSUProduct, MSUProductManager, NSObject;
@protocol OS_dispatch_semaphore;

@interface NBUpdateController : NSObject

@property (retain) NSThread *downloadThread;
@property (retain) NSObject<OS_dispatch_semaphore> *downloaderFinished;
@property double lastProgressReported;
@property (retain) MSUProduct *installedProduct;
@property (retain) NSObject<OS_dispatch_semaphore> *installWaitSemaphore;
@property (retain) PKDownloader *downloader;
@property (retain) MSUProductManager *productManager;
@property (copy) id /* block */ downloadCompletionBlock;
@property (copy) id /* block */ installCompletionBlock;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_debugModeEnabled;
- (void)installClient:(id)a0 didFailWithError:(id)a1;
- (void)installClient:(id)a0 currentState:(int)a1 package:(id)a2 progress:(double)a3 timeRemaining:(double)a4;
- (void)installClientDidFinish:(id)a0;
- (void)packageDownloader:(id)a0 didDownloadInvalidDataForPackageReference:(id)a1;
- (void)packageDownloader:(id)a0 didFailOnPackageReference:(id)a1 withError:(id)a2;
- (void)packageDownloader:(id)a0 didFinishPackageReference:(id)a1 localPackageReference:(id)a2;
- (void)packageDownloader:(id)a0 didStartDownloadingPackageWithReference:(id)a1;
- (void)packageDownloaderDidStart:(id)a0;
- (void)packageDownloaderDidStop:(id)a0;
- (void)installClientDidBegin:(id)a0;
- (void)packageDownloader:(id)a0 didChangeProgress:(double)a1;
- (id)_catalogURL;
- (id)_downloadDirectory:(id)a0;
- (id)_installLocationForRequest:(id)a0;
- (id)_lastCatalogCheckTimestamp;
- (void)downloadProducts:(id)a0;
- (void)getInstallableProductsWithCompletion:(id /* block */)a0;
- (void)installPackageWithReference:(id)a0;
- (id)notificationBundleInstalledForProductKey:(id)a0;
- (BOOL)productIsSkippable:(id)a0 lastCatalogCheckTimeStamp:(id)a1 considerStagedUpdatesOnly:(BOOL)a2;

@end

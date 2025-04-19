@class NSThread, PKDownloader, NSMutableDictionary, NSError, NSMutableSet, SUProduct;

@interface SUDownloader : NSObject {
    unsigned long long _alreadyDownloadedSize;
}

@property (retain, nonatomic) PKDownloader *downloader;
@property (retain, nonatomic) NSThread *downloaderThread;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain) NSError *recentError;
@property (retain) NSMutableDictionary *currentlyDownloadingToAttempts;
@property (retain) NSMutableSet *refAbsoluteURLsAttempted;
@property (readonly) BOOL background;
@property (readonly) BOOL cancelled;
@property (readonly) SUProduct *product;
@property (readonly) unsigned long long currentlyDownloaded;
@property (readonly) unsigned long long totalDownloadSize;
@property (readonly) double finiteProgress;
@property (readonly) double estimatedTimeRemaining;

- (void)dealloc;
- (void)cancel;
- (void)cancelAndWaitUntilFullyCanceled;
- (void)__runBlock:(id /* block */)a0;
- (void)_cancelDownloaderThread;
- (id)_packageIdentifiersToReferences:(id)a0;
- (id)_packageReferenceForPackageIdentifier:(id)a0 withProductKey:(id)a1 invalidatingPreviousRef:(id)a2;
- (id)_packageReferenceForRetryingFailedPackageReference:(id)a0 invalidatingCurrentReference:(BOOL)a1;
- (void)_runBlockOnDownloaderThread:(id /* block */)a0 waitUntilDone:(BOOL)a1 ignoreIfThreadStopped:(BOOL)a2;
- (void)_runBlockOnThread:(id)a0 withBlock:(id /* block */)a1 waitUntilDone:(BOOL)a2;
- (id)_suPackageReferenceForPKPackageReference:(id)a0 withIntegrityInformation:(id)a1;
- (id)_suPackageReferencesToContentCachingRefs:(id)a0;
- (id)initWithProduct:(id)a0 inBackground:(BOOL)a1;
- (void)packageDownloader:(id)a0 didDownloadInvalidDataForPackageReference:(id)a1;
- (void)packageDownloader:(id)a0 didFailOnPackageReference:(id)a1 withError:(id)a2;
- (void)packageDownloader:(id)a0 didFinishPackageReference:(id)a1 localPackageReference:(id)a2;
- (void)packageDownloader:(id)a0 didReceiveChallenge:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)packageDownloader:(id)a0 didStartDownloadingPackageWithReference:(id)a1;
- (BOOL)packageDownloader:(id)a0 shouldRetryFailedPackageReference:(id)a1 previousError:(id)a2;
- (void)packageDownloader:(id)a0 willSendRequestForAuthenticationChallenge:(id)a1;
- (void)packageDownloaderDidStart:(id)a0;
- (void)packageDownloaderDidStop:(id)a0;
- (void)startDownloadWithCompletionHandler:(id /* block */)a0;
- (void)stopDownloader;

@end

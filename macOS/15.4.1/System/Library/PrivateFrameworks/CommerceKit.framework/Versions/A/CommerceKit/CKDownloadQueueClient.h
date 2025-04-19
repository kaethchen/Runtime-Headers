@interface CKDownloadQueueClient : NSObject <ISDownloadQueueObserver>

@property long long downloadTypesMask;
@property (copy) id /* block */ observerBlock;

- (void).cxx_destruct;
- (void)download:(id)a0 didUpdateStatus:(id)a1;
- (void)downloadQueueDidAddDownload:(id)a0;
- (void)downloadQueueDidCheckServerDownloadQueueForAccount:(id)a0 withDownloadCount:(long long)a1 newDownloads:(id)a2;
- (void)downloadQueueDidRemoveDownload:(id)a0 queueIsIdle:(BOOL)a1;

@end

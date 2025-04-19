@class NSString, NSArray;

@interface CKAssetDownloadQueue : NSObject

@property (readonly) NSString *identifier;
@property (readonly) NSArray *downloads;

+ (id)downloadQueueWithIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)a0;
- (void)pauseDownloads:(id)a0;
- (id)_identifiersForDownloads:(id)a0;
- (void)addDownload:(id)a0;
- (id)addDownloadQueueObserver:(id)a0;
- (void)addDownloads:(id)a0;
- (void)cancelDownloads:(id)a0;
- (id)downloadWithItemIdentifier:(id)a0;
- (void)finishDownloads:(id)a0;
- (void)removeDownloadQueueObserver:(id)a0;
- (void)resumeDownloads:(id)a0;

@end

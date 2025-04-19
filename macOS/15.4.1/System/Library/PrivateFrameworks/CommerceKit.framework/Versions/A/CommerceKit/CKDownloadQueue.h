@class NSArray, NSMutableDictionary, CKDownloadQueueClient, NSLock;

@interface CKDownloadQueue : CKServiceInterface {
    NSMutableDictionary *_downloadsByItemID;
    NSLock *_downloadsLock;
    NSLock *_tokenLock;
    id _observerToken;
}

@property (retain, nonatomic) NSMutableDictionary *downloadQueueObservers;
@property (retain, nonatomic) CKDownloadQueueClient *sharedObserver;
@property (readonly, nonatomic) NSArray *downloads;

+ (id)sharedDownloadQueue;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (id)addObserver:(id)a0;
- (void)connectionWasInterrupted;
- (id)initWithStoreClient:(id)a0;
- (void)addDownload:(id)a0;
- (id)addObserver:(id)a0 forDownloadTypes:(long long)a1;
- (id)addObserverForDownloadTypes:(long long)a0 withBlock:(id /* block */)a1;
- (BOOL)cacheReceiptDataForDownload:(id)a0;
- (void)cancelDownload:(id)a0 promptToConfirm:(BOOL)a1 askToDelete:(BOOL)a2;
- (void)checkStoreDownloadQueueForAccount:(id)a0;
- (id)downloadForItemIdentifier:(unsigned long long)a0;
- (id)downloads;
- (void)fetchIconForItemIdentifier:(unsigned long long)a0 atURL:(id)a1 replyBlock:(id /* block */)a2;
- (void)lockApplicationsForBundleID:(id)a0;
- (void)lockedApplicationTriedToLaunchAtPath:(id)a0;
- (void)pauseDownloadWithItemIdentifier:(unsigned long long)a0;
- (void)performedIconAnimationForDownloadWithIdentifier:(unsigned long long)a0;
- (void)removeDownloadWithItemIdentifier:(unsigned long long)a0;
- (void)resumeDownloadWithItemIdentifier:(unsigned long long)a0;
- (void)unlockApplicationsWithBundleIdentifier:(id)a0;

@end

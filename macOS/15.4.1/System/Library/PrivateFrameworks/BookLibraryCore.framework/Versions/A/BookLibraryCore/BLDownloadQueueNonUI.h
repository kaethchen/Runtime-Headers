@class BLServiceProxy, NSArray, BLDownloadQueueServerProgressObserver, NSString;

@interface BLDownloadQueueNonUI : NSObject <BUAccountsObserving>

@property (readonly, nonatomic) BLServiceProxy *serviceProxy;
@property (readonly, nonatomic) BLDownloadQueueServerProgressObserver *serverProgressObserver;
@property (readonly, nonatomic) NSArray *downloads;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)cancelAllActiveDownloads;
+ (id)innerSharedInstance;
+ (void)overrideSharedInstance:(id)a0;
+ (void)prepareForRemoveApp;

- (void)dealloc;
- (id)init;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)account:(unsigned long long)a0 didChangeWithReason:(unsigned long long)a1;
- (void)purchaseWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)reloadFromServerWithCompletion:(id /* block */)a0;
- (void)_addDownloadWithMetadata:(id)a0 isRestore:(BOOL)a1 completion:(id /* block */)a2;
- (void)_cancelAllPausedDownloads;
- (id)_dateFromObject:(id)a0;
- (id)_numberFromObject:(id)a0;
- (void)_purchaseWithRequest:(id)a0 uiHostProxy:(id)a1 completion:(id /* block */)a2;
- (id)_stringFromObject:(id)a0;
- (void)addDownloadWithMetadata:(id)a0 completion:(id /* block */)a1;
- (void)addDownloadWithPermlink:(id)a0 title:(id)a1 completion:(id /* block */)a2;
- (void)addDownloadWithPurchaseParameters:(id)a0 completion:(id /* block */)a1;
- (void)addDownloadWithPurchaseParameters:(id)a0 storeID:(id)a1 completion:(id /* block */)a2;
- (void)addDownloadsWithManifestRequest:(id)a0 completion:(id /* block */)a1;
- (void)addDownloadsWithMetadata:(id)a0 completion:(id /* block */)a1;
- (void)addRestoreDownloadWithMetadata:(id)a0 completion:(id /* block */)a1;
- (void)addRestoreDownloadsWithMetadata:(id)a0 completion:(id /* block */)a1;
- (void)cancelAllActiveDownloadsWithCompletion:(id /* block */)a0;
- (void)cancelDownloadWithID:(id)a0 withCompletion:(id /* block */)a1;
- (void)pauseDownloadWithID:(id)a0 withCompletion:(id /* block */)a1;
- (void)processAutomaticDownloadsWithReply:(id /* block */)a0;
- (void)purchaseWithBuyParameters:(id)a0 storeID:(id)a1 completion:(id /* block */)a2;
- (void)purchaseWithBuyParameters:(id)a0 storeID:(id)a1 isAudiobook:(BOOL)a2 completion:(id /* block */)a3;
- (void)purchaseWithBuyParameters:(id)a0 storeID:(id)a1 isAudiobook:(BOOL)a2 userInfo:(id)a3 completion:(id /* block */)a4;
- (void)restartDownloadWithID:(id)a0 withCompletion:(id /* block */)a1;
- (void)resumeDownloadWithID:(id)a0 withCompletion:(id /* block */)a1;

@end

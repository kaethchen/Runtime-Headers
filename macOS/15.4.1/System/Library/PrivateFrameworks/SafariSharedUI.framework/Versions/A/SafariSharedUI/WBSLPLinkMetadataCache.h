@class NSString, NSMutableDictionary, NSURL, WBSLPLinkMetadataSQLiteStore, WBSOnDiskDataCache, NSObject;
@protocol OS_dispatch_queue;

@interface WBSLPLinkMetadataCache : NSObject <WBSDataCacheDelegate, WBSSQLiteStoreDelegate> {
    WBSOnDiskDataCache *_metadataDiskCache;
    WBSLPLinkMetadataSQLiteStore *_metadataDatabase;
    NSObject<OS_dispatch_queue> *_internalQueue;
    id /* block */ _setUpCompletionHandler;
    long long _cacheState;
    NSMutableDictionary *_urlStringsToMetadataInfo;
    BOOL _isInMemoryStorePrewarmed;
}

@property (readonly, copy, nonatomic) NSURL *databaseURL;
@property (readonly, copy, nonatomic) NSURL *diskCacheURL;
@property (readonly, nonatomic) BOOL evictionEnabled;
@property (readonly, nonatomic) unsigned long long maximumNumberOfEntries;
@property (readonly, nonatomic) double expirationInterval;
@property (readonly, nonatomic) BOOL storesMetadataOnDisk;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)openWithCompletionHandler:(id /* block */)a0;
- (void)savePendingChangesBeforeTermination;
- (void)sqliteStoreDidFailDatabaseIntegrityCheck:(id)a0 completionHandler:(id /* block */)a1;
- (void)sqliteStoreDidFallBackToInMemoryStore:(id)a0;
- (void)_didFailCacheWriteForMetadataInfo:(id)a0 completionHandler:(id /* block */)a1;
- (void)_didFinishCacheWriteWithCompletionHandler:(id /* block */)a0;
- (void)_discardAllMetadataInfo;
- (void)_discardMetadataInfoForURLString:(id)a0;
- (void)_evictCacheItemsIfNecessaryWithCompletionHandler:(id /* block */)a0;
- (void)_finishSetUpWithStatus:(long long)a0;
- (long long)_internalStatusFromWBSSQLStoreStatus:(long long)a0;
- (BOOL)_isMetadataExpiredWithInfo:(id)a0;
- (BOOL)_isUsingInMemoryDatabase;
- (void)_purgeMetadataForURLStrings:(id)a0 completionHandler:(id /* block */)a1;
- (void)_setMetadata:(id)a0 forURLString:(id)a1 lastFetchDate:(id)a2 lastFetchDidSucceed:(BOOL)a3 metadataHasImage:(BOOL)a4 existingInfo:(id)a5 completionHandler:(id /* block */)a6;
- (void)_storeMetadataInfo:(id)a0 forURLString:(id)a1;
- (id)_storedMetadataInfoForURLString:(id)a0;
- (void)closeAfterPendingChangesWithCompletionHandler:(id /* block */)a0;
- (void)dataCacheDidSetUp:(id)a0;
- (void)getMetadataInfoForURLString:(id)a0 completionHandler:(id /* block */)a1;
- (void)getMetadataWithInfo:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithCacheDirectoryURL:(id)a0 expirationInterval:(double)a1;
- (id)initWithCacheDirectoryURL:(id)a0 expirationInterval:(double)a1 maximumNumberOfEntries:(unsigned long long)a2;
- (BOOL)isMetadataCachedWithInfo:(id)a0;
- (void)prewarmInMemoryStoreWithCompletionHandler:(id /* block */)a0;
- (void)removeAllMetadataWithCompletionHandler:(id /* block */)a0;
- (void)removeMetadataWithURLString:(id)a0 completionHandler:(id /* block */)a1;
- (void)reuseMetadataOfURLString:(id)a0 forURLString:(id)a1 completionHandler:(id /* block */)a2;
- (void)setMetadata:(id)a0 forURLString:(id)a1 lastFetchDate:(id)a2 lastFetchDidSucceed:(BOOL)a3 metadataHasImage:(BOOL)a4 completionHandler:(id /* block */)a5;

@end

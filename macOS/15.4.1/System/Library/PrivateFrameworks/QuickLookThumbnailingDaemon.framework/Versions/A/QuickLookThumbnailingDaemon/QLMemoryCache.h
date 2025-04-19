@class NSObject, NSMutableDictionary, _QLCacheThread, NSMutableArray, NSLock;
@protocol OS_os_transaction;

@interface QLMemoryCache : NSObject {
    BOOL _cacheEnabled;
    NSMutableDictionary *_thumbnailData;
    NSMutableArray *_thumbnailDataToSave;
    NSLock *_memoryLock;
    NSObject<OS_os_transaction> *_pendingSavesTransaction;
}

@property unsigned long long memoryUsed;
@property (weak) _QLCacheThread *cacheThread;

- (void).cxx_destruct;
- (void)reset;
- (void)_getReadLock;
- (void)_getWriteLock;
- (void)_invalidateThumbnailData:(id)a0;
- (void)_releaseReadLock;
- (void)_releaseWriteLock;
- (BOOL)addThumbnailData:(id)a0;
- (BOOL)hasThumbnailDataToSave;
- (id)initWithCacheThread:(id)a0;
- (void)removeCachedThumbnailsFromUninstalledFileProvidersWithIdentifiers:(id)a0;
- (void)removeCachedThumbnailsFromUninstalledFileProvidersWithRemainingFileProviderIdentifiers:(id)a0;
- (BOOL)sendThumbnailDataForThumbnailRequest:(id)a0 withCacheThread:(id)a1;
- (void)thumbnailDataBatchSaved:(id)a0;
- (id)thumbnailDataToSaveWithBatch:(unsigned long long)a0;
- (unsigned long long)thumbnailToSaveCount;

@end

@class CKDDirectoryContext, NSString, NSDate, CKDAssetHandleTable, CKDClonedFileCache, CKDAssetCacheTableGroup, CKDAssetVolumeTable, CKDMMCS;

@interface CKDAssetCache : NSObject {
    CKDClonedFileCache *_clonedFileCache;
}

@property (readonly, nonatomic) CKDAssetCacheTableGroup *assetCacheTableGroup;
@property (readonly, nonatomic) CKDAssetHandleTable *assetHandleTable;
@property (readonly, nonatomic) CKDAssetVolumeTable *assetVolumeTable;
@property (readonly, nonatomic) NSString *applicationBundleID;
@property (retain, nonatomic) CKDDirectoryContext *directoryContext;
@property BOOL isEvictionScheduled;
@property BOOL didDrop;
@property (nonatomic) long long checkoutCount;
@property (retain, nonatomic) NSDate *oldestLastUsedTime;
@property (weak, nonatomic) CKDMMCS *MMCS;
@property (readonly, nonatomic) BOOL isNewEmptyCache;
@property (readonly, nonatomic) NSString *fileDownloadPath;

+ (id)_sharedCachesByDirectory;
+ (id)_sharedCachesQueue;
+ (id)assetCacheWithApplicationBundleID:(id)a0 directoryContext:(id)a1 database:(id)a2 didInit:(BOOL *)a3 error:(id *)a4;

- (void)dealloc;
- (void).cxx_destruct;
- (void)drop;
- (void)clearAssetCache;
- (unsigned long long)countAssetCacheItems;
- (id)findAssetHandleForItemID:(unsigned long long)a0 error:(id *)a1;
- (id)clonedFileCache;
- (void)_deleteAssetHandlesAndUnregisterItemsForUnmountedAssetVolumes;
- (id)_evictAllFilesForced:(BOOL)a0;
- (id)_evictWithEvictionInfo:(id)a0;
- (void)_expireAssetHandlesWithExpiryDate:(id)a0;
- (id)_getAssetHandlesForCachedButNotRegisteredMMCSItems:(id)a0 error:(id *)a1;
- (id)_initWithApplicationBundleID:(id)a0 directoryContext:(id)a1 database:(id)a2 error:(id *)a3;
- (void)_resetAssetInflight;
- (id)_saveData:(id)a0 error:(id *)a1;
- (void)_scheduleEvictionForDownloadedFiles;
- (id)assetHandleWithCachedPath:(id)a0;
- (void)checkAssetHandlesForRegisteredMMCSItems:(id)a0;
- (id)clearForced:(BOOL)a0;
- (id)deviceIDForVolumeIndex:(id)a0;
- (void)enumerateAssetHandlesSegregatedByVolume:(id)a0 block:(id /* block */)a1;
- (id)evictAllFilesForced:(BOOL)a0;
- (id)existingEntriesForRegisterOrPutHandles:(id)a0 volumeIndex:(id)a1;
- (void)expireAssetHandlesIfNecessary;
- (id)mmcsEngineContext;
- (BOOL)parseCachedPath:(id)a0 assetHandleUUID:(id *)a1 assetSignature:(id *)a2;
- (BOOL)parseCachedPath:(id)a0 assetHandleUUIDString:(id *)a1 assetSignatureString:(id *)a2;
- (id)registeredMMCSItemForRereferencedAsset:(id)a0 copyBlock:(id /* block */)a1;
- (void)setupPersistentStateAtStartup;
- (void)showAssetCacheInContainer:(id)a0;
- (BOOL)startTrackingGetAssetHandles:(id)a0 operationType:(long long)a1 error:(id *)a2;
- (BOOL)startTrackingRegisterOrPutAssetHandles:(id)a0 operationType:(long long)a1 error:(id *)a2;
- (void)stopTrackingAssetHandlesByItemIDs:(id)a0;
- (id)trackCachedButNotRegisteredMMCSItems:(id)a0 error:(id *)a1;
- (id)trackDownloadedData:(id)a0 signature:(id)a1 error:(id *)a2;
- (void)unregisterItemIDsAndDeleteAssetHandlesWithEvictionInfo:(id)a0;
- (void)unregisterItemsAndDeleteUnregisteredAssetHandlesWithIDs:(id)a0 deleteUnregisteredAssetHandlesWithIDs:(id)a1;
- (id)updateAssetHandlesForChunkedMMCSItems:(id)a0 error:(id *)a1;
- (BOOL)updateAssetHandlesForGetMMCSItems:(id)a0 cloneItems:(BOOL)a1 error:(id *)a2;
- (BOOL)updateAssetHandlesForPutMMCSItems:(id)a0 cloneItems:(BOOL)a1 error:(id *)a2;
- (id)updateAssetHandlesForRegisteredMMCSItems:(id)a0 error:(id *)a1;
- (void)updateLastAccessTimeForUUID:(id)a0;
- (id)volumeIndexForDeviceID:(id)a0;

@end

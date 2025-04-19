@class CKContainerID, NSString, NSMutableDictionary, NSObject, CKDLogicalDeviceContext, CKAccountOverrideInfo, CKDPCSSQLCache, CKDPCSMemoryCache;
@protocol OS_dispatch_queue;

@interface CKDPCSCache : NSObject <NSDiscardableContent>

@property (nonatomic) unsigned long long accessCount;
@property (readonly, nonatomic, getter=isContentDiscarded) BOOL contentDiscarded;
@property (readonly, nonatomic) CKDPCSSQLCache *sqlCache;
@property (readonly, nonatomic) CKDPCSMemoryCache *recordMemoryCache;
@property (readonly, nonatomic) CKDPCSMemoryCache *zoneMemoryCache;
@property (readonly, nonatomic) CKDPCSMemoryCache *shareMemoryCache;
@property (retain, nonatomic) NSMutableDictionary *outstandingFetches;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fetchQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, nonatomic) CKDLogicalDeviceContext *deviceContext;
@property (readonly, nonatomic) CKContainerID *containerID;
@property (readonly, nonatomic) CKAccountOverrideInfo *accountOverrideInfo;
@property (readonly, nonatomic) NSString *accountID;
@property (readonly, nonatomic) NSString *encryptionServiceName;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)beginContentAccess;
- (void)discardContentIfPossible;
- (void)endContentAccess;
- (id)CKStatusReportArray;
- (void)_setPCSData:(id)a0 forFetchedRecordID:(id)a1 withScope:(long long)a2 withCompletionHandler:(id /* block */)a3;
- (void)_discardSQLCache;
- (void)_lockedAddOutstandingFetch:(id)a0 forItemIDString:(id)a1 databaseScope:(long long)a2;
- (void)_lockedCreatePCSCacheFetchOfItem:(id)a0 forOperation:(id)a1 options:(unsigned long long)a2 fetchCreator:(id /* block */)a3 withCompletionHandler:(id /* block */)a4;
- (void)_lockedFetchPCSForItem:(id)a0 memoryCache:(id)a1 forOperation:(id)a2 options:(unsigned long long)a3 fetchCreator:(id /* block */)a4 withCompletionHandler:(id /* block */)a5;
- (id)_lockedGetOutstandingFetchForOperation:(id)a0 options:(unsigned long long)a1 itemIDString:(id)a2;
- (void)_lockedGetSQLCacheWithCompletionHandler:(id /* block */)a0;
- (void)_lockedHandleMemoryFetchOfItem:(id)a0 pcsData:(id)a1 forOperation:(id)a2 options:(unsigned long long)a3 fetchCreator:(id /* block */)a4 withCompletionHandler:(id /* block */)a5;
- (void)_lockedInvalidateAllOutstandingPCSFetchesForItemIDString:(id)a0 databaseScope:(long long)a1;
- (void)_lockedRemoveOutstandingFetch:(id)a0 forItemIDString:(id)a1 databaseScope:(long long)a2;
- (void)_setPCSData:(id)a0 forFetchedShareID:(id)a1 withScope:(long long)a2 withCompletionHandler:(id /* block */)a3;
- (void)_setPCSData:(id)a0 forFetchedZoneID:(id)a1 withScope:(long long)a2 withCompletionHandler:(id /* block */)a3;
- (void)_updateMemoryCacheWithPCSData:(id)a0 forItemWithID:(id)a1 inMemoryCache:(id)a2 databaseScope:(long long)a3 withCompletionHandler:(id /* block */)a4;
- (void)clearInvalidatedPCSSQLCacheEntriesWithSkipZonePCS:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)clearPCSCaches;
- (void)clearPCSMemoryCaches;
- (void)fetchPCSForRecordWithID:(id)a0 forOperation:(id)a1 options:(unsigned long long)a2 withCompletionHandler:(id /* block */)a3;
- (void)fetchPCSForShareWithID:(id)a0 forOperation:(id)a1 options:(unsigned long long)a2 withCompletionHandler:(id /* block */)a3;
- (void)fetchPCSForZoneWithID:(id)a0 forOperation:(id)a1 options:(unsigned long long)a2 withCompletionHandler:(id /* block */)a3;
- (void)getSQLCache:(id /* block */)a0;
- (BOOL)hasStatusToReport;
- (id)initWithDeviceContext:(id)a0 containerID:(id)a1 accountOverrideInfo:(id)a2 accountID:(id)a3 encryptionServiceName:(id)a4;
- (void)removePCSDataForItemsInShareWithID:(id)a0;
- (void)removePCSDataForItemsInZoneWithID:(id)a0;
- (void)runMemoryCacheEviction;
- (void)updateMemoryCacheWithRecordPCSData:(id)a0 forRecordWithID:(id)a1 databaseScope:(long long)a2 withCompletionHandler:(id /* block */)a3;
- (void)updateMemoryCacheWithSharePCSData:(id)a0 forShareWithID:(id)a1 databaseScope:(long long)a2 withCompletionHandler:(id /* block */)a3;
- (void)updateMemoryCacheWithZonePCSData:(id)a0 forZoneWithID:(id)a1 databaseScope:(long long)a2 withCompletionHandler:(id /* block */)a3;

@end

@class CKContainerImplementation, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface CKDatabaseImplementation : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *underlyingDispatchQueue;
@property (readonly, nonatomic) long long databaseScope;
@property (readonly, weak, nonatomic) CKContainerImplementation *containerImplementation;
@property (readonly, nonatomic) long long scope;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;

- (id)description;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)checkSupportedDeviceCapabilitiesInZone:(id)a0 desiredCapabilities:(id)a1 options:(id)a2 wrappingDatabase:(id)a3 convenienceConfiguration:(id)a4 completionHandler:(id /* block */)a5;
- (void)clearAssetCache;
- (id)CKStatusReportArray;
- (void)clearAuthTokensForRecordWithID:(id)a0;
- (void)_addOperation:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 isConvenience:(BOOL)a3;
- (void)_scheduleConvenienceOperation:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2;
- (void)addOperation:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2;
- (void)clearCacheEntriesForRecord:(id)a0 completionHandler:(id /* block */)a1;
- (void)clearCacheEntriesForZone:(id)a0 completionHandler:(id /* block */)a1;
- (void)clearCachesWithOptions:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)clearInvalidatedPCSCacheEntriesIfNeeded;
- (void)clearRecordCache;
- (unsigned long long)countAssetCacheItems;
- (void)deleteRecordWithID:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)deleteRecordZoneWithID:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)deleteSubscriptionWithID:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)fetchAllRecordZonesWithWrappingDatabase:(id)a0 convenienceConfiguration:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchAllSubscriptionsWithWrappingDatabase:(id)a0 convenienceConfiguration:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchPCSFromCacheForRecordWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchPCSFromCacheForShareWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchPCSFromCacheForZoneWithID:(id)a0 localCacheOnly:(BOOL)a1 unitTestOverrides:(id)a2 completionHandler:(id /* block */)a3;
- (void)fetchRecordWithID:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)fetchRecordZoneWithID:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)fetchSubscriptionWithID:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)getCorruptRecordsForAllZonesWithCompletionHandler:(id /* block */)a0;
- (id)initInternalWithContainerImplementation:(id)a0 scope:(long long)a1;
- (void)performQuery:(id)a0 inZoneWithID:(id)a1 wrappingDatabase:(id)a2 convenienceConfiguration:(id)a3 completionHandler:(id /* block */)a4;
- (void)saveRecord:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)saveRecordZone:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)saveSubscription:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)showAssetCache;

@end

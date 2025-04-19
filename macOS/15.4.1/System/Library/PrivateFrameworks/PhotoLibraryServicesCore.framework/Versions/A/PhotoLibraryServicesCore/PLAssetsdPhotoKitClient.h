@interface PLAssetsdPhotoKitClient : PLAssetsdBaseClient <PLAssetsdPhotoKitChangesRequestClient>

+ (BOOL)inTransactionProxy;
+ (BOOL)sendChangesRequest:(id)a0 usingProxyFactory:(id)a1 error:(id *)a2;
+ (void)sendChangesRequest:(id)a0 usingProxyFactory:(id)a1 reply:(id /* block */)a2;
+ (void)setInTransactionProxy:(BOOL)a0 queue:(id)a1;

- (id)clientName;
- (id)analyzeAssets:(id)a0 forFeature:(unsigned long long)a1 withCompletionHandler:(id /* block */)a2;
- (id)analyzeLibraryForFeature:(unsigned long long)a0 withCompletionHandler:(id /* block */)a1;
- (BOOL)cancelReservedCloudIdentifiersWithEntityName:(id)a0 error:(id *)a1;
- (id)getUUIDsForAssetObjectIDs:(id)a0 filterPredicate:(id)a1 context:(id)a2 error:(id *)a3;
- (BOOL)processUniversalSearchJITForAssetUUID:(id)a0 processingTypes:(unsigned long long)a1 error:(id *)a2;
- (id)processUniversalSearchJITForCoreSpotlightUniqueIdentifier:(id)a0 bundleID:(id)a1 processingTypes:(unsigned long long)a2 error:(id *)a3;
- (id)reserveCloudIdentifiersWithEntityName:(id)a0 count:(unsigned long long)a1 error:(id *)a2;
- (id)reservedCloudIdentifiersWithEntityName:(id)a0 error:(id *)a1;
- (BOOL)resetStateForMediaProcessingTaskID:(unsigned long long)a0 assetUUIDs:(id)a1 resetOptions:(unsigned long long)a2 error:(id *)a3;
- (id)resolveLocalIdentifiersForCloudIdentifiers:(id)a0 error:(id *)a1;
- (BOOL)sendChangesRequest:(id)a0 error:(id *)a1;
- (void)sendChangesRequest:(id)a0 reply:(id /* block */)a1;

@end

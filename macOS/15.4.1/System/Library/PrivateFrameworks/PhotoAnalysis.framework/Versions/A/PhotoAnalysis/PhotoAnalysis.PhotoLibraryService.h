@class NSSet, NSString, NSArray, NSError, NSDictionary;

@interface PhotoAnalysis.PhotoLibraryService : _TtCs12_SwiftObject <PLPhotoAnalysisGenericServiceProtocol, PLPhotoAnalysisPhotoLibraryServiceProtocol> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ worker;
    void /* unknown type, empty encoding */ associatedWorkers;
    void /* unknown type, empty encoding */ stateHolder;
    void /* unknown type, empty encoding */ operationManager;
}

- (void)cancelOperationsWithIdentifiers:(id)a0 reply:(id /* block */)a1;
- (void)updateKeyAssetOfSocialGroupsWithUUIDs:(NSSet *)a0 operationID:(NSString *)a1 reply:(void (^)(NSError *))a2;
- (void)computeCacheDidLoad:(void (^)(NSError *))a0;
- (void)curatedAssetsFromAssetUUIDs:(NSArray *)a0 options:(NSDictionary *)a1 operationID:(NSString *)a2 reply:(void (^)(NSArray *, NSError *))a3;
- (void)exportMomentContextDataWithReply:(void (^)(NSString *, NSError *))a0;
- (void)extendedCuratedAssetsFromAssetUUIDs:(NSArray *)a0 options:(NSDictionary *)a1 operationID:(NSString *)a2 reply:(void (^)(NSArray *, NSError *))a3;
- (void)keyAssetFromAssetUUIDs:(NSArray *)a0 inAllAssets:(NSArray *)a1 operationID:(NSString *)a2 reply:(void (^)(NSString *, NSError *))a3;
- (void)keyAssetUUIDOfSocialGroupWithPersonUUIDs:(NSSet *)a0 candidateAssetUUIDs:(NSSet *)a1 operationID:(NSString *)a2 reply:(void (^)(NSString *, NSError *))a3;
- (void)requestPersonalizedSensingRefreshWithReply:(void (^)(BOOL, NSError *))a0;

@end

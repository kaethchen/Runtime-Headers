@protocol PLPhotoAnalysisServiceProvider;

@interface PLPhotoAnalysisPhotoLibraryService : NSObject <PLPhotoAnalysisCancellableService> {
    id<PLPhotoAnalysisServiceProvider> _serviceProvider;
}

+ (void)notifyComputeCacheDidLoadForLibrary:(id)a0 reply:(id /* block */)a1;

- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;
- (void)cancelOperationsWithIdentifiers:(id)a0 reply:(id /* block */)a1;
- (void)updateKeyAssetOfSocialGroupsWithUUIDs:(id)a0 operationID:(id)a1 reply:(id /* block */)a2;
- (void)computeCacheDidLoad:(id /* block */)a0;
- (void)curatedAssetsFromAssetUUIDs:(id)a0 options:(id)a1 operationID:(id)a2 reply:(id /* block */)a3;
- (void)exportMomentContextDataWithReply:(id /* block */)a0;
- (void)extendedCuratedAssetsFromAssetUUIDs:(id)a0 options:(id)a1 operationID:(id)a2 reply:(id /* block */)a3;
- (void)keyAssetFromAssetUUIDs:(id)a0 inAllAssets:(id)a1 operationID:(id)a2 reply:(id /* block */)a3;
- (id)keyAssetUUIDOfSocialGroupWithPersonUUIDs:(id)a0 candidateAssetUUIDs:(id)a1 operationID:(id)a2 error:(id *)a3;
- (void)requestPersonalizedSensingRefreshWithReply:(id /* block */)a0;

@end

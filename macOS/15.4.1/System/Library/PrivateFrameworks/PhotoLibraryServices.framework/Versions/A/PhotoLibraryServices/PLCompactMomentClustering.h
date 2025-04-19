@class NSSet;

@interface PLCompactMomentClustering : NSObject {
    NSSet *_locationsOfInterest;
    NSSet *_frequentLocations;
}

- (void)dealloc;
- (id)_assetClustersFromDataClusters:(id)a0;
- (id)_runDBSCANClusteringWithAssets:(id)a0;
- (id)assetsByLocationTypeFromAssets:(id)a0;
- (id)_clusterAssetsWithUnusableLocation:(id)a0;
- (id)_clusterAssetsWithUsableLocation:(id)a0;
- (id)_mergeAssetClustersWithLocation:(id)a0 withAssetClustersWithoutLocation:(id)a1;
- (id)_processedLocationTypeByAssetUUIDFromAssets:(id)a0;
- (id)_shareStateByAssetUUIDFromAssets:(id)a0 momentHasMixedOwnership:(BOOL *)a1;
- (unsigned short)_validLocationTypeForBucketingAssets:(unsigned short)a0;
- (id)createAssetClustersForAssetsInDay:(id)a0;
- (id)initWithDataManager:(id)a0 frequentLocations:(id)a1;
- (id)newAssetClusterFromAssetsSortedByDate:(id)a0;

@end

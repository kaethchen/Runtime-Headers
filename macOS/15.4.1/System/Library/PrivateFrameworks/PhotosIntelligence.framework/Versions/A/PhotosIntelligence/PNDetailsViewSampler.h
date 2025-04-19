@interface PNDetailsViewSampler : NSObject

+ (id)_logger;
+ (id)_assetObjectIDsFromClusters:(id)a0 facesByAssetIdentifiers:(id)a1 includeExtraAssets:(unsigned long long)a2;
+ (unsigned long long)_maximumNumberOfClustersForCuratedAssetCount:(unsigned long long)a0 fetchLimit:(unsigned long long)a1;
+ (id)_timeBasedAssetClustersForAssets:(id)a0 maximumClusterCount:(unsigned long long)a1 photoLibrary:(id)a2;
+ (id)fetchMovieAssetsForPerson:(id)a0 options:(id)a1;
+ (id)fetchMovieAssetsForSocialGroup:(id)a0 options:(id)a1;

@end

@interface PLCloudResourcePrefetchPredicates : NSObject

+ (id)_assetIsUnadjustedPredicate;
+ (id)_assetPredicateForCPLResourceType:(unsigned long long)a0 additionalAssetPredicates:(id)a1 additionalResourcePredicates:(id)a2 options:(id)a3;
+ (id)_excludeMomentShareAssetsPredicate;
+ (id)_irisConditionPredicate;
+ (id)_masterPredicateForCPLResourceType:(unsigned long long)a0 additionalAssetPredicates:(id)a1 additionalResourcePredicates:(id)a2 options:(id)a3;
+ (id)_missingThumbnailPredicate;
+ (id)_predicateForImageResourcePixelsLessOrEqual:(long long)a0;
+ (id)_predicateForMaxFilesize:(unsigned long long)a0;
+ (id)_predicateForResourceCreatedAfterDate:(id)a0;
+ (id)_predicateToPrefetchMemoryKeyAssets:(id)a0 photoLibrary:(id)a1 options:(id)a2;
+ (id)_predicateToPrefetchSuggestions:(id)a0 photoLibrary:(id)a1 options:(id)a2;
+ (id)_prefetchResourceForAsset:(id)a0 inResourceTypes:(id)a1 options:(id)a2;
+ (double)_resourceLastPrunedPrefetchTimeInterval;
+ (id)_resourcesToPrefetchForAsset:(id)a0 options:(id)a1;
+ (id)predicateForOriginalResourcesForPrefetchLocallyAvailableOnly:(BOOL)a0;
+ (id)predicateToPrefetchAdjustedMediaMetadataResourcesWithOptions:(id)a0 photoLibrary:(id)a1;
+ (id)predicateToPrefetchHighlightWithUUIDs:(id)a0 photoLibrary:(id)a1;
+ (id)predicateToPrefetchMediaMetadataResourcesWithOptions:(id)a0 photoLibrary:(id)a1;
+ (id)predicateToPrefetchMemories:(id)a0 photoLibrary:(id)a1 options:(id)a2;
+ (id)predicatesForComputeSync:(id)a0 photoLibrary:(id)a1;
+ (id)predicatesForMemories:(id)a0 photoLibrary:(id)a1;
+ (id)predicatesForNonThumbnails:(id)a0 lastCompletePrefetchDate:(id)a1;
+ (id)predicatesForOriginalResources:(id)a0 additionalResourcePredicates:(id)a1;
+ (id)predicatesForThumbnails:(id)a0;
+ (id)predicatesForWidget:(id)a0 photoLibrary:(id)a1;

@end

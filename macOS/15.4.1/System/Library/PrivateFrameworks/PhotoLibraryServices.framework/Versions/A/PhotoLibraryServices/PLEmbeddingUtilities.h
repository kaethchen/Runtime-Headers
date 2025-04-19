@interface PLEmbeddingUtilities : NSObject

+ (id)averageTop:(unsigned long long)a0 forEmbeddingCompareObjectsByAssetUUID:(id)a1 sortAscending:(BOOL)a2;
+ (id)assetUUIDsFromEmbeddingCompareObjects:(id)a0;
+ (double)cosineSimilarityBetweenVector:(id)a0 secondVector:(id)a1;
+ (id)distanceByAssetUUIDFromEmbeddingCompareObjects:(id)a0;
+ (id)extractNumericalValuesForScenePrint:(id)a0;
+ (id)fetchAssetsForCLIPGenerationFromPhotoLibrary:(id)a0 limitToExtendedAssets:(BOOL)a1 assetFetchLimit:(unsigned long long)a2 error:(out id *)a3;
+ (id)generateMappingOfEmbeddingCompareObjectsToAssetUUIDFromEmbeddingCompareObjects:(id)a0;
+ (id)generateMaxVectorFromVectors:(id)a0;
+ (id)generateNormalizedEmbeddingCompareObjects:(id)a0 fromMaxVector:(id)a1;
+ (id)generateNormalizedVector:(id)a0 fromMaxVector:(id)a1;
+ (id)generateNormalizedVectors:(id)a0 fromMaxVector:(id)a1;
+ (id)padVector:(id)a0 withZeroesForVectorWithNumberOfDimensions:(unsigned long long)a1;
+ (id)poolVectors:(id)a0;
+ (id)sortCompareObjects:(id)a0 sortAscending:(BOOL)a1;

@end

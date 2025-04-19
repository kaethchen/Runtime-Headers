@interface PNExternalAssetRelevanceUtilities : NSObject

+ (id)internalPredicateToIncludeExternalAssetsEligibleForProcessing;
+ (id)internalPredicateToIncludeExternalAssetsNeedingProcessing;
+ (id)internalPredicateToIncludeProcessedExternalAssets;
+ (long long)externalAssetEligibilityForAsset:(id)a0;
+ (BOOL)importedAssetInferredRelevant:(id)a0;

@end

@interface PLDelayedSearchIndexUpdates : NSObject

+ (void)recordAssetDescriptionIfNeeded:(id)a0;
+ (void)_recordAssetIfNeededForRelationshipChange:(id)a0 flags:(long long)a1;
+ (void)recordAdditionalAssetAttributesIfNeeded:(id)a0;
+ (void)recordAlbumIfNeeded:(id)a0;
+ (void)recordAssetIfNeeded:(id)a0;
+ (void)recordDetectedFaceIfNeeded:(id)a0;
+ (void)recordHighlightIfNeeded:(id)a0;
+ (void)recordMediaAnalysisAssetAttributesIfNeeded:(id)a0;
+ (void)recordMemoryIfNeeded:(id)a0;
+ (void)recordPersonIfNeeded:(id)a0;

@end

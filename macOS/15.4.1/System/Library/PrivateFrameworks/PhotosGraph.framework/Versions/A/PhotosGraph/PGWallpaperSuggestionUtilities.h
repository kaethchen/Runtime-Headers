@interface PGWallpaperSuggestionUtilities : NSObject

+ (id)assetFetchPropertySetsIncludingGating:(BOOL)a0;
+ (id)peopleShuffleDescriptorTitleWithCount:(unsigned long long)a0;
+ (BOOL)foundDominantPeopleSceneInAsset:(id)a0 withConfidenceThresholdHelper:(id)a1;
+ (id)peopleSceneConfidenceThresholdHelper;

@end

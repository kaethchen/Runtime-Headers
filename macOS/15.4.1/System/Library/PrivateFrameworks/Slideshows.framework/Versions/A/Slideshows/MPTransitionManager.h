@class NSMutableDictionary;

@interface MPTransitionManager : NSObject {
    NSMutableDictionary *mTransitions;
    NSMutableDictionary *mTransitionCategories;
    NSMutableDictionary *mTransitionPresets;
}

+ (id)sharedManager;
+ (void)loadTransitionManagerWithPaths:(id)a0;
+ (void)releaseSharedManager;

- (void)dealloc;
- (id)initWithPaths:(id)a0;
- (double)defaultDurationForTransitionID:(id)a0;
- (id)allCategoryIDs;
- (id)allTransitionIDs;
- (id)attributesForTransitionID:(id)a0 andPresetID:(id)a1;
- (double)beatStrengthForTransitionID:(id)a0;
- (double)bestBeatTimeForTransitionID:(id)a0;
- (id)categoryIDsForTransitionID:(id)a0;
- (id)constraintsForTransitionPresetsMatchingList:(id)a0 andCriteria:(id)a1;
- (id)controlForAttribute:(id)a0 forTransitionID:(id)a1;
- (id)descriptionForTransitionID:(id)a0;
- (id)imageResourceForTransitionID:(id)a0 withFileName:(id)a1;
- (id)localizedCategoryNameFromCategoryID:(id)a0;
- (id)localizedNameForTransitionID:(id)a0 withLanguage:(id)a1;
- (id)localizedSettingsUITitleForTitleKey:(id)a0 inTransition:(id)a1;
- (id)localizedTransitionNameForTransitionID:(id)a0;
- (id)localizedTransitionNameForTransitionID:(id)a0 andPresetID:(id)a1;
- (id)presetsForTransitionID:(id)a0;
- (id)randomTransitionPresetFromList:(id)a0 abidingWithConstraints:(id)a1;
- (id)settingsUIControlDescriptionsForTransition:(id)a0;
- (long long)transitionNeedsRandomSeedInformation:(id)a0;
- (id)transitionPresetsMatchingCriteria:(id)a0;
- (id)transitionsForCategoryID:(id)a0;
- (id)versionOfTransitionID:(id)a0;

@end

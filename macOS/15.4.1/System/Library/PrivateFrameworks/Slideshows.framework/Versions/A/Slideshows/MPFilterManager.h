@class NSArray, NSMutableDictionary;

@interface MPFilterManager : NSObject {
    NSMutableDictionary *mFilters;
    NSArray *mFilterCategories;
    NSMutableDictionary *mFilterPresets;
}

+ (id)sharedManager;
+ (void)loadFilterManagerWithPaths:(id)a0;
+ (void)releaseSharedManager;

- (void)dealloc;
- (id)initWithPaths:(id)a0;
- (id)allFilterIDs;
- (id)animationsForFilterID:(id)a0 andPresetID:(id)a1;
- (id)attributesForFilterID:(id)a0 andPresetID:(id)a1;
- (id)constraintsForFilterPresetsMatchingList:(id)a0 andCriteria:(id)a1;
- (id)filterCategoryIDs;
- (id)filterIDsForCategoryID:(id)a0;
- (id)filterPresetsMatchingCriteria:(id)a0;
- (id)presetIDsForFilterID:(id)a0;
- (id)randomFilter:(BOOL)a0;
- (id)randomFilterPresetFromList:(id)a0 abidingWithConstraints:(id)a1;
- (id)versionOfFilterID:(id)a0;

@end

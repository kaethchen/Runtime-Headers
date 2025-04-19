@interface ATXDemoAppLibraryProvider : NSObject

+ (id)_parseCategory:(id)a0 realCategories:(id)a1;
+ (id)bundleIdsForCategoryWithName:(id)a0 in:(id)a1;
+ (id)demoAppCategoriesForRealAppCategories:(id)a0;
+ (id)demoAppLibraryPath;
+ (id)demoSuggestionsAndRecents;
+ (BOOL)isAppLibraryDemoModeEnabled;
+ (id)loadCategoriesFromDisk;

@end

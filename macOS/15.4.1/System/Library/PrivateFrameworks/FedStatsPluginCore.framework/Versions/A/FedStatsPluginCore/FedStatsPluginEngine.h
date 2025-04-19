@interface FedStatsPluginEngine : NSObject

+ (id)runAllRecipesWithAssetProvider:(id)a0;
+ (BOOL)hasRecipeIdentifier:(id)a0 usedWithAssetProvider:(id)a1;
+ (void)removeOldRecordsFromUserDefaults;
+ (void)removeOldRecordsFromUserDefaultsBefore:(double)a0;

@end

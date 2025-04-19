@interface MFMessageRouterUtilities : NSObject

+ (id)syncedRulesPath;
+ (void)resetShouldSpotlightIndexJunkLevel;
+ (id)rulesActiveStatePath;
+ (BOOL)shouldSpotlightIndexJunkLevel;
+ (id)sortRulesPath;
+ (id)syncedRulesRelativePath;
+ (id)unsyncedRulesPath;

@end

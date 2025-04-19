@interface MapsSuggestionsSiri : NSObject

+ (BOOL)isEnabled;
+ (BOOL)canLearnFromBundleID:(id)a0;
+ (BOOL)isAllowedOnHomeScreen;
+ (id)isAllowedOnHomeScreenCondition;
+ (BOOL)isAllowedOnLockScreen;
+ (id)isAllowedOnLockScreenCondition;
+ (id)isEnabledCondition;

@end

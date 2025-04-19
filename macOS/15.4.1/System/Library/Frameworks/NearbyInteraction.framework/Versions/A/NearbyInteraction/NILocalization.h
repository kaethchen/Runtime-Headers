@interface NILocalization : NSObject

+ (id)fallbackBundle;
+ (id)localizedBundle;
+ (id)_niFrameworkBundle;
+ (id)_niLocalizedStringFromBundle:(id)a0 withKey:(id)a1;
+ (id)_niLocalizedStringFromFrameworkBundleWithKey:(id)a0;
+ (id)fallbackBundleWithBundle:(id)a0;
+ (id)localizedBundleWithBundle:(id)a0;

@end

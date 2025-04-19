@interface BKUIBundleSettings : NSObject

+ (id)objectForKey:(id)a0;
+ (void)setObject:(id)a0 forKey:(id)a1;
+ (void)synchronize;
+ (BOOL)boolForUserDefaultsKey:(id)a0;
+ (float)floatForUserDefaultsKey:(id)a0;
+ (long long)integerForUserDefaultsKey:(id)a0;
+ (BOOL)isFpEnrollHapticFeedbackDisabled;
+ (BOOL)isHideRadarButton;
+ (BOOL)isUserStudy;
+ (void)setBool:(BOOL)a0 forUserDefaultsKey:(id)a1;
+ (void)setDefaultSettingsValues;
+ (void)setInteger:(long long)a0 forUserDefaultsKey:(id)a1;

@end

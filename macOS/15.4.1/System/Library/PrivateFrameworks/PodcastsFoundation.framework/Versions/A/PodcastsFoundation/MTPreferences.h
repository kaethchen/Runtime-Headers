@interface MTPreferences : NSObject

+ (id)defaultSettings;
+ (void)registerDefaults;
+ (BOOL)_copyUserDefaultToSharedContainer:(id)a0 synchronize:(BOOL)a1;
+ (BOOL)copySettingsToSharedContainer;
+ (long long)defaultEpisodeLimit;
+ (void)moveUserDefaultToSharedContainer:(id)a0;

@end

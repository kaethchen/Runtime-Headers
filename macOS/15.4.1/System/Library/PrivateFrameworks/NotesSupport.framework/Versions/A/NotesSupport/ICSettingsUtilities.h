@interface ICSettingsUtilities : NSObject

+ (BOOL)boolForKey:(id)a0;
+ (id)objectForKey:(id)a0;
+ (void)setObject:(id)a0 forKey:(id)a1;
+ (void)setBool:(BOOL)a0 forKey:(id)a1;
+ (void)synchronizeSettingsWithUserDefaultsForKeys:(id)a0;

@end

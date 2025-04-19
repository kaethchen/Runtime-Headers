@class NSArray;

@interface LUIPrefs : NSObject

@property (class, readonly) NSArray *recentUsers;

+ (void)synchronize;
+ (id)_defaults;
+ (id)_fvunlockPreferences;
+ (id)_stringArrayForKey:(id)a0;
+ (id)_valueForKey:(id)a0 ofClass:(Class)a1 valueExists:(BOOL *)a2;

@end

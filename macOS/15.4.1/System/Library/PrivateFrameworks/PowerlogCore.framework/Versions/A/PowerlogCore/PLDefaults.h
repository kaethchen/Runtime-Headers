@class NSMutableDictionary;

@interface PLDefaults : NSObject

@property (retain) NSMutableDictionary *managedPrefsCache;
@property (retain) NSMutableDictionary *instancePrefsCache;
@property (retain) NSMutableDictionary *userPrefsCache;
@property BOOL enableRestartAtEPL;
@property BOOL debugEnabled;
@property BOOL eplEnabled;

+ (BOOL)boolForKey:(id)a0;
+ (id)objectForKey:(id)a0;
+ (void)setObject:(id)a0 forKey:(id)a1;
+ (double)doubleForKey:(id)a0;
+ (long long)longForKey:(id)a0;
+ (long long)mode;
+ (id)applicationID;
+ (id)sharedDefaults;
+ (BOOL)isClassNameDebugEnabled:(id)a0 forKey:(id)a1;
+ (id)allDefaultsEnabled;
+ (BOOL)boolForKey:(id)a0 ifNotSet:(BOOL)a1;
+ (BOOL)debugEnabled;
+ (double)doubleForKey:(id)a0 ifNotSet:(double)a1;
+ (void)enableRestartAtEPL;
+ (BOOL)eplEnabled;
+ (BOOL)fullMode;
+ (BOOL)fullModeForClass:(Class)a0;
+ (BOOL)fullPLLog;
+ (BOOL)isClassDebugEnabled:(Class)a0;
+ (BOOL)isClassDebugEnabled:(Class)a0 forKey:(id)a1;
+ (BOOL)isClassNameDebugEnabled:(id)a0;
+ (BOOL)isDevBoard;
+ (BOOL)isModelTrigger;
+ (BOOL)isModelingDebugEnabled;
+ (BOOL)isTaskFullEPLMode;
+ (BOOL)liteMode;
+ (int)liveModeQuery;
+ (long long)longForKey:(id)a0 ifNotSet:(long long)a1;
+ (BOOL)objectExistsForKey:(id)a0;
+ (id)objectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(BOOL)a2;
+ (id)objectForKey:(id)a0 ifNotSet:(id)a1;
+ (id)objectForKey:(id)a0 synchronize:(BOOL)a1;
+ (BOOL)oldFullMode;
+ (void)registerEPLNotificationWithQueue:(id)a0;
+ (void)resetUserDefaultCacheForKey:(id)a0;
+ (void)resetUserDefaultCacheForKey:(id)a0 forApplicationID:(id)a1;
+ (void)setClass:(Class)a0 debugEnabled:(BOOL)a1;
+ (void)setClass:(Class)a0 debugEnabled:(BOOL)a1 forKey:(id)a2;
+ (void)setClassName:(id)a0 debugEnabled:(BOOL)a1;
+ (void)setClassName:(id)a0 debugEnabled:(BOOL)a1 forKey:(id)a2;
+ (void)setObject:(id)a0 forKey:(id)a1 forApplicationID:(id)a2 saveToDisk:(BOOL)a3;
+ (void)setObject:(id)a0 forKey:(id)a1 saveToDisk:(BOOL)a2;
+ (BOOL)taskMode;

- (id)init;
- (void).cxx_destruct;
- (id)instancePrefsObjectForKey:(id)a0;
- (id)managedPrefsObjectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(BOOL)a2;
- (id)objectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(BOOL)a2;
- (void)resetUserDefaultCacheForKey:(id)a0 forApplicationID:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1 forApplicationID:(id)a2 saveToDisk:(BOOL)a3;
- (id)userDefaultsObjectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(BOOL)a2;

@end

@interface _HKDaemonPreferences : NSObject

@property (class, readonly, nonatomic) BOOL usingDemoDataDatabase;

+ (BOOL)setValue:(id)a0 forKey:(id)a1;
+ (id)valueForKey:(id)a0;
+ (BOOL)_boolValueForKey:(id)a0;
+ (id)_safePreferenceForKey:(id)a0 expectedReturnClass:(Class)a1;
+ (BOOL)_setPreferenceValue:(void *)a0 forKey:(id)a1;
+ (BOOL)isGenerateDemoDataSet;
+ (BOOL)isStoreDemoModeSet;
+ (BOOL)shouldGenerateDemoData;
+ (void)synchronizePreferencesWithWatch:(id)a0;

@end

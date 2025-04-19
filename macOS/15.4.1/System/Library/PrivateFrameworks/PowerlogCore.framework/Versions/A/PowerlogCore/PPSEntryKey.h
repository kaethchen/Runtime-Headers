@interface PPSEntryKey : NSObject

+ (BOOL)PPSEnabled:(id)a0;
+ (BOOL)hasDynamicKeys:(id)a0;
+ (void)addAuxiliaryType:(id)a0 withEntryKey:(id)a1;
+ (id)allArrayKeysForEntryKey:(id)a0;
+ (id)allBaseKeysForEntryKey:(id)a0;
+ (id)allDMAKeysForEntryKey:(id)a0;
+ (id)allDynamicKeysForEntryKey:(id)a0;
+ (id)allEntryKeys;
+ (id)allEntryKeysForStorage:(int)a0;
+ (id)allKeysForEntryKey:(id)a0;
+ (id)allMetricsForEntryKey:(id)a0;
+ (id)anyMetricsForEntryKey:(id)a0;
+ (id)arrayMetricsForEntryKey:(id)a0;
+ (id)baseMetricsForEntryKey:(id)a0;
+ (id)categoryForEntryKey:(id)a0;
+ (int)directionalityForEntryKey:(id)a0;
+ (id)dynamicMetricsForEntryKey:(id)a0;
+ (id)dynamicTableNameForEntryKey:(id)a0;
+ (id)entryKeyForMetric:(id)a0;
+ (id)entryKeyFromSelector:(id)a0;
+ (id)entrySelectorForMetric:(id)a0;
+ (BOOL)filterEntryLoggingForEntryKey:(id)a0;
+ (BOOL)hasArrayKeys:(id)a0;
+ (BOOL)hasDMAKeys:(id)a0;
+ (id)metricsForEntryKey:(id)a0;
+ (void)resetMetricsForEntryKey:(id)a0;
+ (void)setupEntryKeyForMetric:(id)a0;
+ (int)storageForEntryKey:(id)a0;
+ (id)subsystemForEntryKey:(id)a0;
+ (long long)timeToLiveForEntryKey:(id)a0;

@end

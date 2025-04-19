@class NSString, SFAnalyticsSQLiteStore, NSMutableSet, SFAnalyticsCollection, NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface SFAnalytics : NSObject <SFAnalyticsProtocol> {
    SFAnalyticsSQLiteStore *_database;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_samplers;
    NSMutableDictionary *_multisamplers;
    unsigned char _disableLogging : 1;
}

@property (class, readonly) NSString *databasePath;

@property (retain) NSMutableSet *metricsHooks;
@property (retain) SFAnalyticsCollection *collection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addOSVersionToEvent:(id)a0;
+ (id)defaultAnalyticsDatabasePath:(id)a0;
+ (id)defaultProtectedAnalyticsDatabasePath:(id)a0;
+ (id)defaultProtectedAnalyticsDatabasePath:(id)a0 uuid:(id)a1;
+ (id)encodeSFACollection:(id)a0 error:(id *)a1;
+ (id)errorWithCode:(long long)a0 description:(id)a1;
+ (id)errorWithCode:(long long)a0 description:(id)a1 underlying:(id)a2;
+ (long long)fuzzyDaysSinceDate:(id)a0;
+ (long long)fuzzyInteger:(long long)a0;
+ (id)fuzzyNumber:(id)a0;
+ (id)hwModelID;
+ (id)logger;
+ (id)parseAction:(id)a0 error:(id *)a1;
+ (BOOL)parseEventFilter:(id)a0 format:(id)a1 error:(id *)a2;
+ (BOOL)parseRules:(id)a0 format:(id)a1 error:(id *)a2;
+ (id)parseVersions:(id)a0 error:(id *)a1;
+ (void)removeLegacyDefaultAnalyticsDatabasePath:(id)a0 usingDispatchToken:(long long *)a1;
+ (BOOL)requiredVersion:(int)a0 rules:(id)a1 reason:(id)a2 error:(id *)a3;
+ (id)treeOfUnderlyingErrors:(id)a0 depth:(long long)a1;
+ (id)underlyingErrors:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)database;
- (void)incrementIntegerPropertyForKey:(id)a0;
- (void)noteEventNamed:(id)a0 timestampBucket:(unsigned int)a1;
- (id)AddMultiSamplerForName:(id)a0 withTimeInterval:(double)a1 block:(id /* block */)a2;
- (void)addMetricsHook:(id /* block */)a0;
- (void)logEventNamed:(id)a0 class:(long long)a1 attributes:(id)a2;
- (void)noteEventNamed:(id)a0;
- (id)addMetricSamplerForName:(id)a0 withTimeInterval:(double)a1 block:(id /* block */)a2;
- (id)coreAnalyticsKeyFilter:(id)a0;
- (void)dailyCoreAnalyticsMetrics:(id)a0;
- (id)dailyMetrics;
- (id)dataPropertyForKey:(id)a0;
- (id)datePropertyForKey:(id)a0;
- (void)drainLogQueue;
- (id)eventDictForEventName:(id)a0 withAttributes:(id)a1 eventClass:(long long)a2 timestampBucket:(double)a3;
- (id)existingMetricSamplerForName:(id)a0;
- (id)existingMultiSamplerForName:(id)a0;
- (void)loadCollectionConfiguration;
- (void)logEventNamed:(id)a0 class:(long long)a1 attributes:(id)a2 timestampBucket:(unsigned int)a3;
- (void)logHardFailureForEventNamed:(id)a0 withAttributes:(id)a1;
- (void)logHardFailureForEventNamed:(id)a0 withAttributes:(id)a1 timestampBucket:(unsigned int)a2;
- (void)logMetric:(id)a0 withName:(id)a1;
- (void)logMetric:(id)a0 withName:(id)a1 oncePerReport:(BOOL)a2;
- (void)logResultForEvent:(id)a0 hardFailure:(BOOL)a1 result:(id)a2;
- (void)logResultForEvent:(id)a0 hardFailure:(BOOL)a1 result:(id)a2 timestampBucket:(unsigned int)a3;
- (void)logResultForEvent:(id)a0 hardFailure:(BOOL)a1 result:(id)a2 withAttributes:(id)a3;
- (void)logResultForEvent:(id)a0 hardFailure:(BOOL)a1 result:(id)a2 withAttributes:(id)a3 timestampBucket:(unsigned int)a4;
- (void)logRockwellFailureForEventNamed:(id)a0 withAttributes:(id)a1;
- (void)logSoftFailureForEventNamed:(id)a0 withAttributes:(id)a1;
- (void)logSoftFailureForEventNamed:(id)a0 withAttributes:(id)a1 timestampBucket:(unsigned int)a2;
- (void)logSuccessForEventNamed:(id)a0;
- (void)logSuccessForEventNamed:(id)a0 timestampBucket:(unsigned int)a1;
- (id)logSystemMetricsForActivityNamed:(id)a0 withAction:(id /* block */)a1;
- (id)metricsAccountID;
- (void)noteLaunchSequence:(id)a0;
- (id)numberPropertyForKey:(id)a0;
- (void)removeMetricSamplerForName:(id)a0;
- (void)removeMetricsHook:(id /* block */)a0;
- (void)removeMultiSamplerForName:(id)a0;
- (void)removeState;
- (void)removeStateAndUnlinkFile:(BOOL)a0;
- (void)setDataProperty:(id)a0 forKey:(id)a1;
- (void)setDateProperty:(id)a0 forKey:(id)a1;
- (void)setMetricsAccountID:(id)a0;
- (void)setNumberProperty:(id)a0 forKey:(id)a1;
- (id)startLogSystemMetricsForActivityNamed:(id)a0;
- (void)updateCollectionConfigurationWithData:(id)a0;

@end

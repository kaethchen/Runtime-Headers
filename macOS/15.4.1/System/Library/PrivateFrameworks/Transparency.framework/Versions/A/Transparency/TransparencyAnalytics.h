@class SFAnalytics, NSHashTable;

@interface TransparencyAnalytics : NSObject

@property (retain) NSHashTable *nfsObserver;
@property int token;
@property (retain) SFAnalytics *sfanalytics;

+ (id)logger;
+ (id)analyticsApplications;
+ (id)analyticsErrorData:(id)a0;
+ (unsigned long long)doKTResultWithAnalyticsForEventName:(id)a0 error:(id *)a1 block:(id /* block */)a2;
+ (unsigned long long)doKTResultWithAnalyticsForEventName:(id)a0 validateType:(unsigned long long)a1 error:(id *)a2 block:(id /* block */)a3;
+ (BOOL)doWithAnalyticsForEventName:(id)a0 error:(id *)a1 block:(id /* block */)a2;
+ (id)errorChain:(id)a0 depth:(unsigned long long)a1;
+ (id)formatEventName:(id)a0 application:(id)a1;
+ (BOOL)hasInternalDiagnostics;
+ (void)unsetGlobalLogger;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)incrementIntegerPropertyForKey:(id)a0;
- (void)noteEventNamed:(id)a0;
- (id)dailyMetrics;
- (id)datePropertyForKey:(id)a0;
- (void)loadCollectionConfiguration;
- (void)logHardFailureForEventNamed:(id)a0 withAttributes:(id)a1;
- (void)logMetric:(id)a0 withName:(id)a1;
- (void)logResultForEvent:(id)a0 hardFailure:(BOOL)a1 result:(id)a2;
- (void)logResultForEvent:(id)a0 hardFailure:(BOOL)a1 result:(id)a2 withAttributes:(id)a3;
- (void)logSoftFailureForEventNamed:(id)a0 withAttributes:(id)a1;
- (void)logSuccessForEventNamed:(id)a0;
- (void)noteLaunchSequence:(id)a0;
- (id)numberPropertyForKey:(id)a0;
- (void)removeMultiSamplerForName:(id)a0;
- (void)setDateProperty:(id)a0 forKey:(id)a1;
- (void)setMetricsAccountID:(id)a0;
- (void)setNumberProperty:(id)a0 forKey:(id)a1;
- (void)updateCollectionConfigurationWithData:(id)a0;
- (void)setupCollection;
- (void)addMultiSamplerForName:(id)a0 withTimeInterval:(double)a1 block:(id /* block */)a2;
- (void)addNFSReporting:(id)a0;
- (void)addUserInfoAttributes:(id)a0 error:(id)a1;
- (id)failureKey:(id)a0;
- (id)fuzzyTimeSinceDateKey:(id)a0;
- (id)fuzzyTimeSinceLastSuccess:(id)a0;
- (void)logRockwellForEventNamed:(id)a0 withAttributes:(id)a1;
- (unsigned int)manateeStatusForReporting;
- (id)nfsReporting;
- (void)setFailureNowForPropertyKey:(id)a0;
- (void)setSuccessNowForPropertyKey:(id)a0;
- (BOOL)skipLogResult:(id)a0;

@end

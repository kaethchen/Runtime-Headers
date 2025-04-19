@class NSArray, UsageAnalytics, AnalyticsWorkspace;

@interface UsageFeed : NSObject {
    AnalyticsWorkspace *workspace;
    UsageAnalytics *handleAnalytics;
    unsigned int lastSubscriberTag;
    unsigned int lastSkippedTag;
    unsigned long long numUnrolledCellCounts;
    unsigned long long numRolledCellCounts;
    unsigned long long numNewlyCreated;
    unsigned long long numAppended;
}

@property (nonatomic) id delegate;
@property (retain, nonatomic) NSArray *processFeedData;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithWorkspace:(id)a0;
- (BOOL)networkBitmapsToDateWithOptionsFor:(id)a0 startTime:(unsigned long long)a1 endTime:(unsigned long long)a2 options:(id)a3 reply:(id /* block */)a4;
- (BOOL)usageToDateWithOptionsFor:(id)a0 nameKind:(id)a1 options:(id)a2 reply:(id /* block */)a3;
- (BOOL)performNetworkDomainsActionWithOptions:(id)a0 reply:(id /* block */)a1;
- (BOOL)identifierForUUID:(id)a0 reply:(id /* block */)a1;
- (BOOL)setUsageOption:(id)a0 reply:(id /* block */)a1;
- (BOOL)calendarUsageFor:(id)a0 nameKind:(id)a1 dayResolution:(id)a2 daySlot:(unsigned short)a3 weekSlot:(unsigned short)a4 reply:(id /* block */)a5;
- (BOOL)getNetworkDomainsOptions:(id)a0 reply:(id /* block */)a1;
- (void)_batchFetchCallbackWithResults:(id)a0 logPrefix:(const char *)a1 entityName:(id)a2 pred:(id)a3 service:(id)a4 limit:(unsigned long long)a5 offset:(unsigned long long)a6 container:(id)a7 actions:(id)a8 reply:(id /* block */)a9;
- (id)_composePredicateLineWithName:(id)a0 keyPath:(id)a1 isSweep:(BOOL *)a2 wantGeneric:(BOOL)a3 gotGeneric:(BOOL *)a4;
- (id)_getUsageKeyWithProcess:(id)a0 bundleID:(id)a1 extension:(id)a2 isProcNameKey:(BOOL)a3 showExtension:(BOOL)a4;
- (id)_performRollUp:(unsigned int)a0 andMetadata:(unsigned int)a1 from:(id)a2 until:(id)a3;
- (id)_composeLiveUsagePredicateWithNames:(id)a0 kind:(id)a1 isProcNameKey:(BOOL)a2 isSweep:(BOOL *)a3;
- (BOOL)setNetworkDomainsOptions:(id)a0 reply:(id /* block */)a1;
- (void)_legacyNetworkDomainsQueryOnService:(id)a0 entityName:(id)a1 pred:(id)a2 limit:(unsigned long long)a3 actions:(id)a4 options:(id)a5 postProcessingBlock:(id /* block */)a6;
- (void)_performNetDomainsQueryOnService:(id)a0 entityName:(id)a1 fetchProps:(id)a2 pred:(id)a3 sort:(id)a4 actions:(id)a5 queryTimer:(id)a6 replyProcessBlock:(id /* block */)a7 accumulatedResults:(id)a8 callbackBlock:(id /* block */)a9;
- (void)_processLiveUsageWithPredicate:(id)a0 attributesBlock:(id /* block */)a1 outcomeBlock:(id /* block */)a2;
- (void)_processLiveUsageWithUsages:(id)a0 attributesBlock:(id /* block */)a1 outcomeBlock:(id /* block */)a2;
- (BOOL)_rollUsageValuesFromDict:(id)a0 toDict:(id)a1 forKey:(id)a2 subscriberTag:(unsigned int)a3;
- (void)_rollValuesFrom:(id)a0 toDict:(id)a1;
- (void)_triggerAutoBugCaptureForSubType:(id)a0 subtypeContext:(id)a1 events:(id)a2 replyBlock:(id /* block */)a3;
- (id)_usagePresentationWithProcess:(id)a0 bundleID:(id)a1 extension:(id)a2 source:(double *)a3 since:(id)a4;
- (BOOL)algosScoreToDateWithOptionsFor:(id)a0 nameKind:(id)a1 startTime:(id)a2 options:(id)a3 reply:(id /* block */)a4;
- (void)clearLoggingCounters;
- (id)createEndpointEntryFrom:(id)a0 withKey:(id)a1 showDetails:(BOOL)a2;
- (void)displayLoggingCounters:(id)a0;
- (BOOL)getUsageOption:(id)a0 reply:(id /* block */)a1;
- (id)groupRecordsByBundleId:(id)a0;
- (id)networkDomainInitiatedTypeString:(unsigned int)a0;
- (BOOL)networkDomainsToDateWithOptionsFor:(id)a0 nameKind:(id)a1 domainType:(unsigned short)a2 startTime:(id)a3 options:(id)a4 fetchProperties:(id)a5 reply:(id /* block */)a6;
- (BOOL)networkDomainsToDateWithOptionsFor:(id)a0 nameKind:(id)a1 domainType:(unsigned short)a2 startTime:(id)a3 options:(id)a4 reply:(id /* block */)a5;
- (void)prepProcessDataFractionWithTag:(unsigned int)a0 andMetadata:(unsigned int)a1 from:(id)a2 until:(id)a3 pollInterval:(float)a4;
- (void)prepProcessDataFractionWithTag:(unsigned int)a0 from:(id)a1 until:(id)a2 pollInterval:(float)a3;
- (BOOL)resetUsageDataFor:(id)a0 nameKind:(id)a1 reply:(id /* block */)a2;
- (BOOL)typicalUsageFor:(id)a0 nameKind:(id)a1 intervalKind:(unsigned int)a2 reply:(id /* block */)a3;
- (BOOL)usageToDateFor:(id)a0 nameKind:(id)a1 reply:(id /* block */)a2;

@end

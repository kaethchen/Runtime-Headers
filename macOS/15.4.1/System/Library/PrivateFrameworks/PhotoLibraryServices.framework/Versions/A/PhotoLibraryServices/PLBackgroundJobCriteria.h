@class NSString, NSArray;

@interface PLBackgroundJobCriteria : NSObject <NSCopying> {
    unsigned long long _xpcActivityPriority;
    BOOL _allowBattery;
    long long _gracePeriod;
    long long _delay;
    BOOL _requireScreenSleep;
    BOOL _cpuIntensive;
    BOOL _memoryIntensive;
    BOOL _requireInexpensiveNetworkConnectivity;
    BOOL _requireConcurrencyLimit;
    BOOL _overrideRateLimiting;
    long long _expectedDuration;
    NSArray *_involvedProcesses;
}

@property (readonly, copy) NSString *shortCode;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *activityIdentifier;

+ (id)criteriaForUrgentResourceWorker;
+ (id)allKnownCriterias;
+ (id)allKnownShortCodes;
+ (id)criteriaForAssetStackWorker;
+ (id)criteriaForDiscretionaryResourceWorker;
+ (id)criteriaForDiscretionaryResourceWorkerWithExpectedDuration;
+ (id)criteriaForDuplicateDetectorWorker;
+ (id)criteriaForFeatureAvailabilityWorker;
+ (id)criteriaForHighPriorityRenderDerivativesWorker;
+ (id)criteriaForHighPrioritySearchIndexingWorker;
+ (id)criteriaForHubbleNetworkDownloadWorker;
+ (id)criteriaForHubbleWorker;
+ (id)criteriaForLowPriorityBatterySearchWorker;
+ (id)criteriaForLowPriorityChargerSearchWorker;
+ (id)criteriaWithKnownShortCode:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 shortCode:(id)a1 xpcActivityPriority:(unsigned long long)a2 allowBattery:(BOOL)a3 gracePeriod:(long long)a4 delay:(long long)a5 requireScreenSleep:(BOOL)a6 cpuIntensive:(BOOL)a7 memoryIntensive:(BOOL)a8 requireInexpensiveNetworkConnectivity:(BOOL)a9 requireConcurrencyLimit:(BOOL)a10 overrideRateLimiting:(BOOL)a11 expectedDuration:(long long)a12 involvedProcesses:(id)a13;
- (id)xpcCriteria;

@end

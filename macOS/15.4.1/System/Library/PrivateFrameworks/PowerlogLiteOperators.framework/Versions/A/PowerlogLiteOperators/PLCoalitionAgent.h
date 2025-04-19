@class PLStateTrackingComposition, NSString, NSDictionary, PLEntryNotificationOperatorComposition, NSDate, PLTimer, PLNSNotificationOperatorComposition;

@interface PLCoalitionAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLEntryNotificationOperatorComposition *batteryEntryLogged;
@property (retain) NSDictionary *lastCoalitionObjectDictionary;
@property (retain) NSDate *lastDate;
@property (retain) NSDate *currentDate;
@property (retain) NSString *driveCapacity;
@property (retain) PLEntryNotificationOperatorComposition *focalAppSwitch;
@property (retain) NSDate *lastFocalSampleDate;
@property (retain) PLTimer *focalSwitchFilterTimer;
@property (retain) PLNSNotificationOperatorComposition *thermalMonitorListener;
@property (retain) NSDate *reportMemoryStatsAfterTime;
@property (retain) NSDate *reportHighFrequencyMemoryStatsAfterTime;
@property (retain) PLStateTrackingComposition *stateTracker;

+ (void)load;
+ (id)entryAggregateDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryAggregateDefinitionNANDStats;
+ (id)entryEventIntervalDefinitionCoalitionUsage;
+ (id)entryEventPointDefinitionCoalitionDrop;
+ (id)entryEventPointDefinitionCoalitionMemory;
+ (id)entryEventPointDefinitionTotalFootprintSum;

- (id)init;
- (void).cxx_destruct;
- (void)log;
- (void)initOperatorDependancies;
- (void)addAccountingEventsFromCoalitions:(id)a0;
- (id)buildPLCoalitionDataObject:(struct coalition_resource_usage { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; unsigned long long x18; unsigned long long x19; unsigned long long x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; unsigned long long x24[7]; unsigned long long x25; unsigned long long x26; unsigned long long x27; unsigned long long x28; unsigned long long x29; unsigned long long x30; unsigned long long x31; unsigned long long x32; unsigned long long x33; unsigned long long x34; unsigned long long x35; unsigned long long x36; unsigned long long x37; } *)a0 withBundleId:(id)a1 withLaunchdName:(id)a2 withDate:(id)a3 withCoalitionId:(unsigned long long)a4 isApp:(BOOL)a5;
- (id)buildPLEntryDiffWithStartObject:(id)a0 withEndObject:(id)a1 withStartDate:(id)a2 withEndDate:(id)a3;
- (double)getANEEnergyFromEntry:(id)a0;
- (double)getCPUEnergyFromEntry:(id)a0;
- (double)getCPUVoucherTimeFromEntry:(id)a0;
- (double)getCPUWeightFromEntry:(id)a0;
- (void)getCoalitionInfoWithHFLFlag:(BOOL)a0;
- (double)getGPUEnergyFromEntry:(id)a0;
- (double)getGPUTimeFromEntry:(id)a0;
- (double)getGPUWeightFromEntry:(id)a0;
- (void)getStorageCapacity;
- (void)handleStateChangeForCoalitions;
- (void)logCoalitionObjectDifference:(id)a0;
- (void)logCoalitionObjectMemory:(id)a0 shouldLogBatteryTableCadence:(BOOL)a1;
- (void)logEventIntervalCoalitionIntervalWithHFLFlag:(BOOL)a0;
- (void)logEventIntervalCoalitionIntervalWithoutHighFreqLogging;
- (void)logPerJetsamPriorityTotalMemory:(id)a0;
- (void)logToAggd:(id)a0;
- (void)logToCAProcessMemory:(id)a0 andAccumulatedMemory:(id)a1 dailyReport:(BOOL)a2 systemUptime:(unsigned long long)a3;
- (id)processMemoryUsageWithPid:(int)a0 withLaunchdName:(id)a1 withRusage:(void *)a2 withJetsamInfo:(void *)a3 withLimitInfo:(struct process_memory_limit_info { int x0; BOOL x1; BOOL x2; BOOL x3; } *)a4;
- (unsigned long long)readPropertyFromRegistry:(struct __CFString { } *)a0;
- (BOOL)shouldLogCoalitionObject:(id)a0 withEndObject:(id)a1;

@end

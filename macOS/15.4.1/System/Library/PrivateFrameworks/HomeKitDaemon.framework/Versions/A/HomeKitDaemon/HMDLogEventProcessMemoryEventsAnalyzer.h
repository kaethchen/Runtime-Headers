@class HMDEventCountersManager;
@protocol HMMRadarInitiating;

@interface HMDLogEventProcessMemoryEventsAnalyzer : HMDLogEventAnalyzer <HMDAggregationAnalysisEventContributing>

@property (readonly) HMDEventCountersManager *eventCountersManager;
@property (readonly) id<HMMRadarInitiating> radarInitiator;
@property (readonly) unsigned long long storedAverageProcessMemoryKB;
@property (readonly) unsigned long long storedPeakProcessMemoryKB;

+ (id)managedEventCounterRequestGroups;

- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (void)resetAggregationAnalysisContext;
- (void)_handleMemoryPressureNotificationLogEvent:(id)a0;
- (void)_handleMemorySampleLogEvent:(id)a0;
- (void)didReceiveEventFromDispatcher:(id)a0;
- (void)populateAggregationAnalysisLogEvent:(id)a0 forDate:(id)a1;

@end

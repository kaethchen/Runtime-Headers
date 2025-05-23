@class HMDEventCountersManager;

@interface HMDLogEventReachabilityEventsAnalyzer : HMDLogEventAnalyzer <HMDAggregationAnalysisEventContributing>

@property (readonly, nonatomic) HMDEventCountersManager *eventCountersManager;

+ (id)managedEventCounterRequestGroups;

- (void).cxx_destruct;
- (void)resetAggregationAnalysisContext;
- (void)_handleCameraRecordingReachabilityLogEvent:(id)a0;
- (void)_handleReachabiltiyAddRemoveEvent:(id)a0;
- (void)_handleRemoteDeviceReachabilityChangedLogEvent:(id)a0;
- (void)didReceiveEventFromDispatcher:(id)a0;
- (id)initWithEventCountersManager:(id)a0;
- (void)populateAggregationAnalysisLogEvent:(id)a0 forDate:(id)a1;

@end

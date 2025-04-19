@class HMDEventCounterGroup;

@interface HMDLogEventElectionEventsAnalyzer : HMDLogEventAnalyzer <HMDAggregationAnalysisEventContributing>

@property BOOL isCurrentDeviceInSecondaryResidentCoordinationMesh;
@property (readonly, nonatomic) HMDEventCounterGroup *counterGroup;

+ (id)managedEventCounterRequestGroups;

- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (void)resetAggregationAnalysisContext;
- (void)didReceiveEventFromDispatcher:(id)a0;
- (void)handlePrimaryResidentChangedNotification:(id)a0;
- (void)populateAggregationAnalysisLogEvent:(id)a0 forDate:(id)a1;

@end

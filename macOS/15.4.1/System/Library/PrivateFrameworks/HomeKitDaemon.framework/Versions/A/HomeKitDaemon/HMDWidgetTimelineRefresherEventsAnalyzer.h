@class NSString, NSMutableDictionary, HMDEventCountersManager;
@protocol HMMLogEventSubmitting;

@interface HMDWidgetTimelineRefresherEventsAnalyzer : HMDLogEventAnalyzer <HMDLogEventDailyTaskRunner, HMDAggregationAnalysisEventContributing>

@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly, nonatomic) NSMutableDictionary *widgetRefreshReasonCounterGroupByKind;
@property (readonly, nonatomic) HMDEventCountersManager *eventCountersManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)resetAggregationAnalysisContext;
- (void)didReceiveEventFromDispatcher:(id)a0;
- (id)initWithEventCountersManager:(id)a0 logEventSubmitter:(id)a1 dailyScheduler:(id)a2;
- (id)initWithEventCountersManager:(id)a0 logEventSubmitter:(id)a1 widgetKinds:(id)a2 dailyScheduler:(id)a3;
- (void)populateAggregationAnalysisLogEvent:(id)a0 forDate:(id)a1;
- (void)runDailyTask;

@end

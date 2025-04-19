@class NSString, HMDEventCounterGroup;
@protocol HMDLogEventAnalyzerDataSource;

@interface HMDUserActivityStateDetectorLogEventAnalyzer : HMDLogEventAnalyzer <HMDLogEventDailyTaskRunner>

@property (readonly, nonatomic) id<HMDLogEventAnalyzerDataSource> dataSource;
@property (nonatomic) unsigned long long maxCoreLocationStateEndOffset;
@property (readonly) HMDEventCounterGroup *type6DetectorTransitionCounterGroup;
@property (readonly, nonatomic) HMDEventCounterGroup *type3DetectorTransitionCounterGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (void)configure;
- (void)didReceiveEventFromDispatcher:(id)a0;
- (void)handleType3LogEvent:(id)a0;
- (void)handleType6TransitionLogEvent:(id)a0;
- (void)resetCounterGroups;
- (void)resetType6DetectorTransitionCounterGroup;
- (void)runDailyTask;
- (void)submitCounterGroups;
- (void)submitType3DetectorCounterGroups;
- (void)submitType6DetectorTransitionCounterGroups;

@end

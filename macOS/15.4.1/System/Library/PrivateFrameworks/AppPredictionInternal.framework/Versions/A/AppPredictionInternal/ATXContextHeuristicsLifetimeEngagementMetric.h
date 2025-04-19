@class NSString;

@interface ATXContextHeuristicsLifetimeEngagementMetric : _ATXCoreAnalyticsMetric

@property (copy, nonatomic) NSString *actionId;
@property (copy, nonatomic) NSString *contextType;
@property (nonatomic) unsigned long long numShown;
@property (nonatomic) unsigned long long numEngaged;
@property (copy, nonatomic) NSString *trialDeploymentId;
@property (copy, nonatomic) NSString *trialExperimentId;
@property (copy, nonatomic) NSString *trialTreatmentId;
@property (copy, nonatomic) NSString *atxTrialDeploymentId;
@property (copy, nonatomic) NSString *atxTrialExperimentId;
@property (copy, nonatomic) NSString *atxTrialTreatmentId;

- (void).cxx_destruct;
- (id)metricName;
- (id)coreAnalyticsDictionary;

@end

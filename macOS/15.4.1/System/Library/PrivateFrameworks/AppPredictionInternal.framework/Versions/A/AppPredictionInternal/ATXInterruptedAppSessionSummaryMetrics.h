@interface ATXInterruptedAppSessionSummaryMetrics : _ATXCoreAnalyticsMetric

@property (nonatomic) unsigned long long totalAppSessions;
@property (nonatomic) unsigned long long interruptedAppSessions;
@property (readonly, nonatomic) double percentageInterruptedAppSessions;

- (id)initWithDimensions:(id)a0;
- (id)metricName;
- (id)coreAnalyticsDictionary;

@end

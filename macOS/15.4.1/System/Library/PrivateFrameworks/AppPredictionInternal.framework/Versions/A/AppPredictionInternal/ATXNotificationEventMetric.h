@class ATXNotificationTelemetryQueryResult;

@interface ATXNotificationEventMetric : _ATXCoreAnalyticsMetric

@property (retain, nonatomic) ATXNotificationTelemetryQueryResult *queryResult;

+ (id)atxComputedModeStringForTimestamp:(id)a0;

- (void).cxx_destruct;
- (id)metricName;
- (id)coreAnalyticsDictionary;
- (id)coreAnalyticsDictionaryFromQueryResult:(id)a0;
- (id)initWithQueryResult:(id)a0;

@end

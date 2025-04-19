@class ATXNotificationTelemetryQueryResult, ATXNotificationCategorizationFeatureCollectionSet;

@interface ATXNotificationBreakthroughEventMetric : _ATXCoreAnalyticsMetric

@property (retain, nonatomic) ATXNotificationTelemetryQueryResult *queryResult;
@property (retain, nonatomic) ATXNotificationCategorizationFeatureCollectionSet *featureCollectionSet;

+ (id)coreAnalyticsDictionaryFromQueryResult:(id)a0 featureCollectionSet:(id)a1;

- (void).cxx_destruct;
- (id)metricName;
- (id)coreAnalyticsDictionary;
- (id)initWithQueryResult:(id)a0 featureCollectionSet:(id)a1;

@end

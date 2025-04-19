@class NSString;

@interface ATXModeAppConfigurationMetric : _ATXCoreAnalyticsMetric

@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSString *modeSemanticType;

- (id)description;
- (void).cxx_destruct;
- (id)metricName;
- (id)coreAnalyticsDictionary;

@end

@class NSString;

@interface ATXLockscreenWidgetMetric : _ATXCoreAnalyticsMetric

@property (copy, nonatomic) NSString *lockscreenId;
@property (copy, nonatomic) NSString *extensionBundleId;
@property (copy, nonatomic) NSString *kind;
@property (nonatomic) unsigned long long family;
@property (nonatomic) unsigned long long source;
@property (nonatomic) BOOL isLandscape;

- (void).cxx_destruct;
- (id)metricName;
- (id)coreAnalyticsDictionary;

@end

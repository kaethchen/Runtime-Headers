@class NSString;

@interface ATXLockscreenSwitchMetric : _ATXCoreAnalyticsMetric

@property (copy, nonatomic) NSString *lockscreenId;
@property (copy, nonatomic) NSString *switchMechanism;
@property (copy, nonatomic) NSString *outcome;
@property (nonatomic) long long duration;

- (void).cxx_destruct;
- (id)metricName;
- (id)coreAnalyticsDictionary;

@end

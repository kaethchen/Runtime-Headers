@class NSString;

@interface ATXModeSetupExperienceMetrics : NSObject

@property (copy, nonatomic) NSString *modeSemanticType;
@property (nonatomic) long long onboardingOutcome;

- (id)description;
- (void).cxx_destruct;
- (id)metricName;
- (id)coreAnalyticsDictionary;
- (id)outcomeToString:(long long)a0;
- (void)sendToCoreAnalytics;

@end

@class NSString;

@interface ATXHomeScreenFocusSuggestionMetrics : _ATXCoreAnalyticsMetric

@property (copy, nonatomic) NSString *modeSemanticType;
@property (nonatomic) long long outcome;

- (id)description;
- (void).cxx_destruct;
- (id)metricName;
- (id)coreAnalyticsDictionary;
- (id)outcomeToString:(long long)a0;
- (unsigned long long)cappedForPrivacyWithValue:(long long)a0;

@end

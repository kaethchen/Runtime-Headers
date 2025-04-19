@class NSArray, NSString, TIMetricDescriptorRegistry;

@interface TIKBUserModel : TIUserModel <TIKBUserModeling, TIKBMetricProviding, TIUserModelConfigurationDelegate>

@property (readonly, nonatomic) TIMetricDescriptorRegistry *metricDescriptorRegistry;
@property (readonly, nonatomic) NSArray *kbContexts;
@property (readonly, nonatomic) NSArray *contexts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userModelWithInputMode:(id)a0 userModelDataStore:(id)a1;
+ (id)userModelWithInputMode:(id)a0 userModelDataStore:(id)a1 metricDescriptorRegistry:(id)a2 fromDate:(id)a3;

- (void).cxx_destruct;
- (id)settingsDictionary;
- (void)doLoad;
- (id)durableCounterKeys;
- (void)trackPowerLogIfNecessary;
- (Class)userModelValuesClass;
- (id)dictForPowerLog;
- (void)addDescriptor:(id)a0 toWeeklyMetricKeys:(id)a1;
- (void)addMetric:(id)a0 toWeeklyMetricKeys:(id)a1;
- (void)dispatchFeedbackAnalyzers:(id)a0 aligned:(id)a1 revisionRateAnalysisSummary:(id)a2;
- (id)initWithInputMode:(id)a0 userModelDataStore:(id)a1 metricDescriptorRegistry:(id)a2 fromDate:(id)a3;
- (void)sessionDidEnd:(id)a0 aligned:(id)a1;
- (id)valueForMetricWithName:(id)a0 withContext:(id)a1;
- (id)valuesByBucketedWordLengthForMetricWithName:(id)a0 withContext:(id)a1;

@end

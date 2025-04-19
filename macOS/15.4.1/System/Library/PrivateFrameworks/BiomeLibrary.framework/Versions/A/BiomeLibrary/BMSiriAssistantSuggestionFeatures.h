@class BMSiriAssistantSuggestionFeaturesiCloudFeatures, BMSiriAssistantSuggestionFeaturesEngagementLabels, BMSiriAssistantSuggestionFeaturesSuggestionDetails, BMSiriAssistantSuggestionFeaturesDeviceFeatures, BMSiriAssistantSuggestionFeaturesEnvironmentFeatures, BMSiriAssistantSuggestionFeaturesUserSegmentation, NSString, BMSiriAssistantSuggestionFeaturesAppUsageFeatures, BMSiriAssistantSuggestionFeaturesTemporalFeatures;

@interface BMSiriAssistantSuggestionFeatures : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BMSiriAssistantSuggestionFeaturesSuggestionDetails *suggestionDetails;
@property (readonly, nonatomic) BMSiriAssistantSuggestionFeaturesAppUsageFeatures *appUsageFeatures;
@property (readonly, nonatomic) BMSiriAssistantSuggestionFeaturesDeviceFeatures *deviceFeatures;
@property (readonly, nonatomic) BMSiriAssistantSuggestionFeaturesEnvironmentFeatures *environmentFeatures;
@property (readonly, nonatomic) BMSiriAssistantSuggestionFeaturesiCloudFeatures *icloudFeatures;
@property (readonly, nonatomic) BMSiriAssistantSuggestionFeaturesTemporalFeatures *temporalFeatures;
@property (readonly, nonatomic) BMSiriAssistantSuggestionFeaturesEngagementLabels *engagementLabels;
@property (readonly, nonatomic) BMSiriAssistantSuggestionFeaturesUserSegmentation *userSegmentation;
@property (readonly, nonatomic) int loggingType;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithSuggestionDetails:(id)a0 appUsageFeatures:(id)a1 deviceFeatures:(id)a2 environmentFeatures:(id)a3 icloudFeatures:(id)a4 temporalFeatures:(id)a5 engagementLabels:(id)a6 userSegmentation:(id)a7;
- (id)initWithSuggestionDetails:(id)a0 appUsageFeatures:(id)a1 deviceFeatures:(id)a2 environmentFeatures:(id)a3 icloudFeatures:(id)a4 temporalFeatures:(id)a5 engagementLabels:(id)a6 userSegmentation:(id)a7 loggingType:(int)a8;

@end

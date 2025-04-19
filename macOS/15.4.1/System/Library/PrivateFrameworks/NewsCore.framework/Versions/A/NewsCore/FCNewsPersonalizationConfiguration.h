@class FCNewsPersonalizationFeatureConfiguration, FCNewsPersonalizationTrainingConfiguration, FCNewsArticleEmbeddingsConfiguration, FCStatelessPersonalizationConfiguration, FCUserEventHistoryTrackingConfiguration;

@interface FCNewsPersonalizationConfiguration : NSObject

@property (retain, nonatomic) FCStatelessPersonalizationConfiguration *statelessPersonalizationConfiguration;
@property (retain, nonatomic) FCUserEventHistoryTrackingConfiguration *trackingConfiguration;
@property (retain, nonatomic) FCNewsPersonalizationFeatureConfiguration *featureConfiguration;
@property (retain, nonatomic) FCNewsPersonalizationTrainingConfiguration *trainingConfiguration;
@property (retain, nonatomic) FCNewsArticleEmbeddingsConfiguration *articleEmbeddingsConfiguration;

+ (id)defaultConfiguration;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end

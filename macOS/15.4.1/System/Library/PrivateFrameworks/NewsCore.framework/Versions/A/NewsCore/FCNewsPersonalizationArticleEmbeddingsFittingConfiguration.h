@class FCNewsPersonalizationArticleEmbeddingsFittingRequirements, NSNumber, FCNewsPersonalizationLogisticRegressionClassifierConfiguration;

@interface FCNewsPersonalizationArticleEmbeddingsFittingConfiguration : NSObject

@property (retain, nonatomic) FCNewsPersonalizationArticleEmbeddingsFittingRequirements *articleReadRequirements;
@property (retain, nonatomic) FCNewsPersonalizationArticleEmbeddingsFittingRequirements *articleSeenRequirements;
@property (nonatomic) long long embeddingType;
@property (retain, nonatomic) FCNewsPersonalizationLogisticRegressionClassifierConfiguration *logisticRegressionClassifierConfiguration;
@property (nonatomic) double earliestAllowedEmbeddingEventTimestamp;
@property (nonatomic) BOOL haltEmbeddingProcessingAfterEncounteringNonMatchingEmbeddingsInSession;
@property (readonly, nonatomic) NSNumber *maximumRatioOfArticleSeenEmbeddingsToArticleReadEmbeddings;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end

@class FCNewsArticleEmbeddingConfiguration, FCNewsPersonalizationArticleEmbeddingsFittingConfiguration;

@interface FCNewsArticleEmbeddingsConfiguration : NSObject

@property (retain, nonatomic) FCNewsArticleEmbeddingConfiguration *titleEmbeddingConfiguration;
@property (retain, nonatomic) FCNewsArticleEmbeddingConfiguration *bodyEmbeddingConfiguration;
@property (retain, nonatomic) FCNewsPersonalizationArticleEmbeddingsFittingConfiguration *fittingConfiguration;
@property (nonatomic) long long requiredDimensions;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end

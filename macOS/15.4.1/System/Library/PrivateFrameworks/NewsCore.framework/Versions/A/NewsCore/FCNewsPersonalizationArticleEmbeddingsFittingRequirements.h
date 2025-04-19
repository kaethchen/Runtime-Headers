@class NSNumber;

@interface FCNewsPersonalizationArticleEmbeddingsFittingRequirements : NSObject

@property (retain, nonatomic) NSNumber *minimumNumberOfEmbeddings;
@property (retain, nonatomic) NSNumber *maximumNumberOfEmbeddings;
@property (retain, nonatomic) NSNumber *minimumDuration;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end

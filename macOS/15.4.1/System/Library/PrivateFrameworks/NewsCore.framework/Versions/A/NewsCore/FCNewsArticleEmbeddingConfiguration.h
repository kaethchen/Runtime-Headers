@interface FCNewsArticleEmbeddingConfiguration : NSObject

@property (nonatomic) BOOL shouldFetch;
@property (nonatomic) BOOL shouldPersist;

- (id)description;
- (id)init;
- (id)initWithDictionary:(id)a0;

@end

@class SNLPEmbedder, CDMEmbeddingConfigItem;

@interface Embedder : NSObject

@property (readonly, nonatomic) SNLPEmbedder *snlpEmbedder;
@property (readonly, nonatomic) CDMEmbeddingConfigItem *embeddingConfigItem;

- (void).cxx_destruct;
- (void)warmup;
- (id)initWithSnlpEmbedder:(id)a0 andEmbeddingConfigItem:(id)a1;

@end

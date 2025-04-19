@class VSKAsset;

@interface MADVSKEmbeddingResults : NSObject

@property (retain, nonatomic) VSKAsset *imageEmbeddingAsset;
@property (nonatomic) short imageEmbeddingVersion;
@property (retain, nonatomic) VSKAsset *videoEmbeddingAsset;
@property (nonatomic) short videoEmbeddingVersion;

+ (id)resultsFromAnalysis:(id)a0 imageEmbeddingVersion:(short)a1 videoEmbeddingVersion:(short)a2 asset:(id)a3 imageOnly:(BOOL)a4;
+ (id)resultsWithImageEmbedding:(id)a0 imageEmbeddingVersion:(short)a1 videoEmbeddingAsset:(id)a2 videoEmbeddingVersion:(short)a3;

- (id)description;
- (void).cxx_destruct;
- (id)initWithImageEmbedding:(id)a0 imageEmbeddingVersion:(short)a1 videoEmbedding:(id)a2 videoEmbeddingVersion:(short)a3;
- (void)setImageEmbedding:(id)a0 version:(short)a1;
- (void)setVideoEmbedding:(id)a0 version:(short)a1;

@end

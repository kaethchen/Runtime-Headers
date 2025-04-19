@class NSArray, _CSEmbedding;

@interface MADEmbedding : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long format;
@property (readonly, nonatomic) long long dimension;
@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) NSArray *vectors;
@property (readonly, nonatomic) _CSEmbedding *csEmbedding;

+ (id)fetchEmbeddingWithAssetUUID:(id)a0 photoLibraryURL:(id)a1 options:(id)a2 error:(id *)a3;
+ (id)fetchEmbeddingsWithAssetUUIDs:(id)a0 photoLibraryURL:(id)a1 options:(id)a2 error:(id *)a3;
+ (void)prewarmSearchWithConcurrencyLimit:(unsigned long long)a0 photoLibraryURL:(id)a1 error:(id *)a2;
+ (id)searchWithEmbeddings:(id)a0 photoLibraryURL:(id)a1 options:(id)a2 error:(id *)a3;
+ (id)madEmbeddingFromCSEmbedding:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFormat:(long long)a0 dimension:(long long)a1 version:(long long)a2 vectors:(id)a3;

@end

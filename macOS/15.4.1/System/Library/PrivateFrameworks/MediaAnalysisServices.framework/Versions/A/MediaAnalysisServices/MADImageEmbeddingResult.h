@class MADEmbeddingResult;

@interface MADImageEmbeddingResult : MADResult

@property (readonly, nonatomic) MADEmbeddingResult *embedding;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithVersion:(unsigned long long)a0 data:(id)a1 type:(unsigned long long)a2;

@end

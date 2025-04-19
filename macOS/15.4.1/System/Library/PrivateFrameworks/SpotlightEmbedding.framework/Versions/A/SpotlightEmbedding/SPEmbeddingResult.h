@class NSData;

@interface SPEmbeddingResult : NSObject

@property (readonly, nonatomic) unsigned long long elementType;
@property (readonly, nonatomic) unsigned long long elementCount;
@property (readonly, nonatomic) NSData *embeddingData;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) float scale;
@property (readonly, nonatomic) float bias;

+ (id)log;

- (id)description;
- (void).cxx_destruct;
- (id)initWithVersion:(unsigned long long)a0 data:(id)a1 type:(unsigned long long)a2 scale:(float)a3 bias:(float)a4;

@end

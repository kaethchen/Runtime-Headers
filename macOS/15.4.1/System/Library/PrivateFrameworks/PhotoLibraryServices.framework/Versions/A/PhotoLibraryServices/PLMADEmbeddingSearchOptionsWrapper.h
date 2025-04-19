@class NSNumber;

@interface PLMADEmbeddingSearchOptionsWrapper : NSObject

@property (nonatomic) unsigned long long resultLimit;
@property (nonatomic) BOOL includePayload;
@property (retain, nonatomic) NSNumber *numberOfProbes;
@property (retain, nonatomic) NSNumber *batchSize;
@property (retain, nonatomic) NSNumber *numConcurrentReaders;

+ (id)defaultOptions;

- (void).cxx_destruct;
- (id)initWithResultLimit:(unsigned long long)a0;

@end

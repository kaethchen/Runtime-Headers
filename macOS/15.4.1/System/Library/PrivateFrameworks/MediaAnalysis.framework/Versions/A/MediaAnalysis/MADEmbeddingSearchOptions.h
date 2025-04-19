@class NSArray, NSNumber;

@interface MADEmbeddingSearchOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *assetUUIDs;
@property (nonatomic) int resultLimit;
@property (nonatomic) BOOL fullScan;
@property (nonatomic) BOOL includePayload;
@property (retain, nonatomic) NSNumber *numberOfProbes;
@property (retain, nonatomic) NSNumber *batchSize;
@property (retain, nonatomic) NSNumber *numConcurrentReaders;

+ (id)defaultOptions;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

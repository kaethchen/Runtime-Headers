@class NSArray;

@interface MADTextEmbeddingRequest : MADTextRequest

@property (nonatomic) BOOL calibrate;
@property (nonatomic) BOOL computeThreshold;
@property (nonatomic) BOOL extendedContextLength;
@property (nonatomic) BOOL computeSafety;
@property (nonatomic) unsigned long long version;
@property (readonly, nonatomic) NSArray *embeddingResults;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

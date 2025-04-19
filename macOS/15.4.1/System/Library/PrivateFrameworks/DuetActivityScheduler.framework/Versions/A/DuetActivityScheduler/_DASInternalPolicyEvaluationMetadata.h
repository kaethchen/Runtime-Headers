@interface _DASInternalPolicyEvaluationMetadata : NSObject <NSCopying>

@property (nonatomic) double score;
@property (nonatomic) long long reason;
@property (nonatomic) long long decision;

+ (id)metadataWithScore:(double)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithScore:(double)a0 reason:(long long)a1 decision:(long long)a2;

@end

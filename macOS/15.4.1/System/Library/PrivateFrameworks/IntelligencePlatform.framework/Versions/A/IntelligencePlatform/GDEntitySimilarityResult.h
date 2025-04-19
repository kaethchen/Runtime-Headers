@class GDEntitySimilarityRequest;

@interface GDEntitySimilarityResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) GDEntitySimilarityRequest *request;
@property (readonly, nonatomic) double similarityScore;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRequest:(id)a0 similarityScore:(double)a1;

@end

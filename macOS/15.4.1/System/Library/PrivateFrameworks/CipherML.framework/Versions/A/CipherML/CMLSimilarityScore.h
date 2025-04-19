@class NSData;

@interface CMLSimilarityScore : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long identifier;
@property (nonatomic) float score;
@property (retain, nonatomic) NSData *metadata;

+ (id)scoreWithIdentifier:(unsigned long long)a0 score:(float)a1;
+ (id)scoreWithIdentifier:(unsigned long long)a0 score:(float)a1 metadata:(id)a2;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(unsigned long long)a0 score:(float)a1 metadata:(id)a2;
- (BOOL)isEqualToSimilarityScore:(id)a0;

@end

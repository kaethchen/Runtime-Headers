@class NSString;

@interface PPScoredContactHandle : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *contactHandle;
@property (readonly, nonatomic) double score;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)reverseCompare:(id)a0;
- (id)initWithContactHandle:(id)a0 score:(double)a1;
- (BOOL)isEqualToScoredContactHandle:(id)a0;

@end

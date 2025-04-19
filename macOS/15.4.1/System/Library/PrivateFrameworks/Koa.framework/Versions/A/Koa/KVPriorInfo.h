@interface KVPriorInfo : NSObject <NSSecureCoding, NSCopying> {
    unsigned int _ordinality;
    float _score;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (float)score;
- (id)initWithOrdinality:(unsigned int)a0 score:(float)a1;
- (unsigned int)ordinality;
- (BOOL)isEqualToPriorInfo:(id)a0;

@end

@interface LNFallbackRelevantContext : LNRelevantContext

+ (BOOL)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)analyticsDescription;

@end

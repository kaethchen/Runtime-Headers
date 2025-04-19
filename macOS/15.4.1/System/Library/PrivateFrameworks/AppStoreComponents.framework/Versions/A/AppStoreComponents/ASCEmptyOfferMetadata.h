@interface ASCEmptyOfferMetadata : ASCOfferMetadata

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEmpty;
- (id)initWithCoder:(id)a0;

@end

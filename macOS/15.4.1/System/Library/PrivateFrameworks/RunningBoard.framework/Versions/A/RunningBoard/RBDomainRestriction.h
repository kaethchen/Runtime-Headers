@interface RBDomainRestriction : NSObject <NSCopying>

+ (id)domainRestrictionForDictionary:(id)a0 withError:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)_init;
- (id)allEntitlements;
- (BOOL)allowsContext:(id)a0 withError:(id *)a1;

@end

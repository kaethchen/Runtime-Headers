@class NSArray;

@interface RBTargetsSelfDomainRestriction : RBDomainRestriction {
    NSArray *_restrictions;
}

+ (id)domainRestrictionForDictionary:(id)a0 withError:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_init;
- (id)allEntitlements;
- (BOOL)allowsContext:(id)a0 withError:(id *)a1;

@end

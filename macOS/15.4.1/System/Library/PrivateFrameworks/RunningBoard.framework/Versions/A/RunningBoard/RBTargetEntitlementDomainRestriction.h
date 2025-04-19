@class NSString;

@interface RBTargetEntitlementDomainRestriction : RBDomainRestriction {
    NSString *_entitlement;
}

+ (id)domainRestrictionForDictionary:(id)a0 withError:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)allEntitlements;
- (id)_initWithEntitlement:(id)a0;
- (BOOL)allowsContext:(id)a0 withError:(id *)a1;

@end

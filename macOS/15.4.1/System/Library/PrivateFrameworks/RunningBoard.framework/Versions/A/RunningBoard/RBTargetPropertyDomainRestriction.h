@class NSString, NSNumber;

@interface RBTargetPropertyDomainRestriction : RBDomainRestriction {
    NSString *_property;
    NSNumber *_numberValue;
    NSString *_stringValue;
}

+ (id)domainRestrictionForDictionary:(id)a0 withError:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)allEntitlements;
- (id)_initWithProperty:(id)a0 value:(id)a1;
- (BOOL)allowsContext:(id)a0 withError:(id *)a1;

@end

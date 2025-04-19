@class NSArray;

@interface RBAnyEntitlementPredicate : RBEntitlementPredicate {
    NSArray *_predicate;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)allEntitlements;
- (id)initWithArray:(id)a0 forDomain:(id)a1 attribute:(id)a2 errors:(id)a3;
- (BOOL)matchesEntitlements:(id)a0;

@end

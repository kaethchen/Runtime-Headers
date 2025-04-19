@class RBSProcessPredicateImpl;

@interface RBSNotPredicate : RBSProcessPredicateImpl {
    RBSProcessPredicateImpl *_predicate;
}

+ (BOOL)supportsRBSXPCSecureCoding;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)processIdentifier;
- (BOOL)matchesProcess:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)processIdentifiers;

@end

@protocol CNLDAPPredicateRemapping;

@interface CNLDAPPredicateRemapper : NSObject

@property (retain) id<CNLDAPPredicateRemapping> factory;

- (void).cxx_destruct;
- (id)predicateForLeft:(id)a0 inRight:(id)a1 error:(id *)a2;
- (id)acceptComparisonPredicateForRemapping:(id)a0 error:(id *)a1;
- (id)acceptCompoundPredicateForRemapping:(id)a0 error:(id *)a1;
- (id)initWithRemapping:(id)a0;
- (id)predicateForLeft:(id)a0 beginsWithRight:(id)a1 error:(id *)a2;
- (id)predicateForLeft:(id)a0 betweenLowerBound:(id)a1 upperBound:(id)a2 error:(id *)a3;
- (id)predicateForLeft:(id)a0 containsRight:(id)a1 error:(id *)a2;
- (id)predicateForLeft:(id)a0 endsWithRight:(id)a1 error:(id *)a2;
- (id)predicateForLeft:(id)a0 equalToRight:(id)a1 error:(id *)a2;
- (id)predicateForLeft:(id)a0 greaterThanOrEqualToRight:(id)a1 error:(id *)a2;
- (id)predicateForLeft:(id)a0 greaterThanRight:(id)a1 error:(id *)a2;
- (id)predicateForLeft:(id)a0 lessThanOrEqualToRight:(id)a1 error:(id *)a2;
- (id)predicateForLeft:(id)a0 lessThanRight:(id)a1 error:(id *)a2;
- (id)predicateForLeft:(id)a0 likeRight:(id)a1 error:(id *)a2;
- (id)predicateForLeft:(id)a0 matchesRight:(id)a1 error:(id *)a2;
- (id)predicateForLeft:(id)a0 notEqualToRight:(id)a1 error:(id *)a2;
- (id)remapPredicate:(id)a0 error:(id *)a1;

@end

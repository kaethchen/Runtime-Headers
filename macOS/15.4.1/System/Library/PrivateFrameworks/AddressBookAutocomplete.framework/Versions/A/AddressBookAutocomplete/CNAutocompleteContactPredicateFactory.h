@class NSArray, NSDictionary;

@interface CNAutocompleteContactPredicateFactory : NSObject {
    NSArray *_terms;
    NSDictionary *_propertyMap;
    NSArray *_properties;
}

+ (id)contactIsCompanyPredicate;
+ (id)contactIsPersonPredicate;
+ (id)contactPropertyMap;
+ (id)factoryWithTerms:(id)a0 properties:(id)a1;
+ (id)predicateForProperties:(id)a0 term:(id)a1;
+ (id)predicateForProperties:(id)a0 terms:(id)a1;
+ (void)separateKeyPath:(id)a0 intoKey:(id *)a1 valueKeyPath:(id *)a2;

- (void).cxx_destruct;
- (id)makePredicate;
- (id)makePersonNamePredicateForTerm:(id)a0;
- (void)addPredicateForTerm:(id)a0 property:(id)a1 toCollection:(id)a2;
- (id)initWithTerms:(id)a0 properties:(id)a1 propertyMap:(id)a2;
- (id)makeCompanyNamePredicateForTerm:(id)a0;
- (id)makeNamePredicateForTerm:(id)a0 properties:(id)a1 personOrCompanyQualifyingPredicate:(id)a2;
- (id)makeNamePredicatesForTerm:(id)a0;
- (id)makePredicateForTerm:(id)a0;
- (id)makePredicateForTerm:(id)a0 property:(id)a1;
- (id)makePredicateForValue:(id)a0 key:(id)a1;
- (id)makePredicateForValue:(id)a0 relationshipKey:(id)a1 valueKeyPath:(id)a2;
- (id)propertyPredicatesForTerm:(id)a0;

@end

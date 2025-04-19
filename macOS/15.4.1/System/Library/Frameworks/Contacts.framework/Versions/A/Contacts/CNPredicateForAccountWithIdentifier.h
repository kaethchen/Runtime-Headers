@class NSArray;

@interface CNPredicateForAccountWithIdentifier : CNPredicate

@property (readonly, nonatomic) NSArray *accountIdentifiers;

- (id)init;
- (void).cxx_destruct;
- (BOOL)evaluateWithObject:(id)a0;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (id)initWithAccountIdentifiers:(id)a0;

@end

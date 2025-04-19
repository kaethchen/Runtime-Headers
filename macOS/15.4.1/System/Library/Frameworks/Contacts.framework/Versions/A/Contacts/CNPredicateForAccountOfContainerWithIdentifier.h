@class NSString;

@interface CNPredicateForAccountOfContainerWithIdentifier : CNPredicate

@property (readonly, nonatomic) NSString *containerIdentifier;

- (id)init;
- (void).cxx_destruct;
- (BOOL)evaluateWithObject:(id)a0;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (id)initWithContainerIdentifier:(id)a0;

@end

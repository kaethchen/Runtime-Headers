@class NSString;

@interface CNPredicateForAccountWithExternalIdentifier : CNPredicate

@property (readonly, nonatomic) NSString *accountExternalIdentifier;

- (id)init;
- (void).cxx_destruct;
- (BOOL)evaluateWithObject:(id)a0;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (id)initWithAccountExternalIdentifier:(id)a0;

@end

@class NSSet;

@interface PHAPredicateValidator : NSObject

@property (retain) NSSet *allowedKeyPaths;

- (void).cxx_destruct;
- (BOOL)validateValue:(id)a0 error:(id *)a1;
- (BOOL)validatePredicate:(id)a0 error:(id *)a1;
- (BOOL)validateExpression:(id)a0 error:(id *)a1;

@end

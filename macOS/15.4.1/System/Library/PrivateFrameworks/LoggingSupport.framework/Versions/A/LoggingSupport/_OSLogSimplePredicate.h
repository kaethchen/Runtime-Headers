@class NSPredicate, NSSet, NSMutableArray;

@interface _OSLogSimplePredicate : NSObject <NSPredicateVisitor> {
    NSSet *_keys;
    NSSet *_operators;
    NSSet *_compoundTypes;
    NSMutableArray *_stack;
}

@property (readonly, nonatomic) NSPredicate *predicate;

- (void).cxx_destruct;
- (void)visitPredicate:(id)a0;
- (void)visitPredicateExpression:(id)a0;
- (void)visitPredicateOperator:(id)a0;
- (id)initWithPredicate:(id)a0 supportedKeys:(id)a1 supportedOperators:(id)a2 supportedCompoundTypes:(id)a3;
- (BOOL)isSupportedCompoundType:(unsigned long long)a0;
- (BOOL)isSupportedExpression:(id)a0;
- (void)processComparisonPredicate:(id)a0;
- (void)processCompoundPredicate:(id)a0;

@end

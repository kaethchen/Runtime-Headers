@class NSPredicate;

@interface _PTPredicateValidator : NSObject <NSPredicateVisitor> {
    NSPredicate *_predicate;
    BOOL _valid;
}

- (void).cxx_destruct;
- (void)visitPredicate:(id)a0;
- (void)visitPredicateExpression:(id)a0;
- (void)visitPredicateOperator:(id)a0;

@end

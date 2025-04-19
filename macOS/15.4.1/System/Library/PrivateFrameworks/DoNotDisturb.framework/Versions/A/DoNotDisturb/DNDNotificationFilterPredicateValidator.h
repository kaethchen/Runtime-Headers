@class NSString;

@interface DNDNotificationFilterPredicateValidator : NSObject <NSPredicateVisitor> {
    NSString *_compileTimeIssues;
}

- (void).cxx_destruct;
- (void)visitPredicate:(id)a0;
- (void)visitPredicateExpression:(id)a0;
- (void)visitPredicateOperator:(id)a0;
- (BOOL)validatePredicate:(id)a0 compileTimeIssues:(id *)a1 runTimeIssues:(id *)a2;

@end

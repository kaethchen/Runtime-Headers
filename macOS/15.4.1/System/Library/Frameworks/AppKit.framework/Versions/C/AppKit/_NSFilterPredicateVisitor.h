@class NSString, NSMutableArray;

@interface _NSFilterPredicateVisitor : NSObject <NSPredicateVisitor> {
    NSMutableArray *_predicateParts;
    unsigned long long _predicatePartsCount;
    BOOL _didFirstVisit;
    BOOL _bail;
    unsigned long long _visitingIndex;
    NSString *_substitutedValue;
}

- (void)dealloc;
- (id)result;
- (void)reset;
- (void)visitPredicate:(id)a0;
- (void)visitPredicateExpression:(id)a0;
- (void)visitPredicateOperator:(id)a0;
- (id)initWithPredicate:(id)a0;
- (id)substitutedValueForPredicate:(id)a0;

@end

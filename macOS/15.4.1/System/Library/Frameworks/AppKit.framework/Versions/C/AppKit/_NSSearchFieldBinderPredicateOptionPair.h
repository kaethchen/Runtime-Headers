@class NSString, NSPredicate, _NSFilterPredicateVisitor;

@interface _NSSearchFieldBinderPredicateOptionPair : NSObject {
    NSString *_predicateString;
    NSString *_predicateName;
    NSPredicate *_predicate;
    _NSFilterPredicateVisitor *_visitor;
}

- (void)dealloc;
- (id)init;
- (id)predicate;
- (id)predicateString;
- (id)visitor;
- (id)predicateName;
- (void)setPredicateName:(id)a0;
- (void)setPredicateString:(id)a0;

@end

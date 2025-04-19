@class NSPredicate, NSMutableDictionary, NSError;

@interface _NSPersistentHistoryTransactionPredicateParser : NSObject <NSPredicateVisitor> {
    NSPredicate *_predicate;
    NSMutableDictionary *_storeTokens;
    BOOL _hasDate;
    BOOL _hasTimestamp;
    NSError *_localError;
}

- (void)dealloc;
- (void)visitPredicate:(id)a0;
- (void)visitPredicateExpression:(id)a0;
- (void)visitPredicateOperator:(id)a0;
- (id)initWithPredicate:(id)a0;
- (BOOL)parse:(id *)a0;
- (id)storeTokens;

@end

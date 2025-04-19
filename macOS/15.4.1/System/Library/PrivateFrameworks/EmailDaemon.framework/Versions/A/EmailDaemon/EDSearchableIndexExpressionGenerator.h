@interface EDSearchableIndexExpressionGenerator : NSObject

+ (id)_comparisonOperationMatchingValue:(id)a0 operatorType:(unsigned long long)a1;
+ (BOOL)_keyPathIsSuggestable:(id)a0;
+ (id)_operandStringForCompoundPredicateType:(unsigned long long)a0;
+ (id)_queryWithAttributes:(id)a0 matchingValue:(id)a1 operatorType:(unsigned long long)a2;
+ (id)expressionForPredicate:(id)a0 suggestion:(id)a1;
+ (id)queryStringByJoiningQueries:(id)a0 withPredicateType:(unsigned long long)a1;
+ (id)searchableIndexQueryStringForComparisionPredicate:(id)a0 hasSuggestion:(BOOL)a1;

@end

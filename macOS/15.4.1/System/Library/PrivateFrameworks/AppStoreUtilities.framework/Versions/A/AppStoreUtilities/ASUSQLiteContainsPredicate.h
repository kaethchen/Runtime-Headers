@class ASUSQLiteQuery, NSString;

@interface ASUSQLiteContainsPredicate : ASUSQLitePropertyPredicate <NSCopying>

@property (readonly, nonatomic, getter=isNegative) BOOL negative;
@property (readonly, nonatomic) ASUSQLiteQuery *query;
@property (readonly, nonatomic) NSString *queryProperty;
@property (readonly, nonatomic) id values;

+ (id)containsPredicateWithProperty:(id)a0 query:(id)a1 queryProperty:(id)a2;
+ (id)containsPredicateWithProperty:(id)a0 values:(id)a1;
+ (id)doesNotContainPredicateWithProperty:(id)a0 values:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)SQLForEntityClass:(Class)a0;
- (void)applyBinding:(id)a0 atIndex:(inout int *)a1;

@end

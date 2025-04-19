@class NSString;

@interface HDSQLiteJoinClause : NSObject {
    NSString *_joinAsName;
}

@property (readonly, copy, nonatomic) NSString *localTable;
@property (readonly, nonatomic) Class targetEntityClass;
@property (readonly, copy, nonatomic) NSString *joinAsName;
@property (readonly, copy, nonatomic) NSString *localReferenceProperty;
@property (readonly, copy, nonatomic) NSString *targetKeyProperty;
@property (readonly, nonatomic) long long joinType;
@property (readonly, copy, nonatomic) NSString *additionalPredicate;

+ (id)innerJoinClauseFromTable:(id)a0 toTargetEntity:(Class)a1 as:(id)a2 localReference:(id)a3 targetKey:(id)a4;
+ (id)leftJoinClauseFromTable:(id)a0 toTargetEntity:(Class)a1 as:(id)a2 localReference:(id)a3 targetKey:(id)a4;
+ (id)leftJoinClauseFromTable:(id)a0 toTargetEntity:(Class)a1 as:(id)a2 localReference:(id)a3 targetKey:(id)a4 additionalPredicate:(id)a5;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)SQLJoinClause;
- (id)copyWithJoinType:(long long)a0;

@end

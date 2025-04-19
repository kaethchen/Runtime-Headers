@class NSString, NSArray, ASUSQLitePredicate;

@interface ASUSQLiteQueryDescriptor : NSObject <NSCopying>

@property (nonatomic) Class entityClass;
@property (nonatomic) Class memoryEntityClass;
@property (nonatomic) long long limitCount;
@property (copy, nonatomic) NSString *orderingClause;
@property (copy, nonatomic) NSArray *orderingDirections;
@property (copy, nonatomic) NSArray *orderingProperties;
@property (nonatomic) BOOL returnsDistinctEntities;
@property (copy, nonatomic) ASUSQLitePredicate *predicate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_newSelectSQLWithProperties:(id)a0 columns:(id)a1;
- (id)initWithEntityClass:(Class)a0 memoryEntityClass:(Class)a1;

@end

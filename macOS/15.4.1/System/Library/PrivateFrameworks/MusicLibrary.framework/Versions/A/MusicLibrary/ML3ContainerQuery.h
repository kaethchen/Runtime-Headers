@class NSArray, ML3Predicate, ML3Container;

@interface ML3ContainerQuery : ML3Query {
    ML3Predicate *_containerPredicate;
}

@property (readonly, nonatomic) NSArray *limitedPersistentIDs;
@property (readonly, nonatomic) ML3Container *container;
@property (readonly, nonatomic) BOOL requiresSmartLimiting;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)countOfEntities;
- (unsigned long long)countOfDistinctRowsForColumn:(id)a0;
- (id)enumerationDatabaseResultForSQL:(id)a0 onConnection:(id)a1 withParameters:(id)a2;
- (BOOL)hasEntities;
- (id)initWithEntityClass:(Class)a0 container:(id)a1 predicate:(id)a2 orderingTerms:(id)a3;
- (id)selectPersistentIDsSQLAndProperties:(id)a0 ordered:(BOOL)a1;
- (id)selectPersistentIDsSQLAndPropertiesForResultSet:(id)a0 ordered:(BOOL)a1;
- (id)valueForAggregateFunction:(id)a0 onEntitiesForProperty:(id)a1;

@end

@class NSString, ASUSQLiteConnection;

@interface ASUSQLiteEntity : NSObject <ASUSQLiteEntity>

@property (readonly, nonatomic) ASUSQLiteConnection *connection;
@property (readonly, nonatomic) long long persistentID;
@property (readonly, nonatomic) BOOL existsInDatabase;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)anyOnConnection:(id)a0 predicate:(id)a1;
+ (id)countForProperty:(id)a0 predicate:(id)a1 onConnection:(id)a2;
+ (id)databaseTable;
+ (id)disambiguatedSQLForProperty:(id)a0;
+ (id)foreignDatabaseColumnForProperty:(id)a0;
+ (id)foreignDatabaseTableForProperty:(id)a0;
+ (id)foreignDatabaseTablesToDelete;
+ (id)foreignKeyColumnForTable:(id)a0;
+ (id)joinClauseForProperty:(id)a0;
+ (id)maxValueForProperty:(id)a0 predicate:(id)a1 onConnection:(id)a2;
+ (Class)memoryEntityClass;
+ (id)minValueForProperty:(id)a0 predicate:(id)a1 onConnection:(id)a2;
+ (id)queryOnConnection:(id)a0 predicate:(id)a1;
+ (id)queryOnConnection:(id)a0 predicate:(id)a1 orderingProperties:(id)a2;
+ (id)allOnConnection:(id)a0 predicate:(id)a1;
+ (id)memoryEntityForPersistentID:(long long)a0 usingConnection:(id)a1;
+ (id)memoryEntityForPersistentID:(long long)a0 withProperties:(id)a1 usingConnection:(id)a2;
+ (id)queryOnConnection:(id)a0 predicate:(id)a1 entityClass:(Class)a2;
+ (id)queryOnConnection:(id)a0 predicate:(id)a1 orderingProperties:(id)a2 entityClass:(Class)a3;
+ (id)queryOnConnection:(id)a0 predicate:(id)a1 orderingProperties:(id)a2 orderingDirections:(id)a3;
+ (id)queryOnConnection:(id)a0 predicate:(id)a1 orderingProperties:(id)a2 orderingDirections:(id)a3 entityClass:(Class)a4;
+ (id)sumForProperty:(id)a0 predicate:(id)a1 onConnection:(id)a2;

- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)valueForProperty:(id)a0;
- (BOOL)setValue:(id)a0 forProperty:(id)a1;
- (BOOL)deleteFromDatabase;
- (id)getValuesForProperties:(id)a0;
- (id)initWithPersistentID:(long long)a0 onConnection:(id)a1;
- (id)initWithPropertyValues:(id)a0 onConnection:(id)a1;
- (BOOL)setValuesWithDictionary:(id)a0;
- (id)stringValueForProperty:(id)a0;
- (BOOL)boolValueForProperty:(id)a0;
- (id)dictValueForProperty:(id)a0;
- (id)errorValueForProperty:(id)a0;
- (long long)integerValueForProperty:(id)a0;
- (id)numberValueForProperty:(id)a0;
- (id)urlValueForProperty:(id)a0;
- (id)uuidValueForProperty:(id)a0;

@end

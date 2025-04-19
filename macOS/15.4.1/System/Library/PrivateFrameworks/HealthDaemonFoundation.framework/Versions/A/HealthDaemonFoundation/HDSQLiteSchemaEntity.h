@class NSString;

@interface HDSQLiteSchemaEntity : NSObject <HDSQLiteEntitySchema>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)databaseName;
+ (id)foreignKeys;
+ (id)createTableSQL;
+ (id)indices;
+ (BOOL)isTemporary;
+ (id)triggers;
+ (id)databaseTable;
+ (id)disambiguatedSQLForProperty:(id)a0;
+ (id)joinClausesForProperty:(id)a0;
+ (id)checkConstraints;
+ (id)primaryKeyColumns;
+ (void)enumerateColumnsWithBlock:(id /* block */)a0;
+ (id)allDatabaseColumnNames;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)deleteStatementWithProperty:(id)a0 database:(id)a1;
+ (id)disambiguatedDatabaseTable;
+ (Class)entityClassForEnumeration;
+ (Class)entityForProperty:(id)a0;
+ (BOOL)hasColumnWithName:(id)a0;
+ (BOOL)hasROWID;
+ (id)insertSQLForProperties:(id)a0 shouldReplace:(BOOL)a1;
+ (id)orderingTermForSortDescriptor:(id)a0;
+ (id)privateSubEntities;
+ (id)tableAliases;
+ (id)uniquedColumns;
+ (id)updateSQLForProperties:(id)a0 predicate:(id)a1;


@end

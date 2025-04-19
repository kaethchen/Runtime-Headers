@class NSString, NSMutableDictionary, NSDateFormatter;
@protocol SFSQLiteDelegate;

@interface SFSQLite : NSObject

@property (nonatomic) struct sqlite3 { } *db;
@property (nonatomic) unsigned long long openCount;
@property (nonatomic) BOOL corrupt;
@property (readonly, nonatomic) NSMutableDictionary *statementsBySQL;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (retain, nonatomic) NSDateFormatter *oldDateFormatter;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSString *schema;
@property (readonly, nonatomic) NSString *schemaVersion;
@property (retain, nonatomic) NSString *objectClassPrefix;
@property (nonatomic) int userVersion;
@property (nonatomic) long long synchronousMode;
@property (readonly, nonatomic) BOOL isOpen;
@property (readonly, nonatomic) BOOL hasMigrated;
@property (nonatomic) BOOL traced;
@property (retain, nonatomic) id<SFSQLiteDelegate> delegate;

- (void)dealloc;
- (id)propertyForKey:(id)a0;
- (void).cxx_destruct;
- (void)close;
- (void)open;
- (void)setProperty:(id)a0 forKey:(id)a1;
- (int)changes;
- (void)remove;
- (void)analyze;
- (void)end;
- (unsigned long long)selectCountFrom:(id)a0 where:(id)a1 bindings:(id)a2;
- (long long)lastInsertRowID;
- (id)_createSchemaHash;
- (id)_synchronousModeString;
- (id)_tableNameForClass:(Class)a0;
- (id)allTableNames;
- (void)attemptProperDatabasePermissions;
- (int)autoVacuumSetting;
- (void)begin;
- (id)columnNamesForTable:(id)a0;
- (id)creationDate;
- (id)datePropertyForKey:(id)a0;
- (int)dbUserVersion;
- (void)deleteFrom:(id)a0 matchingValues:(id)a1;
- (void)deleteFrom:(id)a0 where:(id)a1 bindings:(id)a2;
- (void)dropAllTables;
- (BOOL)executeSQL:(id)a0;
- (id)initWithPath:(id)a0 schema:(id)a1;
- (long long)insertOrReplaceInto:(id)a0 values:(id)a1;
- (BOOL)openWithError:(id *)a0;
- (void)removeAllStatements;
- (void)removePropertyForKey:(id)a0;
- (void)rollback;
- (id)select:(id)a0 from:(id)a1;
- (id)select:(id)a0 from:(id)a1 mapEachRow:(id /* block */)a2;
- (id)select:(id)a0 from:(id)a1 where:(id)a2 bindings:(id)a3;
- (void)select:(id)a0 from:(id)a1 where:(id)a2 bindings:(id)a3 orderBy:(id)a4 limit:(id)a5 block:(id /* block */)a6;
- (void)select:(id)a0 from:(id)a1 where:(id)a2 bindings:(id)a3 orderBy:(id)a4 limit:(id)a5 forEachRow:(id /* block */)a6;
- (id)selectAllFrom:(id)a0 where:(id)a1 bindings:(id)a2;
- (id)selectFrom:(id)a0 where:(id)a1 bindings:(id)a2 limit:(id)a3;
- (void)selectFrom:(id)a0 where:(id)a1 bindings:(id)a2 orderBy:(id)a3 limit:(id)a4 block:(id /* block */)a5;
- (void)setDateProperty:(id)a0 forKey:(id)a1;
- (id)statementForSQL:(id)a0;
- (void)update:(id)a0 set:(id)a1 where:(id)a2 bindings:(id)a3 limit:(id)a4;
- (void)vacuum;

@end

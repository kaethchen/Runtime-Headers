@class NSURL, BRCPQLConnection;

@interface BRCSQLBackedSet : NSObject {
    BRCPQLConnection *_db;
    NSURL *_dbRootFolder;
    Class _class;
}

@property (readonly, nonatomic) unsigned long long count;

+ (id)_databaseRootDirectory;
+ (void)clearTempDatabases;
+ (id)createSetOfClass:(Class)a0 withSQLType:(id)a1 error:(id *)a2;
+ (id)createStringsSetWithError:(id *)a0;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)_closeDB;
- (BOOL)addObject:(id)a0 error:(id *)a1;
- (BOOL)_createSchemaForSQLType:(id)a0 error:(id *)a1;
- (void)_dbBecameCorrupted;
- (void)enumerateObjectsWithSortOrder:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)initArrayOfClass:(Class)a0 withSQLType:(id)a1 error:(id *)a2;

@end

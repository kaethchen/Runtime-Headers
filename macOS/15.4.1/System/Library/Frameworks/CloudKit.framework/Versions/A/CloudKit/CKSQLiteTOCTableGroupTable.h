@class CKSQLiteDatabase;

@interface CKSQLiteTOCTableGroupTable : CKSQLiteTable {
    CKSQLiteDatabase *_strongDatabase;
}

+ (id)dbProperties;
+ (id)dbTableName;
+ (unsigned long long)dbVersion;
+ (Class)entryClass;

- (void).cxx_destruct;
- (id)db;
- (id)deleteObject:(id)a0;
- (id)insertObject:(id)a0;
- (id)entryWithGroupName:(id)a0 error:(id *)a1;
- (id)invalidateGroup:(id)a0;
- (void)setTableGroup:(id)a0;
- (id)tableGroupsWithClass:(id)a0;
- (id)updateGroupData:(id)a0;
- (void)updateLastUsedDate:(id)a0;

@end

@class NSString, CKSQLiteReferencedObjectTable;

@interface CKSQLiteRefcountTable : CKSQLiteTable {
    CKSQLiteReferencedObjectTable *_referentDBTable;
    NSString *_referentPrimaryKey;
}

+ (id)dbProperties;
+ (Class)entryClass;

- (void).cxx_destruct;
- (id)createTableSQL;
- (id)deleteUnreferenced;
- (id)finishInitializing;
- (id)initWithLogicalTableName:(id)a0 referentTable:(id)a1;
- (unsigned long long)refcountForObjectID:(id)a0;

@end

@class CKSQLiteTOCTable, CKSQLiteTOCTableGroupTable;

@interface CKSQLiteTOCTableGroup : CKSQLiteTableGroup {
    CKSQLiteTOCTableGroupTable *_tocTableGroup;
    CKSQLiteTOCTable *_tocTable;
}

+ (double)expirationTime;
+ (id)TOCTableGroupInDatabase:(id)a0;
+ (id)bootstrapNewDatabase:(id)a0;
+ (unsigned long long)dbVersion;

- (void).cxx_destruct;
- (id)_tablesByNameInitializer;
- (id)initWithName:(id)a0 options:(unsigned long long)a1 database:(id)a2;
- (id)tocTable;
- (id)tocTableGroup;
- (id)tocTableGroupInitValue;
- (id)tocTableGroupTable;

@end

@interface CKSQLiteTOCTable : CKSQLiteTable

+ (id)dbProperties;
+ (id)dbTableName;
+ (unsigned long long)dbVersion;
+ (Class)entryClass;

- (id)_tocEntriesWithGroupID:(id)a0 error:(id *)a1 label:(const struct { char *x0; char *x1; int x2; } *)a2 properties:(id)a3;
- (BOOL)tableExists:(id)a0 error:(id *)a1;
- (id)tocEntriesWithGroupID:(id)a0 error:(id *)a1;
- (id)tocEntryWithGroupID:(id)a0 logicalTableName:(id)a1 error:(id *)a2;
- (id)validationTocEntriesWithGroupID:(id)a0 error:(id *)a1;

@end

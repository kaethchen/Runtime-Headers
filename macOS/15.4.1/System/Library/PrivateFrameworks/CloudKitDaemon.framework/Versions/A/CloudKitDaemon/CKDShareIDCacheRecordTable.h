@class CKDShareIDCacheTable;

@interface CKDShareIDCacheRecordTable : CKSQLiteCacheTable

@property (readonly, nonatomic) CKDShareIDCacheTable *shareIDTable;

+ (id)dbProperties;
+ (Class)entryClass;

- (void).cxx_destruct;
- (BOOL)addOrUpdateRecordID:(id)a0 withParentID:(id)a1 error:(id *)a2;
- (BOOL)addShareID:(id)a0 forRootRecordID:(id)a1 error:(id *)a2;
- (id)entryForRecordID:(id)a0 addIfNotFound:(BOOL)a1 error:(id *)a2;
- (id)initWithShareIDTable:(id)a0;
- (BOOL)propagateShareRowID:(id)a0 toChildrenOfRowID:(id)a1 error:(id *)a2;
- (BOOL)removeRecordID:(id)a0 error:(id *)a1;
- (BOOL)removeRecordsWithShareRowID:(id)a0 error:(id *)a1;
- (unsigned long long)removeRecordsWithZoneRowID:(id)a0 error:(id *)a1;
- (unsigned long long)removeZoneID:(id)a0 error:(id *)a1;
- (id)shareIDForRecordID:(id)a0 error:(id *)a1;
- (id)shareIDsForZoneID:(id)a0 error:(id *)a1;

@end

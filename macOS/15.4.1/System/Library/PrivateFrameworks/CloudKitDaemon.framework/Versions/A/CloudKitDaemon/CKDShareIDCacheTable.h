@class CKDZoneIDCacheTable;

@interface CKDShareIDCacheTable : CKSQLiteCacheTable

@property (readonly, nonatomic) CKDZoneIDCacheTable *zoneIDTable;

+ (id)dbProperties;
+ (Class)entryClass;

- (void).cxx_destruct;
- (id)entryForShareID:(id)a0 addIfNotFound:(BOOL)a1 error:(id *)a2;
- (id)initWithZoneIDTable:(id)a0;
- (BOOL)removeRowID:(id)a0 error:(id *)a1;
- (unsigned long long)removeSharesWithZoneRowID:(id)a0 error:(id *)a1;
- (unsigned long long)removeSharesWithZoneRowID:(id)a0 exceptRowID:(id)a1 error:(id *)a2;
- (id)shareIDForRowID:(id)a0 error:(id *)a1;
- (id)shareIDsForZoneRowID:(id)a0 zoneID:(id)a1 error:(id *)a2;

@end

@class CKDShareIDCacheTable;

@interface CKDZoneShareCacheTable : CKSQLiteCacheTable

@property (readonly, nonatomic) CKDShareIDCacheTable *shareIDTable;

+ (id)dbProperties;
+ (Class)entryClass;

- (void).cxx_destruct;
- (BOOL)addZoneShareID:(id)a0 error:(id *)a1;
- (id)entryForZoneID:(id)a0 error:(id *)a1;
- (BOOL)hasZoneID:(id)a0 error:(id *)a1;
- (id)initWithShareIDTable:(id)a0;
- (BOOL)removeRowID:(id)a0 error:(id *)a1;
- (id)shareIDForZoneID:(id)a0 error:(id *)a1;

@end

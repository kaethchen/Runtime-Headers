@interface CKDZoneIDCacheTable : CKSQLiteCacheTable

+ (id)dbProperties;
+ (Class)entryClass;

- (id)init;
- (id)entryForZoneID:(id)a0 addIfNotFound:(BOOL)a1 error:(id *)a2;
- (BOOL)removeRowID:(id)a0 error:(id *)a1;
- (id)rowIDForZoneID:(id)a0 addIfNotFound:(BOOL)a1 error:(id *)a2;
- (id)zoneIDForRowID:(id)a0 error:(id *)a1;

@end

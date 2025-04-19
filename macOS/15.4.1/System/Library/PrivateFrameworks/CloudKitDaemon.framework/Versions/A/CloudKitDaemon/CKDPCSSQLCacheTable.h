@interface CKDPCSSQLCacheTable : CKSQLiteCacheTable

+ (id)dbProperties;
+ (Class)entryClass;
+ (double)cacheValidTime;

- (id)init;
- (id)objectClassesForProperty:(id)a0;
- (id)PCSDataForID:(id)a0 databaseScope:(long long)a1 itemType:(unsigned long long)a2 accountID:(id)a3 serviceName:(id)a4;
- (id)deletePCSDataForID:(id)a0 databaseScope:(long long)a1 itemType:(unsigned long long)a2 accountID:(id)a3 serviceName:(id)a4;
- (id)deletePCSDataForShare:(id)a0 account:(id)a1 serviceName:(id)a2;
- (id)deletePCSDataForZone:(id)a0 account:(id)a1 serviceName:(id)a2;

@end

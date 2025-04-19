@interface WBSLPLinkMetadataSQLiteStore : WBSSQLiteStore

- (int)_createFreshDatabaseSchema;
- (int)_currentSchemaVersion;
- (int)_migrateToSchemaVersion:(int)a0;
- (int)_migrateToSchemaVersion_2;
- (id)_fetchMetadataInfoForURLString:(id)a0;
- (BOOL)_deleteAllMetadataInfo;
- (id)_deleteMetadataInfoForURLStrings:(id)a0;
- (void)_deleteMetadataInfoWithUUID:(id)a0;
- (id)_deleteUUIDWithOldestTimestamp;
- (id)_fetchAllMetadataInfo;
- (id)_fetchAllMetadataInfoWithUUID:(id)a0;
- (id)_queryListWithStrings:(id)a0;
- (BOOL)_setMetadataInfo:(id)a0 forURLString:(id)a1;
- (unsigned long long)_uuidCount;
- (void)getAllMetadataInfoWithCompletionHandler:(id /* block */)a0;
- (void)getMetadataInfoForURLString:(id)a0 completionHandler:(id /* block */)a1;
- (void)linkAndUpdateMetadataInfoForURLString:(id)a0 lastFetchDate:(id)a1 lastFetchDidSucceed:(BOOL)a2 metadataHasImage:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)linkURLString:(id)a0 withMetadataInfoForURLString:(id)a1 completionHandler:(id /* block */)a2;
- (void)performLRUEvictionIfNecessaryWithMaximumNumberOfEntries:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)removeAllMetadataInfoWithCompletionHandler:(id /* block */)a0;
- (void)removeAllMetadataInfoWithUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeMetadataInfoForURLStrings:(id)a0 completionHandler:(id /* block */)a1;

@end

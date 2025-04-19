@interface PPMutableContactDiskCache : PPContactDiskCache

- (id)_createNewCacheObjectWithCreatedAt:(long long)a0;
- (id)_recordSetBucketsForNameRecords:(id)a0;
- (BOOL)_writeCache:(id)a0 path:(id)a1 error:(id *)a2;
- (BOOL)addNameRecords:(id)a0 error:(id *)a1;
- (BOOL)deleteCacheIfTooOld;
- (BOOL)deleteNameRecordCache;
- (long long)lastCreatedAt;
- (void)setLastCreatedAt:(long long)a0;
- (BOOL)updateNameRecordCacheWithHistoryRecords:(id)a0 error:(id *)a1;

@end

@interface HDSourceEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)foreignKeys;
+ (id)indices;
+ (id)databaseTable;
+ (id)joinClausesForProperty:(id)a0;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (BOOL)enumerateBundleIdentifiersForSourcesForUUIDData:(id)a0 transaction:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
+ (BOOL)enumerateBundleIdentifiersForSourcesWithPredicate:(id)a0 database:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
+ (id)firstSourceWithPredicate:(id)a0 database:(id)a1 error:(id *)a2;
+ (id)firstSourceWithPredicate:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)insertSourceWithUUID:(id)a0 logicalSourceID:(long long)a1 name:(id)a2 options:(unsigned long long)a3 isCurrentDevice:(BOOL)a4 productType:(id)a5 deleted:(BOOL)a6 modificationDate:(id)a7 provenance:(long long)a8 syncIdentity:(long long)a9 transaction:(id)a10 error:(id *)a11;
+ (id)propertyForSyncAnchor;
+ (id)propertyForSyncIdentity;
+ (id)propertyForSyncProvenance;
+ (id)sourceForLocalDeviceWithDatabase:(id)a0 error:(id *)a1;
+ (id)sourceForLogicalSourceID:(id)a0 localDeviceBundleIdentifier:(BOOL)a1 localOnly:(BOOL)a2 transaction:(id)a3 error:(id *)a4;
+ (id)sourcesWithPredicate:(id)a0 includeDeleted:(BOOL)a1 database:(id)a2 error:(id *)a3;
+ (id)sourcesWithPredicate:(id)a0 includeDeleted:(BOOL)a1 profile:(id)a2 error:(id *)a3;
+ (id)sourcesWithPredicate:(id)a0 orderingTerms:(id)a1 includeDeleted:(BOOL)a2 database:(id)a3 error:(id *)a4;

- (id)codableSourceWithProfile:(id)a0 error:(id *)a1;
- (BOOL)adoptAsLocalSourceWithLogicalSourceID:(id)a0 UUID:(id)a1 name:(id)a2 productType:(id)a3 profile:(id)a4 error:(id *)a5;
- (id)codableSourceWithEncoder:(id)a0 transaction:(id)a1 profile:(id)a2 error:(id *)a3;
- (BOOL)deleteSourceWithTombstoneLogicalSourceID:(long long)a0 syncIdentity:(long long)a1 database:(id)a2 transaction:(id)a3 error:(id *)a4;
- (BOOL)setName:(id)a0 profile:(id)a1 error:(id *)a2;
- (BOOL)setOptions:(unsigned long long)a0 profile:(id)a1 didUpdate:(BOOL *)a2 error:(id *)a3;
- (id)sourceBundleIdentifierInDatabase:(id)a0 error:(id *)a1;
- (id)sourceUUIDWithHealthDatabase:(id)a0 error:(id *)a1;
- (id)sourceUUIDWithProfile:(id)a0 error:(id *)a1;
- (id)sourceWithProfile:(id)a0 error:(id *)a1;
- (id)unitTest_logicalSourceEntityWithHealthDatabase:(id)a0 error:(id *)a1;

@end

@interface HDOriginalSignedClinicalDataRecordEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)foreignKeys;
+ (id)allProperties;
+ (id)databaseTable;
+ (id)joinClausesForProperty:(id)a0;
+ (id)allColumns;
+ (id)checkConstraints;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)entityWithSyncIdentifier:(id)a0 database:(id)a1 error:(id *)a2;
+ (id)existingEntityWithSyncIdentifier:(id)a0 database:(id)a1 error:(id *)a2;
+ (id)propertyForSyncIdentity;
+ (id)propertyForSyncProvenance;
+ (id)uniquedColumns;

@end

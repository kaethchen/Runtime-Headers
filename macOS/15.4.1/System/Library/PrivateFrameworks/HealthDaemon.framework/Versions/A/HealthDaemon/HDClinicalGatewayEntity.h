@interface HDClinicalGatewayEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)databaseTable;
+ (id)disambiguatedSQLForProperty:(id)a0;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)propertyForSyncAnchor;
+ (id)propertyForSyncIdentity;
+ (id)propertyForSyncProvenance;
+ (id)uniquedColumns;

@end

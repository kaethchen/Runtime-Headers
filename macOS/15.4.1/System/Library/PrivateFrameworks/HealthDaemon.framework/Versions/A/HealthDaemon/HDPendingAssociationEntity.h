@interface HDPendingAssociationEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)indices;
+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)propertyForSyncIdentity;
+ (id)propertyForSyncProvenance;
+ (id)uniquedColumns;

@end

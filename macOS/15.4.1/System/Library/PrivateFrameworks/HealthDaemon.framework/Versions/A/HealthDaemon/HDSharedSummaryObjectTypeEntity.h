@interface HDSharedSummaryObjectTypeEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)foreignKeys;
+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)insertWithSummaryID:(long long)a0 objectTypes:(id)a1 databaseTransaction:(id)a2 error:(id *)a3;
+ (id)objectTypesForSummaryID:(long long)a0 databaseTransaction:(id)a1 error:(id *)a2;
+ (id)uniquedColumns;

@end

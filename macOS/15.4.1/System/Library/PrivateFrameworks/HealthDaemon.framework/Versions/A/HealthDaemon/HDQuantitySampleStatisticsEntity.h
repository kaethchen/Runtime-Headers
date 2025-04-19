@interface HDQuantitySampleStatisticsEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)foreignKeys;
+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (BOOL)setDiscreteQuantitySampleStatistics:(id)a0 persistentID:(id)a1 database:(id)a2 error:(id *)a3;

@end

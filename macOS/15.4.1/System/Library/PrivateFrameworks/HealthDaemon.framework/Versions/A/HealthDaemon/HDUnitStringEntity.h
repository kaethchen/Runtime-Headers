@interface HDUnitStringEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)databaseTable;
+ (id)storeUnitString:(id)a0 database:(id)a1 error:(id *)a2;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;

@end

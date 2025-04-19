@interface HDWorkoutBuilderAssociatedSeriesEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)foreignKeys;
+ (id)databaseTable;
+ (id)seriesForBuilder:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)allBuilderAssociatedSeriesWithProfile:(id)a0 error:(id *)a1;
+ (long long)associateSeries:(id)a0 toWorkoutBuilderID:(id)a1 profile:(id)a2 error:(id *)a3;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (BOOL)enumerateSeriesForBuilder:(id)a0 transaction:(id)a1 error:(id *)a2 block:(id /* block */)a3;
+ (id)uniquedColumns;

@end

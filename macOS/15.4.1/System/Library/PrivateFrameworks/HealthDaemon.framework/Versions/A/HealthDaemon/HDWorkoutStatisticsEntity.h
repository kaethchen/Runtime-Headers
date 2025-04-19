@interface HDWorkoutStatisticsEntity : HDHealthEntity

+ (id)_allProperties;
+ (long long)protectionClass;
+ (id)foreignKeys;
+ (id)databaseTable;
+ (BOOL)enumerateWorkoutStatisticsForActivityId:(unsigned long long)a0 database:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (BOOL)insertWorkoutStatistics:(id)a0 workoutActivityId:(unsigned long long)a1 database:(id)a2 error:(id *)a3;
+ (Class)ownerEntityClass;
+ (id)uniquedColumns;
+ (id)workoutStatisticsForActivityId:(unsigned long long)a0 quantityType:(id)a1 database:(id)a2 error:(id *)a3;

@end

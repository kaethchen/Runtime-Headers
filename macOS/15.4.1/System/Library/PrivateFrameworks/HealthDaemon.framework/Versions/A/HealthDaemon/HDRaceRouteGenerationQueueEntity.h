@interface HDRaceRouteGenerationQueueEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)foreignKeys;
+ (id)databaseTable;
+ (id)clearQueueWithTransaction:(id)a0 error:(id *)a1;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (BOOL)finishWorkoutCluster:(id)a0 concreteCluster:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (id)nextWorkoutClusterWithTransaction:(id)a0 error:(id *)a1;
+ (BOOL)populateWithWorkoutClusters:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)uniquedColumns;

@end

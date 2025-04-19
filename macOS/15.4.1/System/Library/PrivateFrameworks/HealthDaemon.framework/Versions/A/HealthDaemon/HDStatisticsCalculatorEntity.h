@interface HDStatisticsCalculatorEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)foreignKeys;
+ (id)databaseTable;
+ (id)calculatorForOwner:(id)a0 type:(id)a1 anchor:(id *)a2 transaction:(id)a3 error:(id *)a4;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (BOOL)enumerateStatisticsForOwner:(id)a0 transaction:(id)a1 error:(id *)a2 block:(id /* block */)a3;
+ (Class)ownerEntityClass;
+ (id)ownerEntityReferenceColumn;
+ (BOOL)setCalculator:(id)a0 forOwner:(id)a1 anchor:(id)a2 transaction:(id)a3 error:(id *)a4;
+ (BOOL)setStatistics:(id)a0 forOwner:(id)a1 anchor:(id)a2 transaction:(id)a3 error:(id *)a4;
+ (id)statisticsForOwner:(id)a0 type:(id)a1 anchor:(id *)a2 transaction:(id)a3 error:(id *)a4;
+ (id)uniquedColumns;

@end

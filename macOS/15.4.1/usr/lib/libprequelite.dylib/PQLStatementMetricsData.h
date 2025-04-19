@interface PQLStatementMetricsData : NSObject <PQLStatementMetrics>

@property (readonly, nonatomic) struct sqlite3_stmt { } *stmt;
@property (readonly, nonatomic) unsigned long long returnedRows;
@property (readonly, nonatomic) double executionTime;
@property (readonly, nonatomic) double preparationTime;

- (id)initWithStmt:(struct sqlite3_stmt { } *)a0 returnedRows:(unsigned long long)a1 executionTime:(double)a2 preparationTime:(double)a3;

@end

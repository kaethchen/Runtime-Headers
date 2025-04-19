@class NSString, NSDictionary;

@interface EDSQLQueryStatistics : NSObject

@property (readonly, nonatomic) NSString *redactedQuery;
@property (readonly, nonatomic) NSDictionary *queryCountByTransactionLabel;
@property (readonly, nonatomic) unsigned long long queryCount;
@property (readonly, nonatomic) unsigned long long firstRowMinExecutionTime;
@property (readonly, nonatomic) unsigned long long firstRowMaxExecutionTime;
@property (readonly, nonatomic) unsigned long long firstRowMeanExecutionTime;
@property (readonly, nonatomic) unsigned long long firstRowTwentyPercentileExecutionTime;
@property (readonly, nonatomic) unsigned long long firstRowEightyPercentileExecutionTime;
@property (readonly, nonatomic) unsigned long long timePerRowMinExecutionTime;
@property (readonly, nonatomic) unsigned long long timePerRowMaxExecutionTime;
@property (readonly, nonatomic) unsigned long long timePerRowMeanExecutionTime;
@property (readonly, nonatomic) unsigned long long timePerRowTwentyPercentileExecutionTime;
@property (readonly, nonatomic) unsigned long long timePerRowEightyPercentileExecutionTime;
@property (readonly, nonatomic) unsigned long long totalMinExecutionTime;
@property (readonly, nonatomic) unsigned long long totalMaxExecutionTime;
@property (readonly, nonatomic) unsigned long long totalMeanExecutionTime;
@property (readonly, nonatomic) unsigned long long totalTwentyPercentileExecutionTime;
@property (readonly, nonatomic) unsigned long long totalEightyPercentileExecutionTime;

- (void).cxx_destruct;
- (void)addStatisticWithTransactionLabel:(id)a0 firstRowExecutionTime:(id)a1 timePerRowExecutionTime:(id)a2 totalExecutionTime:(id)a3;
- (id)initWithQuery:(id)a0 transactionLabel:(id)a1 firstRowExecutionTime:(id)a2 timePerRowExecutionTime:(id)a3 totalExecutionTime:(id)a4;

@end

@protocol ATXShadowMetricsDataSource;

@interface ATXShadowMetricsComputer : NSObject

@property (readonly, nonatomic) id<ATXShadowMetricsDataSource> dataSource;

- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (id)computeResultFromStartDate:(id)a0 toEndDate:(id)a1;
- (id)computeResultAsTrendPlotFromStartDate:(id)a0 toEndDate:(id)a1 resultGranularity:(long long)a2;

@end

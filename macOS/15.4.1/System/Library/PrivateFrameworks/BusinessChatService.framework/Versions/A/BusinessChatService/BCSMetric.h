@class NSArray;

@interface BCSMetric : NSObject

@property (readonly, nonatomic) NSArray *postProcessingMetricHandlers;
@property (readonly, nonatomic) id context;
@property (readonly, nonatomic) long long metricType;

+ (BOOL)isUsingExpensiveNetwork;

- (void).cxx_destruct;
- (id)_initWithType:(long long)a0 context:(id)a1 postProcessingMetricHandlers:(id)a2;
- (void)submitForPostProcessing;

@end

@class NSMutableArray;

@interface IntervalMetric : NSObject

@property unsigned long long intervalStart;
@property (retain) NSMutableArray *data;
@property unsigned long long min;
@property unsigned long long max;
@property unsigned long long median;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)computeMetrics;
- (void)closeInterval;
- (id)logMetric;
- (void)openInterval;

@end

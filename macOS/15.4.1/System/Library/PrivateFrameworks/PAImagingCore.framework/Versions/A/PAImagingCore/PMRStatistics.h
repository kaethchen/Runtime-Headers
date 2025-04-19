@interface PMRStatistics : NSObject

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) double sum;
@property (readonly, nonatomic) double min;
@property (readonly, nonatomic) double max;
@property (readonly, nonatomic) double mean;
@property (readonly, nonatomic) double variance;
@property (readonly, nonatomic) double standardDeviation;
@property (readonly, nonatomic) double median;
@property (readonly, nonatomic) double variation;
@property (readonly, nonatomic) double confidenceInterval;
@property (readonly, nonatomic) double estimatedConfidenceInterval;
@property (readonly, nonatomic) double medianAbsoluteDifference;

- (double)estimatedStandardDeviation;
- (double)estimatedStandardError;
- (id)initWithDataSet:(id)a0;

@end

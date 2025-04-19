@interface PMRStreamingStatistics : NSObject {
    BOOL _dirty;
    double _arithmeticMean;
    double _olympicMean;
    double _standardDeviation;
    double _variance;
    double _stddev_m;
    double _stddev_s;
    double _stddev_k;
}

@property (readonly, nonatomic) double sum;
@property (readonly, nonatomic) double min;
@property (readonly, nonatomic) double max;
@property (readonly, nonatomic) double range;
@property (readonly, nonatomic) double midrange;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) double arithmeticMean;
@property (readonly, nonatomic) double average;
@property (readonly, nonatomic) double variance;
@property (readonly, nonatomic) double standardDeviation;
@property (readonly, nonatomic) double olympicMean;

- (id)init;
- (void)clear;
- (void)observeValue:(double)a0;
- (void)_updateDependantState;

@end

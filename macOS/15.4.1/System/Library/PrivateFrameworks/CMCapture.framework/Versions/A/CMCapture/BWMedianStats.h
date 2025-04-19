@class NSMutableArray;

@interface BWMedianStats : BWStats {
    long long _maxNumberOfSamplesForMedianCalculation;
    NSMutableArray *_samples;
}

@property (readonly, nonatomic) double median;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)addDataPointP:(double)a0;
- (id)initWithMaxNumberOfSamplesForMedianCalculation:(long long)a0;

@end

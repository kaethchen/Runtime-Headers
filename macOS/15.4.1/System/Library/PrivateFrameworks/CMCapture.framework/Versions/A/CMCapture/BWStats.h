@class NSString;

@interface BWStats : NSObject {
    double _min;
    double _max;
    double _sumX;
    double _sumXX;
}

@property (nonatomic) double multiplier;
@property (copy, nonatomic) NSString *unitDesignator;
@property (readonly, nonatomic) long long numberOfSamples;
@property (readonly, nonatomic) double min;
@property (readonly, nonatomic) double max;
@property (readonly, nonatomic) double average;
@property (readonly, nonatomic) double standardDeviation;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (id)init;
- (void)addDataPoint:(double)a0;
- (BOOL)addDataPointP:(double)a0;
- (id)initWithStats:(id)a0;

@end

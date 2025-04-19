@class NSNumber;

@interface SignpostAggregationValueStats : NSObject

@property (retain, nonatomic) NSNumber *count;
@property (retain, nonatomic) NSNumber *min;
@property (retain, nonatomic) NSNumber *max;
@property (retain, nonatomic) NSNumber *stddev;
@property (retain, nonatomic) NSNumber *_rawTotal;
@property (retain, nonatomic) NSNumber *_rawAverage;
@property (readonly, nonatomic) NSNumber *total;
@property (readonly, nonatomic) NSNumber *average;

+ (id)sumOfStats0:(id)a0 stats1:(id)a1 errorOut:(id *)a2;
+ (id)zeroedValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_finalizeState;

@end

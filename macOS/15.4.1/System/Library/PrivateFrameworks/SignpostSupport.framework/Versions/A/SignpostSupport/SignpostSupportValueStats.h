@class NSArray, NSString;

@interface SignpostSupportValueStats : NSObject <SignpostJSONRepresentable>

@property (readonly, nonatomic) NSArray *sortedValues;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) double sum;
@property (readonly, nonatomic) double average;
@property (readonly, nonatomic) double min;
@property (readonly, nonatomic) double max;
@property (readonly, nonatomic) double stddev;
@property (readonly, nonatomic) double p50;
@property (readonly, nonatomic) double p90;
@property (readonly, nonatomic) double p95;
@property (readonly, nonatomic) double p99;
@property (readonly, nonatomic) BOOL supportsDynamicPercentiles;
@property (readonly, nonatomic) NSString *unitsLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)jsonDescription:(unsigned long long)a0;
- (id)initWithValues:(id)a0 unitsLabel:(id)a1 supportsDynamicPercentiles:(BOOL)a2;
- (id)valueForPercentile:(double)a0;

@end

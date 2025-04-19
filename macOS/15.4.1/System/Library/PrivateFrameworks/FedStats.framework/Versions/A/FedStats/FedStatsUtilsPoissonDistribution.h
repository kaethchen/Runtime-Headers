@class NSNumber, NSString;

@interface FedStatsUtilsPoissonDistribution : NSObject <FedStatsUtilsDiscreteDistribution>

@property (nonatomic) double mean;
@property (copy, nonatomic) NSNumber *cap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (double)variance;
- (unsigned long long)sample;
- (id)initWithMean:(double)a0;
- (id)initWithMean:(double)a0 cap:(unsigned long long)a1;
- (unsigned long long)sampleLargeWithUnitNumberGenerator:(id)a0;
- (unsigned long long)sampleSmallWithUnitNumberGenerator:(id)a0;
- (unsigned long long)sampleWithUnitNumberGenerator:(id)a0;
- (double)varianceOfSecondMoment;

@end

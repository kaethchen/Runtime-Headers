@class NSString;

@interface FedStatsUtilsNormalDistribution : NSObject <FedStatsUtilsContinuousDistribution>

@property (nonatomic) double mean;
@property (nonatomic) double standardDeviation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (double)variance;
- (double)sample;
- (id)initWithMean:(double)a0 standardDeviation:(double)a1;
- (id)initWithMean:(double)a0;
- (id)initWithStandardDeviation:(double)a0;
- (double)sampleWithUnitNumberGenerator:(id)a0;
- (double)varianceOfSecondMoment;

@end

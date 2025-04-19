@class NSString;

@interface FedStatsUtilsUniformUnitIntervalDistribution : NSObject <FedStatsUtilsContinuousDistribution>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)mean;
- (double)variance;
- (double)sample;
- (double)sampleWithUnitNumberGenerator:(id)a0;
- (double)varianceOfSecondMoment;

@end

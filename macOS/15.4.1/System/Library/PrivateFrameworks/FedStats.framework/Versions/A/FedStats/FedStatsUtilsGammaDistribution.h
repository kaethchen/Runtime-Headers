@class NSNumber, NSString;

@interface FedStatsUtilsGammaDistribution : NSObject <FedStatsUtilsContinuousDistribution>

@property (nonatomic) double shape;
@property (nonatomic) double scale;
@property (retain, nonatomic) NSNumber *cap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)distributionWithShape:(double)a0 scale:(double)a1 cap:(id)a2;
+ (double)sampleLargeWithShape:(double)a0 scale:(double)a1 unitNumberGenerator:(id)a2;

- (void).cxx_destruct;
- (double)mean;
- (double)variance;
- (double)sample;
- (id)initWithShape:(double)a0 scale:(double)a1 cap:(id)a2;
- (double)sampleUncappedWithUnitNumberGenerator:(id)a0;
- (double)sampleWithUnitNumberGenerator:(id)a0;
- (double)varianceOfSecondMoment;

@end

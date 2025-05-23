@interface RTInferredMapItemFuserParameters : NSObject

@property (readonly, nonatomic) double aoiConsiderThreshold;
@property (readonly, nonatomic) double aoiUseThreshold;
@property (readonly, nonatomic) double confidenceEqualityEpsilon;
@property (readonly, nonatomic) double distanceThreshold;
@property (readonly, nonatomic) double placeholderMultiplier;

- (id)description;
- (id)init;
- (id)initWithAoiConsiderThreshold:(double)a0 aoiUseThreshold:(double)a1 confidenceEqualityEpsilon:(double)a2 distanceThreshold:(double)a3 placeholderMultiplier:(double)a4;
- (id)initWithDefaultsManager:(id)a0;

@end

@interface RTMapItemProviderCurrentPOIParameters : NSObject

@property (readonly, nonatomic) double distanceThreshold;

- (id)description;
- (id)init;
- (id)initWithDefaultsManager:(id)a0;
- (id)initWithDistanceThreshold:(double)a0;

@end

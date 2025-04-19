@interface VNRegionOfInterestTilingOptions : NSObject <NSCopying>

@property double tileOverlapPercentage;
@property double regionOfInterestAspectRatioThreshold;
@property long long tileOverflowCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end

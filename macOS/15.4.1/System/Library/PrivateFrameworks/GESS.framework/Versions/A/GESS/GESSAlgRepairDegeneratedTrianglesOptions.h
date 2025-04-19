@interface GESSAlgRepairDegeneratedTrianglesOptions : NSObject

@property BOOL enableTopologicalChange;
@property float shortEdgesCollapsingRatioThreshold;

- (id)init;

@end

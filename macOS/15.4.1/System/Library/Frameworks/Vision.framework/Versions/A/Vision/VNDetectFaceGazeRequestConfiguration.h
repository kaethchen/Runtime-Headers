@interface VNDetectFaceGazeRequestConfiguration : VNImageBasedRequestConfiguration

@property (nonatomic) float gazeHeatMapThreshold;
@property (nonatomic) float minimumFaceDimension;
@property (nonatomic) float commonGazeLocationRadius;
@property (nonatomic) BOOL resolveSomewhereElseDirection;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequestClass:(Class)a0;

@end

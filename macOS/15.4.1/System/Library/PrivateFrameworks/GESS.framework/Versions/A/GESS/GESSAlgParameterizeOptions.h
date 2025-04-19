@interface GESSAlgParameterizeOptions : NSObject

@property int packingMethod;
@property int overlapCheckMode;
@property BOOL enableUVUtilizationOptimization;
@property unsigned int textureResolution;
@property unsigned int numOfTextures;
@property float gutter;

- (id)init;

@end

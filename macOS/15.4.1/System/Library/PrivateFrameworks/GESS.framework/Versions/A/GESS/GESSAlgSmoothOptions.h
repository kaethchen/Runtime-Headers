@interface GESSAlgSmoothOptions : NSObject

@property float lambda;
@property unsigned int iterations;
@property BOOL fixBoundary;
@property BOOL enableTangentialRelaxation;

- (id)init;

@end

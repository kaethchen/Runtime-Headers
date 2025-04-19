@interface GESSAlgIsotropicRemeshOptions : NSObject

@property unsigned int iterations;
@property float splitRatio;
@property float collapseRatio;
@property float smoothLambda;
@property float smoothIterations;

- (id)init;

@end

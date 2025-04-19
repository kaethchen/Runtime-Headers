@interface GESSAlgIsometricParameterizeOptions : GESSAlgParameterizeOptions

@property unsigned int targetNumOfCharts;
@property float maximumStretchRatio;
@property BOOL enableParallel;
@property BOOL skipInitialStretchOptimization;
@property unsigned int optimizeBoundaryIfFaceNumberLessThan;
@property BOOL repairUVSelfIntersection;

- (id)init;

@end

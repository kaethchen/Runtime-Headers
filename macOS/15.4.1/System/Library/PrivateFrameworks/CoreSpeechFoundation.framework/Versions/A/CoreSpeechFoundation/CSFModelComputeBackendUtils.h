@interface CSFModelComputeBackendUtils : NSObject

+ (id)_flattenArray:(id)a0;
+ (unsigned long long)_getElementSizeFromShape:(id)a0;
+ (id)compileWithMilFile:(id)a0 bnnsIrPath:(id)a1;
+ (id)compileWithMilFile:(id)a0 bnnsIrPath:(id)a1 separateWeight:(id)a2;
+ (long long)getRankOfTensor:(id)a0;
+ (id)getShapeWithTensors:(id)a0;

@end

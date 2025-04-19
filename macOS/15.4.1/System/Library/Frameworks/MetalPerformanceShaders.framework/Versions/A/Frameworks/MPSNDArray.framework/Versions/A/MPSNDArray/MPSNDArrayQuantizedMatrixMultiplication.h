@class MPSNDArrayLUTGEMV;

@interface MPSNDArrayQuantizedMatrixMultiplication : MPSNDArrayMatrixMultiplication {
    MPSNDArrayLUTGEMV *_lutGEMVKernel;
}

+ (long long)getDQuantMinValIndexWithLeftQuantizationDescriptor:(id)a0 rightQuantizationDescriptor:(id)a1 isForLeft:(BOOL)a2;
+ (long long)getDQuantScaleIndexWithLeftQuantizationDescriptor:(id)a0 rightQuantizationDescriptor:(id)a1 isForLeft:(BOOL)a2;
+ (long long)getLUTIndexWithLeftQuantizationDescriptor:(id)a0 rightQuantizationDescriptor:(id)a1 isForLeft:(BOOL)a2;
+ (long long)getLeftDQuantMinValIndexWithLeftAffineQuantizationDescriptor:(id)a0 rightQuantizationDescriptor:(id)a1;
+ (long long)getLeftDQuantScaleIndexWithLeftAffineQuantizationDescriptor:(id)a0 rightQuantizationDescriptor:(id)a1;
+ (long long)getLeftMinValIndexWithLeftAffineQuantizationDescriptor:(id)a0 rightQuantizationDescriptor:(id)a1;
+ (long long)getLeftScaleIndexWithLeftAffineQuantizationDescriptor:(id)a0 rightQuantizationDescriptor:(id)a1;
+ (long long)getLeftZeroPointIndexWithLeftAffineQuantizationDescriptor:(id)a0 rightQuantizationDescriptor:(id)a1;
+ (long long)getMinValIndexWithLeftQuantizationDescriptor:(id)a0 rightQuantizationDescriptor:(id)a1 isForLeft:(BOOL)a2;
+ (long long)getRightDQuantMinValIndexWithLeftAffineQuantizationDescriptor:(id)a0 rightQuantizationDescriptor:(id)a1;
+ (long long)getRightDQuantScaleIndexWithLeftAffineQuantizationDescriptor:(id)a0 rightQuantizationDescriptor:(id)a1;
+ (long long)getRightLUTIndexWithLeftLUTQuantizationDescriptor:(id)a0 rightQuantizationDescriptor:(id)a1;
+ (long long)getRightMinValIndexWithLeftAffineQuantizationDescriptor:(id)a0 rightQuantizationDescriptor:(id)a1;
+ (long long)getRightScaleIndexWithLeftAffineQuantizationDescriptor:(id)a0 rightQuantizationDescriptor:(id)a1;
+ (long long)getRightZeroPointIndexWithLeftAffineQuantizationDescriptor:(id)a0 rightQuantizationDescriptor:(id)a1;
+ (long long)getScaleIndexWithLeftQuantizationDescriptor:(id)a0 rightQuantizationDescriptor:(id)a1 isForLeft:(BOOL)a2;
+ (long long)getZeroPointIndexWithLeftQuantizationDescriptor:(id)a0 rightQuantizationDescriptor:(id)a1 isForLeft:(BOOL)a2;
+ (BOOL)supportsDestinationQuantizationWithDescriptor:(id)a0 device:(void *)a1;
+ (BOOL)supportsSourceQuantizationWithDescriptor:(id)a0 atIndex:(unsigned long long)a1 device:(void *)a2;

- (void)dealloc;
- (id)encodePreProcessingToCommandEncoder:(id)a0 commandBuffer:(id)a1 sourceArrays:(id)a2 destinationArray:(id *)a3 kernelDAGObject:(id *)a4;
- (id)initWithDevice:(id)a0 leftQuantizationDescriptor:(id)a1 rightQuantizationDescriptor:(id)a2;
- (id)initWithDevice:(id)a0 leftQuantizationDescriptor:(id)a1 rightQuantizationDescriptor:(id)a2 sourceCount:(unsigned long long)a3;
- (unsigned long long)kernelDimensionalityForSourceArrays:(id)a0;
- (unsigned long long)kernelDimensionalityForSourceArrays:(id)a0 destinationArrays:(id)a1 kernelDAGObject:(id)a2;
- (id)workloadStatisticsForSourceArrays:(id)a0 destArrays:(id)a1 kernel:(id)a2 kernelDAGObject:(id)a3 sourceState:(id)a4;

@end

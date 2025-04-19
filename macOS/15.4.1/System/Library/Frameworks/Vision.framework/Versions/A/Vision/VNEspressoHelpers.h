@interface VNEspressoHelpers : NSObject

+ (int)espressoEngineForComputeDevice:(id)a0;
+ (id)JSONDataFromNetworkFilePath:(id)a0 error:(id *)a1;
+ (id)_alternatePathForEspressoResource:(id)a0 ofType:(id)a1 error:(id *)a2;
+ (id)_locateFrameworkBundleForResourceWithName:(id)a0 resourceDirectory:(id *)a1 error:(id *)a2;
+ (struct __CVBuffer { } *)createCVPixelBufferWithPixelFormat:(unsigned int)a0 fromImageInEspressoBuffer:(const struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)a1 error:(id *)a2;
+ (BOOL)createSingleNetworkPlanFromModelPath:(id)a0 forComputeDevice:(id)a1 lowPriorityMode:(BOOL)a2 priority:(int)a3 inputBlobNames:(id)a4 outputBlobNames:(id)a5 networkConfiguration:(id)a6 explicitNetworkLayersStorageType:(int)a7 memoryPoolId:(unsigned long long)a8 espressoResources:(id *)a9 error:(id *)a10;
+ (BOOL)createSingleNetworkPlanFromModelPath:(id)a0 forComputeDevice:(id)a1 lowPriorityMode:(BOOL)a2 priority:(int)a3 inputBlobNames:(id)a4 outputBlobNames:(id)a5 networkConfiguration:(id)a6 memoryPoolId:(unsigned long long)a7 espressoResources:(id *)a8 error:(id *)a9;
+ (int)espressoDeviceIDForComputeDevice:(id)a0;
+ (int)espressoStorageTypeForComputeDevice:(id)a0;
+ (BOOL)feedForwardEspressoBufferForNetwork:(struct { void *x0; int x1; } *)a0 fromBufferWithName:(id)a1 toBufferWithName:(id)a2 firstFrame:(BOOL)a3 error:(id *)a4;
+ (BOOL)getWidth:(unsigned long long *)a0 height:(unsigned long long *)a1 ofBlobNamed:(id)a2 forNetworkModelFileWithPath:(id)a3 error:(id *)a4;
+ (id)pathForEspressoNetworkModelFileWithName:(id)a0 error:(id *)a1;
+ (id)pathForEspressoResource:(id)a0 ofType:(id)a1 error:(id *)a2;
+ (id)pathForEspressoResourceWithFilename:(id)a0 error:(id *)a1;
+ (unsigned long long)pixelValueSizeInBytesForBuffer:(const struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)a0 error:(id *)a1;
+ (BOOL)renderEspressoBufferImage:(const struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)a0 intoCVPixelBuffer:(struct __CVBuffer { } *)a1 error:(id *)a2;
+ (id)weightsFilePathForEspressoNetworkModelFilePath:(id)a0 error:(id *)a1;

@end

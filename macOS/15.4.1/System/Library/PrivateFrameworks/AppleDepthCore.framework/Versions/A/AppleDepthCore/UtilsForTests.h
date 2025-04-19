@interface UtilsForTests : NSObject

+ (struct BaselineTestStats_s { float x0; float x1; float x2; float x3; })compareBuffer:(struct __CVBuffer { } *)a0 offset:(struct CGSize { double x0; double x1; })a1 toRefBuffer:(struct __CVBuffer { } *)a2 ignoreRefZeros:(BOOL)a3;
+ (struct BaselineTestStats_s { float x0; float x1; float x2; float x3; })compareBuffer:(struct __CVBuffer { } *)a0 offset:(struct CGSize { double x0; double x1; })a1 toRefBuffer:(struct __CVBuffer { } *)a2 ignoreResultZeros:(BOOL)a3 ignoreRefZeros:(BOOL)a4 outlierPercentile:(float)a5;
+ (struct BaselineTestStats_s { float x0; float x1; float x2; float x3; })compareBuffer:(struct __CVBuffer { } *)a0 toRefBuffer:(struct __CVBuffer { } *)a1 ignoreRefZeros:(BOOL)a2;
+ (struct BaselineTestStats_s { float x0; float x1; float x2; float x3; })compareBuffer:(struct __CVBuffer { } *)a0 toRefBuffer:(struct __CVBuffer { } *)a1 ignoreRefZeros:(BOOL)a2 outlierPercentile:(float)a3;
+ (struct BaselineTestStats_s { float x0; float x1; float x2; float x3; })compareBuffer:(struct __CVBuffer { } *)a0 toRefBuffer:(struct __CVBuffer { } *)a1 ignoreResultZeros:(BOOL)a2 ignoreRefZeros:(BOOL)a3;
+ (struct BaselineTestStats_s { float x0; float x1; float x2; float x3; })compareResults:(struct __CVBuffer { } *)a0 toBaseLineInPath:(id)a1 ignoreRefZeros:(BOOL)a2;
+ (struct BaselineTestStats_s { float x0; float x1; float x2; float x3; })compareResults:(struct __CVBuffer { } *)a0 toBaseLineInPath:(id)a1 ignoreRefZeros:(BOOL)a2 outlierPercentile:(float)a3;
+ (struct BaselineTestStats_s { float x0; float x1; float x2; float x3; })compareVImageBuffer:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0 pixelTypeResult:(unsigned int)a1 offset:(struct CGSize { double x0; double x1; })a2 toRefBuffer:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a3 pixelTypeRef:(unsigned int)a4 ignoreResultZeros:(BOOL)a5 ignoreRefZeros:(BOOL)a6 outlierPercentile:(float)a7;
+ (id)createJasperCameraCalibration;
+ (id)createSuperWideCameraCalibration;
+ (id)createSyntheticCameraCalibrationNilDistortion;
+ (id)createSyntheticCameraCalibrationWithDistortion:(id)a0;
+ (id)createSyntheticCameraCalibrationXThetaDistortion;
+ (id)createWideCameraCalibrationWithPolynomials;
+ (id)getJasperPointCloudFromPath:(id)a0;
+ (id)getNewTempFilePathWithExtension:(id)a0;
+ (id)getTempDirPath;
+ (id)pointsArrayFromFilePath:(id)a0;
+ (struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; })pointsVectorFromFilePath:(id)a0;
+ (unsigned long long)preferredEspressoEngine;

@end

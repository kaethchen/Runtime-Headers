@class CIImage, CIVector, NSNumber;

@interface CIMirror : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputPoint;
@property (retain, nonatomic) NSNumber *inputAngle;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernel;
- (struct Rectangle { double x0; double x1; double x2; double x3; })computeDOD:(struct vec2 { })a0 tst:(struct vec3 { })a1 off:(struct vec4 { })a2 mtx:(struct vec4 { })a3;

@end

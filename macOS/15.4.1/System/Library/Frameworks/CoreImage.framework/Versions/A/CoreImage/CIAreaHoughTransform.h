@class CIImage, CIVector, NSNumber;

@interface CIAreaHoughTransform : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputExtent;
@property (retain, nonatomic) NSNumber *inputGradientMin;
@property (retain, nonatomic) NSNumber *inputGradientMax;

+ (id)customAttributes;

- (id)outputImage;
- (BOOL)_inputsAreOK;
- (struct IRect { struct IPoint { int x0; int x1; } x0; struct ISize { unsigned long long x0; unsigned long long x1; } x1; })_netExtent;

@end

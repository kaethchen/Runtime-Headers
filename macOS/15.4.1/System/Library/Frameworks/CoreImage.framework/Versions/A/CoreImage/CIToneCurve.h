@class CIImage, CIVector, NSNumber;

@interface CIToneCurve : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (copy, nonatomic) CIVector *inputPoint0;
@property (copy, nonatomic) CIVector *inputPoint1;
@property (copy, nonatomic) CIVector *inputPoint2;
@property (copy, nonatomic) CIVector *inputPoint3;
@property (copy, nonatomic) CIVector *inputPoint4;
@property (copy, nonatomic) NSNumber *inputExtrapolate;

+ (id)customAttributes;

- (id)outputImage;
- (BOOL)_isIdentity;

@end

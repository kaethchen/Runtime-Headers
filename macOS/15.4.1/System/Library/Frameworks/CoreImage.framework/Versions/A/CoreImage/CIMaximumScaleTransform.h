@class CIImage, NSNumber;

@interface CIMaximumScaleTransform : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputScale;
@property (retain, nonatomic) NSNumber *inputAspectRatio;

+ (id)customAttributes;

- (id)outputImage;
- (BOOL)_isIdentity;

@end

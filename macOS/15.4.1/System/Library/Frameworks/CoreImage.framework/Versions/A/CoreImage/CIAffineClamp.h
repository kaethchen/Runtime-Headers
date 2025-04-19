@class CIImage, NSAffineTransform;

@interface CIAffineClamp : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSAffineTransform *inputTransform;

+ (id)customAttributes;

- (id)outputImage;

@end

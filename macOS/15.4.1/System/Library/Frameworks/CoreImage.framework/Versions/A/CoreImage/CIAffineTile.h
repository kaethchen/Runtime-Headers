@class CIImage, NSAffineTransform;

@interface CIAffineTile : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSAffineTransform *inputTransform;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernel;

@end

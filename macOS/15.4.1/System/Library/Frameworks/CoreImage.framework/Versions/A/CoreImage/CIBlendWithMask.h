@class CIImage;

@interface CIBlendWithMask : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputBackgroundImage;
@property (retain, nonatomic) CIImage *inputMaskImage;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernel;
- (id)_kernelB0;
- (float)_maskFillColorValue;

@end

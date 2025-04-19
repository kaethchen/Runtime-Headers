@class CIImage, NSNumber;

@interface NUHDRMultiplyGainMapFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputGainMap;
@property (retain, nonatomic) NSNumber *inputPreserveColor;
@property (retain, nonatomic) NSNumber *inputMixFactor;

+ (id)gainMapLogMultiplyKernel;
+ (id)gainMapLogMultiplyRGBKernel;
+ (id)gainMapMultiplyKernel;
+ (id)gainMapMultiplyRGBKernel;

- (void).cxx_destruct;
- (id)outputImage;

@end

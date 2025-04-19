@class CIImage, NSNumber;

@interface DGBrightnessContrastFilter : CIFilter {
    CIImage *inputImage;
    NSNumber *inputContrast;
    NSNumber *inputBrightness;
    NSNumber *inputMean;
    NSNumber *inputClamp;
}

+ (void)initialize;
+ (id)filterWithName:(id)a0;

- (id)outputImage;
- (id)customAttributes;

@end

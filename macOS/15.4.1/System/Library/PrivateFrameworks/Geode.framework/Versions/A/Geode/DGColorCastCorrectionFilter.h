@class CIImage, NSNumber;

@interface DGColorCastCorrectionFilter : CIFilter {
    CIImage *inputImage;
    NSNumber *inputBlackUOffset;
    NSNumber *inputBlackVOffset;
    NSNumber *inputGrayBrightness;
    NSNumber *inputGrayUOffset;
    NSNumber *inputGrayVOffset;
    NSNumber *inputWhiteUOffset;
    NSNumber *inputWhiteVOffset;
}

+ (void)initialize;
+ (id)filterWithName:(id)a0;

- (id)outputImage;
- (id)customAttributes;

@end

@class CIImage, NSNumber;

@interface DGShadowHighlightFilter : CIFilter {
    CIImage *inputImage;
    NSNumber *inputShadowAmount;
    NSNumber *inputShadowTonalWidth;
    NSNumber *inputRadius;
    NSNumber *inputHighlightAmount;
    NSNumber *inputHighlightTonalWidth;
    NSNumber *inputColorCorrection;
    NSNumber *inputMidtoneContrast;
    NSNumber *inputVersion;
}

+ (void)initialize;
+ (id)filterWithName:(id)a0;

- (id)outputImage;
- (void)setDefaults;
- (id)customAttributes;

@end

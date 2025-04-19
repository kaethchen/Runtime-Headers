@class CIImage, NSNumber;

@interface DGiPhotoShadowHighlight : CIFilter {
    CIImage *inputImage;
    NSNumber *inputShadowAmount;
    NSNumber *inputShadowTonalWidth;
    NSNumber *inputRadius;
    NSNumber *inputHighlightAmount;
    NSNumber *inputHighlightTonalWidth;
    NSNumber *inputColorCorrection;
    NSNumber *inputMidtoneContrast;
    NSNumber *inputBlackClip;
    NSNumber *inputWhiteClip;
}

+ (void)initialize;
+ (id)filterWithName:(id)a0;

- (id)outputImage;
- (void)setDefaults;
- (id)customAttributes;

@end

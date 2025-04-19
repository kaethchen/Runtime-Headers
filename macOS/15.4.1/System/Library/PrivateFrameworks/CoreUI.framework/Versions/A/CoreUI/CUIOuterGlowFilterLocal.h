@class CIVector, CIColor, CIImage, NSNumber;

@interface CUIOuterGlowFilterLocal : CIFilter {
    CIImage *inputImage;
    CIVector *inputOffset;
    NSNumber *inputRange;
    NSNumber *inputRadius;
    CIColor *inputColor;
}

+ (id)filterWithName:(id)a0;

- (id)outputImage;
- (id)customAttributes;

@end

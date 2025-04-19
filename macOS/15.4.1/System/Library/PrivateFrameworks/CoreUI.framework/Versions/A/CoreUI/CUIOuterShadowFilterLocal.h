@class CIVector, CIColor, CIImage, NSNumber;

@interface CUIOuterShadowFilterLocal : CIFilter {
    CIImage *inputImage;
    CIVector *inputOffset;
    NSNumber *inputRadius;
    CIColor *inputColor;
}

+ (id)filterWithName:(id)a0;

- (id)outputImage;
- (id)customAttributes;

@end

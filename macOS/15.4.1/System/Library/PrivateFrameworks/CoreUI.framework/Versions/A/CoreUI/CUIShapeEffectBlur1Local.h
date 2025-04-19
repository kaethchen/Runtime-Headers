@class CIVector, CIColor, CIImage, NSNumber;

@interface CUIShapeEffectBlur1Local : CIFilter {
    CIImage *inputImage;
    CIImage *inputFill;
    CIVector *inputOffset;
    NSNumber *inputRadius;
    CIColor *inputGlowColorInner;
    CIColor *inputGlowColorOuter;
    CIColor *inputShadowColorInner;
    CIColor *inputShadowColorOuter;
    NSNumber *inputShadowBlurInner;
    NSNumber *inputShadowBlurOuter;
}

+ (id)filterWithName:(id)a0;

- (id)outputImage;
- (id)customAttributes;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })regionOf:(int)a0 destRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 userInfo:(id)a2;

@end

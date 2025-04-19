@class CIImage, NSNumber;

@interface DGFastHighShadFilter : CIFilter {
    CIImage *inputImage;
    NSNumber *inputHighlightAmount;
    NSNumber *inputShadowAmount;
    NSNumber *inputRadius;
}

+ (void)initialize;
+ (id)filterWithName:(id)a0;

- (id)outputImage;
- (void)setDefaults;
- (id)customAttributes;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })expandByOneROI:(long long)a0 destRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end

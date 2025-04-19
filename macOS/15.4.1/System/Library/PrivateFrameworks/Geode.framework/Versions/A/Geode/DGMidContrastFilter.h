@class CIImage, NSNumber;

@interface DGMidContrastFilter : CIFilter {
    CIImage *inputImage;
    NSNumber *inputAmount;
    NSNumber *inputWidth;
    NSNumber *inputValue;
}

+ (void)initialize;
+ (id)filterWithName:(id)a0;

- (id)outputImage;
- (id)customAttributes;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })expandByOneROI:(long long)a0 destRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end

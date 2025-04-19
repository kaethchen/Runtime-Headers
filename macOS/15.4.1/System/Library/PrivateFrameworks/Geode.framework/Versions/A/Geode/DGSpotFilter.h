@class CIImage, NSArray;

@interface DGSpotFilter : CIFilter {
    CIImage *inputImage;
    NSArray *inputSpots;
}

+ (void)initialize;
+ (id)filterWithName:(id)a0;

- (id)outputImage;
- (id)customAttributes;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })regionOf:(long long)a0 destRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 userInfo:(id)a2;
- (id)_srcBlurForImage:(id)a0 srcBlurAmt:(id)a1;

@end

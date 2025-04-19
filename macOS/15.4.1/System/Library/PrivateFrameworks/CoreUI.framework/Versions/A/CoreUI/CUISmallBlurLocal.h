@class CIImage;

@interface CUISmallBlurLocal : CIFilter {
    CIImage *inputImage;
}

+ (id)filterWithName:(id)a0;

- (id)outputImage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })regionOf:(int)a0 destRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 userInfo:(id)a2;

@end

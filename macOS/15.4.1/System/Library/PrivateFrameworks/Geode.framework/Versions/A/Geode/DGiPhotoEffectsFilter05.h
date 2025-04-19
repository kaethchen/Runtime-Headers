@class CIImage, NSNumber;

@interface DGiPhotoEffectsFilter05 : CIFilter {
    CIImage *inputImage;
    NSNumber *inputIntensity;
    NSNumber *inputW;
    NSNumber *inputH;
    CIImage *inputWts;
    NSNumber *inputVariant;
    CIImage *mImage[35];
}

+ (void)initialize;

- (id)outputImage;
- (id)customAttributes;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })regionOf:(int)a0 destRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 userInfo:(id)a2;

@end

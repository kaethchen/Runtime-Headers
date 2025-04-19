@class CIImage, NSNumber;

@interface DGBilateralSliceConvolution : CIFilter {
    CIImage *inputImage;
    NSNumber *inputRadius;
    NSNumber *inputEdgeDetail;
}

+ (void)initialize;
+ (id)filterWithName:(id)a0;

- (id)outputImage;
- (id)customAttributes;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scaleRegionOf:(long long)a0 destRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 userInfo:(id)a2;

@end

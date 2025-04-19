@class CIImage, NSData, NSNumber;

@interface DGCurvesFilter : CIFilter {
    CIImage *inputImage;
    NSData *inputRGBData;
    NSData *inputRedData;
    NSData *inputGreenData;
    NSData *inputBlueData;
    NSNumber *inputGrayChoice;
}

+ (void)initialize;
+ (id)filterWithName:(id)a0;

- (id)outputImage;
- (id)makeSamplerFromCurveData;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })regionOf:(long long)a0 destRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end

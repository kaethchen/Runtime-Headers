@class CIImage, NSNumber;

@interface DGBurnFilter : CIFilter {
    CIImage *inputImage;
    CIImage *inputMaskImage;
    NSNumber *inputExposure;
}

+ (void)initialize;
+ (id)filterWithName:(id)a0;

- (id)outputImage;
- (id)customAttributes;

@end

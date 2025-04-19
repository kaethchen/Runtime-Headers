@class CIImage, NSNumber;

@interface DGBiasFilter : CIFilter {
    CIImage *inputImage;
    NSNumber *inputBias;
    NSNumber *inputBiasGamutMap;
}

+ (void)initialize;
+ (id)filterWithName:(id)a0;

- (id)outputImage;
- (id)customAttributes;

@end

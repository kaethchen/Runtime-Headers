@class CIImage, NSNumber, NSValue;

@interface DGVignetteFilter : CIFilter {
    CIImage *inputImage;
    NSNumber *inputRadius;
    NSNumber *inputIntensity;
    NSNumber *inputType;
    NSValue *inputExtent;
}

+ (void)initialize;
+ (id)filterWithName:(id)a0;

- (id)outputImage;
- (id)customAttributes;

@end

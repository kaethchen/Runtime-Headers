@class CIImage, NSNumber;

@interface DGDefinitionFilter : CIFilter {
    CIImage *inputImage;
    NSNumber *inputRadius;
    NSNumber *inputIntensity;
    NSNumber *inputClampv0;
    NSNumber *inputDefinitionKernelv0;
}

+ (void)initialize;
+ (id)filterWithName:(id)a0;

- (id)outputImage;
- (id)customAttributes;

@end

@class CIImage, NSValue, NSNumber;

@interface DGPatchFilter : CIFilter {
    CIImage *inputImage;
    NSValue *inputCenter;
    NSNumber *inputRadius;
    NSValue *inputPatch;
    NSNumber *inputOpacity;
    NSNumber *inputSoftness;
    NSNumber *inputAngle;
    NSNumber *inputDetail;
}

+ (void)initialize;
+ (id)filterWithName:(id)a0;

- (id)outputImage;
- (id)customAttributes;

@end

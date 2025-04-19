@class CIImage, NSNumber;

@interface IKThresholdCorrection : CIFilter {
    CIImage *inputImage;
    NSNumber *inputPower;
}

+ (id)filterWithName:(id)a0;
+ (void)registerFilter;

- (id)init;
- (id)outputImage;
- (id)customAttributes;
- (BOOL)_isIdentity;

@end

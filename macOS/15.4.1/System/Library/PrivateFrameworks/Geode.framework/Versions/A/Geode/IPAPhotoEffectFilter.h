@class CIImage, NSNumber;

@interface IPAPhotoEffectFilter : CIFilter {
    CIImage *inputImage;
    NSNumber *inputEffectNumber;
    NSNumber *inputEffectVersion;
}

+ (void)initialize;
+ (id)filterWithName:(id)a0;

- (void).cxx_destruct;
- (id)outputImage;
- (id)customAttributes;
- (BOOL)_isValidEffectVersion:(int)a0;

@end

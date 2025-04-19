@class CIImage, NSNumber;

@interface DGiPhotoColorCorrection : CIFilter {
    CIImage *inputImage;
    NSNumber *inputPower;
}

+ (void)initialize;

- (id)outputImage;
- (id)customAttributes;

@end

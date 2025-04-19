@class CIImage, NSNumber;

@interface DGiPhotoLighting : CIFilter {
    CIImage *inputImage;
    NSNumber *inputPower;
    NSNumber *inputAlgorithm;
}

+ (void)initialize;

- (id)outputImage;
- (id)customAttributes;

@end

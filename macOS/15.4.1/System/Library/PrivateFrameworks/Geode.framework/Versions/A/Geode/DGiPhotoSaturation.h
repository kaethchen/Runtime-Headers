@class CIImage, NSNumber;

@interface DGiPhotoSaturation : CIFilter {
    CIImage *inputImage;
    NSNumber *inputSaturation;
    NSNumber *inputAlgorithm;
}

+ (void)initialize;

- (id)outputImage;
- (id)customAttributes;

@end

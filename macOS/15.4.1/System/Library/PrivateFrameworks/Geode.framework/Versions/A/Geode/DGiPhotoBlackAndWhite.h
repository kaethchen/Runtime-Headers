@class CIImage, NSNumber;

@interface DGiPhotoBlackAndWhite : CIFilter {
    CIImage *inputImage;
    NSNumber *inputIntensity;
}

+ (void)initialize;

- (id)outputImage;
- (id)customAttributes;

@end

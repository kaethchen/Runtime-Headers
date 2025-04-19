@class CIImage, NSNumber;

@interface DGiPhotoSepia : CIFilter {
    CIImage *inputImage;
    NSNumber *inputIntensity;
}

+ (void)initialize;

- (id)outputImage;
- (id)customAttributes;

@end

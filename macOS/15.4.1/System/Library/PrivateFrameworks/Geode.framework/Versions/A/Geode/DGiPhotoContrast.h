@class CIImage, NSNumber;

@interface DGiPhotoContrast : CIFilter {
    CIImage *inputImage;
    NSNumber *inputContrast;
}

+ (void)initialize;

- (id)outputImage;
- (id)customAttributes;

@end

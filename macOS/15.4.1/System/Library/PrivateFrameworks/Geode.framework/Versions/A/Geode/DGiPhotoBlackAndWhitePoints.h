@class CIImage, NSNumber;

@interface DGiPhotoBlackAndWhitePoints : CIFilter {
    CIImage *inputImage;
    NSNumber *inputBlack;
    NSNumber *inputWhite;
}

+ (void)initialize;

- (id)outputImage;
- (id)customAttributes;

@end

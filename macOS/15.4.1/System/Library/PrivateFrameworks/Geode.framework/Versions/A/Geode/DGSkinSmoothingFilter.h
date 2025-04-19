@class CIImage, NSNumber;

@interface DGSkinSmoothingFilter : CIFilter {
    CIImage *inputImage;
    NSNumber *inputRadius;
    NSNumber *inputEdgeDetail;
    NSNumber *inputIntensity;
    NSNumber *inputVersion;
}

+ (void)initialize;
+ (id)filterWithName:(id)a0;

- (id)outputImage;
- (id)customAttributes;

@end

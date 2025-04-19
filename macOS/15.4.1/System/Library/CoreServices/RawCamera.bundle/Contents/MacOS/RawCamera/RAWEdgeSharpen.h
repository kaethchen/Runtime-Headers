@class CIImage, NSNumber;

@interface RAWEdgeSharpen : RAWFilter {
    CIImage *inputImage;
    id inputColorSpace;
    NSNumber *inputPreSharpenAmount;
    NSNumber *inputPreSharpenBlurAmount;
    NSNumber *inputVersion;
}

+ (id)customAttributes;

- (void).cxx_destruct;
- (id)outputImage;
- (id)customAttributes;

@end

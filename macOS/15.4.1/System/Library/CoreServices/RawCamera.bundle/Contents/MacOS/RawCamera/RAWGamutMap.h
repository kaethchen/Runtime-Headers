@class CIImage, NSNumber;

@interface RAWGamutMap : RAWFilter {
    CIImage *inputImage;
    id inputColorSpace;
    NSNumber *inputShouldWarn;
    NSNumber *inputVersion;
    NSNumber *inputGamutMapMax;
}

+ (id)customAttributes;

- (void).cxx_destruct;
- (id)outputImage;
- (id)customAttributes;

@end

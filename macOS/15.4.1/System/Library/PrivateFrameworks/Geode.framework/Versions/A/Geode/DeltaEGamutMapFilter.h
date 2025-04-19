@class CIImage, NSNumber;

@interface DeltaEGamutMapFilter : CIFilter {
    CIImage *inputImage;
    id inputColorSpace;
    NSNumber *inputShouldWarn;
}

- (id)outputImage;
- (id)customAttributes;
- (id)kernelToRun:(long long)a0;

@end

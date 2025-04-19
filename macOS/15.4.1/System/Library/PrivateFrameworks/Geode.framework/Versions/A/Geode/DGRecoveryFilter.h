@class CIImage, NSNumber;

@interface DGRecoveryFilter : CIFilter {
    CIImage *inputImage;
    id inputColorSpace;
    NSNumber *inputRecoveryEV;
    NSNumber *inputRecoveryBreakpoint;
}

+ (void)initialize;
+ (id)filterWithName:(id)a0;

- (id)outputImage;
- (id)customAttributes;

@end

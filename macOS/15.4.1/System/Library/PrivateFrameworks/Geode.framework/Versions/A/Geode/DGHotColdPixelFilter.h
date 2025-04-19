@class CIImage, NSNumber;

@interface DGHotColdPixelFilter : CIFilter {
    CIImage *inputImage;
    NSNumber *inputOverlayType;
    NSNumber *inputShowHotAndCold;
    NSNumber *inputHotThreshold;
    NSNumber *inputColdThreshold;
    id inputColorSpace;
}

+ (void)initialize;
+ (id)filterWithName:(id)a0;

- (id)outputImage;
- (id)customAttributes;

@end

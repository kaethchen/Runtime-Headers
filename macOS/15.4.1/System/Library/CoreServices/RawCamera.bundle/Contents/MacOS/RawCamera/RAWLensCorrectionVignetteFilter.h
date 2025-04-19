@class CIImage, NSData, NSNumber;

@interface RAWLensCorrectionVignetteFilter : RAWFilter {
    CIImage *inputImage;
    NSData *inputVignetteTable;
    NSNumber *inputVignetteAmount;
    id inputColorSpace;
    CIImage *vigImg;
}

+ (id)customAttributes;

- (void).cxx_destruct;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)outputImage;
- (id)customAttributes;
- (BOOL)makeMapImages;

@end

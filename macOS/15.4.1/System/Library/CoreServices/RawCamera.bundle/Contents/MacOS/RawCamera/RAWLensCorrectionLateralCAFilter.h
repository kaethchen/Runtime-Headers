@class CIImage, NSNumber, NSData;

@interface RAWLensCorrectionLateralCAFilter : RAWFilter {
    CIImage *inputImage;
    NSNumber *inputLateralCAAmount;
    NSData *inputLateralCAMap;
    NSNumber *inputLateralCAMapWidth;
    NSNumber *inputLateralCAMapHeight;
    id inputColorSpace;
    CIImage *mapImg;
}

+ (id)customAttributes;

- (void).cxx_destruct;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)outputImage;
- (id)customAttributes;
- (BOOL)makeMapImages;

@end

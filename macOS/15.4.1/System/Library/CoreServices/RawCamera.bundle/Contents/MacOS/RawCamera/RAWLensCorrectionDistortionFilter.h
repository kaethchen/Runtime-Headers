@class CIImage, NSNumber, NSData;

@interface RAWLensCorrectionDistortionFilter : RAWFilter {
    CIImage *inputImage;
    NSNumber *inputDistortionAmount;
    NSData *inputDistortionMap;
    NSNumber *inputDistortionMapWidth;
    NSNumber *inputDistortionMapHeight;
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

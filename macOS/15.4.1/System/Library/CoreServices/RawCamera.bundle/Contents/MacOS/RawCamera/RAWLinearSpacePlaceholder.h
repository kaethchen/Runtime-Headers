@class CIImage;

@interface RAWLinearSpacePlaceholder : RAWFilter {
    CIImage *inputImage;
    id inputColorSpace;
}

+ (id)customAttributes;

- (void).cxx_destruct;
- (id)outputImage;
- (id)customAttributes;

@end

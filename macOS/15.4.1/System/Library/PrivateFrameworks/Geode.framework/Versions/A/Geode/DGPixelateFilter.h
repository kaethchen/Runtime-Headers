@class CIImage;

@interface DGPixelateFilter : CIFilter {
    CIImage *inputImage;
}

+ (void)initialize;
+ (id)filterWithName:(id)a0;

- (id)outputImage;
- (id)customAttributes;

@end

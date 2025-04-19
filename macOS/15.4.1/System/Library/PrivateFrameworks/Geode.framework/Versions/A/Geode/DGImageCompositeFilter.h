@class CIImage, NSNumber;

@interface DGImageCompositeFilter : CIFilter {
    CIImage *inputImage;
    NSNumber *inputOpacity;
    CIImage *inputBackgroundImage;
}

+ (void)initialize;
+ (id)filterWithName:(id)a0;

- (id)outputImage;
- (id)customAttributes;

@end

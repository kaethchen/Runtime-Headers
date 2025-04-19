@class CIImage;

@interface DGDefringeFilter : CIFilter {
    CIImage *inputImage;
}

+ (void)initialize;
+ (id)filterWithName:(id)a0;

- (id)outputImage;
- (id)customAttributes;

@end

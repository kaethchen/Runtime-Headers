@class CIImage;

@interface CILumaMap : CIFilter {
    CIImage *_tableImage;
}

@property (retain, nonatomic) CIImage *inputImage;

+ (id)customAttributes;

- (void)dealloc;
- (id)outputImage;
- (void)setDefaults;
- (id)_kernel;
- (const char *)lumaTable;

@end

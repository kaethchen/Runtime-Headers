@class CIImage, NSNumber;

@interface CUIScaleClampFilterLocal : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputScale;

+ (id)filterWithName:(id)a0;
+ (id)customAttributes;

- (void)dealloc;
- (id)outputImage;
- (void)setDefaults;
- (id)_kernel;

@end

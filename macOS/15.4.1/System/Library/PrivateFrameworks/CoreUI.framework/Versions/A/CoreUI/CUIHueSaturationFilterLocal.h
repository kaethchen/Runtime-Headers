@class CIImage, NSNumber, CIColor;

@interface CUIHueSaturationFilterLocal : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (copy, nonatomic) NSNumber *inputCenterAngle;
@property (copy, nonatomic) NSNumber *inputAngleWidth;
@property (copy, nonatomic) CIColor *inputTintColor;

+ (id)filterWithName:(id)a0;
+ (id)customAttributes;

- (void)dealloc;
- (id)outputImage;
- (void)setDefaults;
- (id)_kernel;
- (struct CGColor { } *)_newColorByProcessingColor:(struct CGColor { } *)a0;

@end

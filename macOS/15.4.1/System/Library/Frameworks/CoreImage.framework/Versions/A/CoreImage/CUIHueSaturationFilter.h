@class CIImage, NSNumber, CIColor;

@interface CUIHueSaturationFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (copy, nonatomic) NSNumber *inputCenterAngle;
@property (copy, nonatomic) NSNumber *inputAngleWidth;
@property (copy, nonatomic) CIColor *inputTintColor;

+ (id)customAttributes;

- (id)outputImage;
- (struct CGColor { } *)_newColorByProcessingColor:(struct CGColor { } *)a0;
- (float)angleWidthDegrees;
- (float)centerAngleDegrees;
- (struct HSV { float x0; float x1; float x2; })tintColorToHSV;

@end

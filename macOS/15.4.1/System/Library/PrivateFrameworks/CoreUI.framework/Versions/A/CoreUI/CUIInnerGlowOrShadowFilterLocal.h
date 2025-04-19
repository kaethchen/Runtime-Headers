@class CIVector, CIColor, CIImage, NSNumber;

@interface CUIInnerGlowOrShadowFilterLocal : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputOffset;
@property (retain, nonatomic) NSNumber *inputRange;
@property (retain, nonatomic) NSNumber *inputRadius;
@property (retain, nonatomic) CIColor *inputColor;

+ (id)filterWithName:(id)a0;
+ (id)customAttributes;

- (void)dealloc;
- (id)outputImage;
- (void)setDefaults;
- (id)_kernel;

@end

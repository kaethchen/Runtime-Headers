@class CIVector, CIColor, CIImage, NSNumber;

@interface CUIOuterGlowOrShadowFilterLocal : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputOffset;
@property (retain, nonatomic) NSNumber *inputRange;
@property (retain, nonatomic) NSNumber *inputSize;
@property (retain, nonatomic) NSNumber *inputSpread;
@property (retain, nonatomic) CIColor *inputColor;

+ (id)filterWithName:(id)a0;
+ (id)customAttributes;

- (void)dealloc;
- (id)outputImage;
- (void)setDefaults;
- (id)_kernel;
- (id)_kernelWithImageMask;

@end

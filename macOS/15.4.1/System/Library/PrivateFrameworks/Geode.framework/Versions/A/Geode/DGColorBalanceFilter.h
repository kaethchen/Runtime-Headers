@class CIImage, NSNumber;

@interface DGColorBalanceFilter : CIFilter {
    CIImage *inputImage;
    NSNumber *inputGrayColorIComp;
    NSNumber *inputGrayColorQComp;
    NSNumber *inputGrayLum;
    NSNumber *inputStrength;
    NSNumber *inputWarmth;
    NSNumber *useProPhoto;
}

+ (void)initialize;
+ (id)filterWithName:(id)a0;

- (void)dealloc;
- (id)outputImage;
- (id)customAttributes;
- (id)applyInputConversion:(id)a0 withGamma:(double)a1 useProPhotoColor:(BOOL)a2;
- (id)applyOutputConversion:(id)a0 withGamma:(double)a1 useProPhotoColor:(BOOL)a2;
- (BOOL)isDefault:(id)a0;

@end

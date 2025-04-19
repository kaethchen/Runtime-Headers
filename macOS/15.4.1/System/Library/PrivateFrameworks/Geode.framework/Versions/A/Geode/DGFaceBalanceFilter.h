@class CIImage, NSNumber;

@interface DGFaceBalanceFilter : CIFilter {
    CIImage *inputImage;
    NSNumber *inputFaceColorIComp;
    NSNumber *inputFaceColorQComp;
    NSNumber *inputStrength;
    NSNumber *inputWarmth;
    NSNumber *useProPhoto;
}

+ (void)initialize;
+ (id)filterWithName:(id)a0;
+ (double)bestWarmthForI:(double)a0 q:(double)a1 percentChange:(double *)a2;

- (id)outputImage;
- (id)customAttributes;
- (id)applyInputConversion:(id)a0;
- (id)applyOutputConversion:(id)a0;
- (void)setWideGamutFaceColorFromSRGBY:(float)a0 I:(float)a1 Q:(float)a2;

@end

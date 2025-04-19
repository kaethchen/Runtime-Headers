@class IPAColorProfile, CIImage, NSNumber;

@interface DGLevelsFilter : CIFilter {
    CIImage *inputImage;
    NSNumber *inputBlackSrcRGB;
    NSNumber *inputBlackDstRGB;
    NSNumber *inputShadowSrcRGB;
    NSNumber *inputShadowDstRGB;
    NSNumber *inputMidSrcRGB;
    NSNumber *inputMidDstRGB;
    NSNumber *inputHilightSrcRGB;
    NSNumber *inputHilightDstRGB;
    NSNumber *inputWhiteSrcRGB;
    NSNumber *inputWhiteDstRGB;
    NSNumber *inputBlackSrcRed;
    NSNumber *inputBlackDstRed;
    NSNumber *inputShadowSrcRed;
    NSNumber *inputShadowDstRed;
    NSNumber *inputMidSrcRed;
    NSNumber *inputMidDstRed;
    NSNumber *inputHilightSrcRed;
    NSNumber *inputHilightDstRed;
    NSNumber *inputWhiteSrcRed;
    NSNumber *inputWhiteDstRed;
    NSNumber *inputBlackSrcGreen;
    NSNumber *inputBlackDstGreen;
    NSNumber *inputShadowSrcGreen;
    NSNumber *inputShadowDstGreen;
    NSNumber *inputMidSrcGreen;
    NSNumber *inputMidDstGreen;
    NSNumber *inputHilightSrcGreen;
    NSNumber *inputHilightDstGreen;
    NSNumber *inputWhiteSrcGreen;
    NSNumber *inputWhiteDstGreen;
    NSNumber *inputBlackSrcBlue;
    NSNumber *inputBlackDstBlue;
    NSNumber *inputShadowSrcBlue;
    NSNumber *inputShadowDstBlue;
    NSNumber *inputMidSrcBlue;
    NSNumber *inputMidDstBlue;
    NSNumber *inputHilightSrcBlue;
    NSNumber *inputHilightDstBlue;
    NSNumber *inputWhiteSrcBlue;
    NSNumber *inputWhiteDstBlue;
    NSNumber *inputMode;
}

@property (retain, nonatomic) IPAColorProfile *inputWorkingColorProfile;

+ (void)initialize;
+ (id)filterWithName:(id)a0;

- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)defaultValueForKey:(id)a0;
- (id)outputImage;
- (void)setDefaults;
- (id)customAttributes;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })regionOf:(long long)a0 destRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 userInfo:(id)a2;
- (double)floatValueForKey:(id)a0 defaultValue:(double)a1;
- (id)_customAttributesForKey:(id)a0;
- (double)floatValueForKey:(id)a0 defaultValue:(double)a1 clearIfNotDefault:(BOOL *)a2;
- (BOOL)_key:(id)a0 containsString:(id)a1;
- (id)outputImageiPhotoMode;

@end

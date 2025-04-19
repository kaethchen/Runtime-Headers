@class ISForegroundSegmentation, ISBiasedGrayscaleConversion;

@interface ISIconSegmentation : NSObject {
    ISForegroundSegmentation *_strictForegroundSegmentation;
    ISForegroundSegmentation *_looseForegroundSegmentation;
    ISBiasedGrayscaleConversion *_grayscaleConversion;
    int _maxNumberOfClusteringSamples;
}

@property (nonatomic) BOOL enableColorEnhancementInDarkImage;
@property (nonatomic) BOOL enableRecoloringSingleForegroundColorWithGradientBackgroundInDarkImage;

- (id)init;
- (void).cxx_destruct;
- (struct CGImage { } *)createTintableImageWithCGImage:(struct CGImage { } *)a0;
- (BOOL)_computeImageWithCGImage:(struct CGImage { } *)a0 ucharTintable:(char *)a1 ucharDark:(void *)a2 feedback:(id *)a3;
- (BOOL)_computeImageWithWidth:(int)a0 height:(int)a1 strict:(BOOL)a2 ucharSamplesAndForegroundMask:(void *)a3 ucharTintable:(char *)a4 ucharDark:(void *)a5 feedback:(id)a6;
- (BOOL)_computeImageWithWidth:(int)a0 height:(int)a1 ucharSamplesAndForegroundMask:(void *)a2 ucharTintable:(char *)a3 ucharDark:(void *)a4 feedback:(id *)a5;
- (struct CGImage { } *)createDarkImageWithCGImage:(struct CGImage { } *)a0;

@end

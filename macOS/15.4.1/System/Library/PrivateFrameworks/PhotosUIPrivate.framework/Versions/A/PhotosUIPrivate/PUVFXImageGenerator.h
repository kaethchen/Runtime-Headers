@class CIImage, NSNumber, CIFilter;

@interface PUVFXImageGenerator : CIFilter

@property (copy, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *generatedFieldImage;
@property (copy, nonatomic) CIFilter *gradientFilter;
@property (copy, nonatomic) NSNumber *particleSize;
@property (copy, nonatomic) NSNumber *innerParticleSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } extent;
@property (retain, nonatomic) CIFilter *gradientCompositingFilter;
@property (retain, nonatomic) CIFilter *backgroundCompositingFilter;
@property (nonatomic) double maxEDR;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)outputImage;
- (id)blendForeground:(id)a0 withBackground:(id)a1;
- (id)_outputImageWithForeground:(id)a0;
- (void)generateFieldWithColors:(id)a0 count:(unsigned long long)a1;
- (id)outputImages;

@end

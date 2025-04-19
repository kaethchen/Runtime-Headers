@class CIImage, NSAffineTransform;

@interface CIAffineTransform : CIFilter <_CIFilterProperties>

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSAffineTransform *inputTransform;

+ (id)customAttributes;

- (id)outputImage;
- (id)_initFromProperties:(id)a0;
- (id)_outputProperties;

@end

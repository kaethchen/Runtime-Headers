@class CIImage, NSNumber;

@interface PISmartColorFilterHDR : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputVibrancy;
@property (retain, nonatomic) NSNumber *inputContrast;
@property (retain, nonatomic) NSNumber *inputCast;

+ (id)customAttributes;

- (void).cxx_destruct;
- (id)outputImage;
- (BOOL)_isIdentity;
- (id)_kernelCNeg;
- (id)_kernelCPos;
- (id)_kernelCast;
- (id)_kernelV_gt1;
- (id)_kernelV_lt1;

@end

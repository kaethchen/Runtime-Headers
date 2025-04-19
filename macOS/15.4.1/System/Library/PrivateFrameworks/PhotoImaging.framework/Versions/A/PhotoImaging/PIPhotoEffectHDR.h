@class CIImage;

@interface PIPhotoEffectHDR : CIFilter

@property (readonly, nonatomic) BOOL isBlackAndWhite;
@property (retain) CIImage *inputImage;

+ (id)hdrOffsetBlackAndWhiteKernel;
+ (id)hdrOffsetColorKernel;

- (void).cxx_destruct;
- (id)outputImage;
- (id)hdrOffsetKernel;
- (id)photoEffectName;
- (void)configureFilter:(id)a0;

@end

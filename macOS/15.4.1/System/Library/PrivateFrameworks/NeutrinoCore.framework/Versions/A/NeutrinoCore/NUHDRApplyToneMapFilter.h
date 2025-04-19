@class CIImage, NSNumber, NUColorSpace;

@interface NUHDRApplyToneMapFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputSourceHeadroom;
@property (retain, nonatomic) NSNumber *inputTargetHeadroom;
@property (retain, nonatomic) NUColorSpace *inputColorSpace;

- (void).cxx_destruct;
- (id)outputImage;

@end

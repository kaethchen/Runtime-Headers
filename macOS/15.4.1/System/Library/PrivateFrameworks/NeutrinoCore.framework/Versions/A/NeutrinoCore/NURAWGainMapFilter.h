@class CIImage, NSNumber;

@interface NURAWGainMapFilter : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) NSNumber *inputGain;

+ (id)gainMapKernel;

- (void).cxx_destruct;
- (id)outputImage;

@end

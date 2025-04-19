@class CIImage, NSString, NSNumber;

@interface PIPhotoEffect3DFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputBlurMap;
@property (retain, nonatomic) NSString *inputKind;
@property (retain, nonatomic) NSNumber *inputIntensity;
@property (retain, nonatomic) NSNumber *inputIsHDR;

- (void).cxx_destruct;
- (id)outputImage;

@end

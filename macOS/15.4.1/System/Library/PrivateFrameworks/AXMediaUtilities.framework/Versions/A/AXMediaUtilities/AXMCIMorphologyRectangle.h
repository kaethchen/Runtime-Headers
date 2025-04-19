@class CIImage, NSNumber;

@interface AXMCIMorphologyRectangle : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputWidth;
@property (retain, nonatomic) NSNumber *inputHeight;

+ (id)customAttributes;

- (void).cxx_destruct;
- (id)outputImage;
- (BOOL)_doMinimum;
- (BOOL)_isIdentity;

@end

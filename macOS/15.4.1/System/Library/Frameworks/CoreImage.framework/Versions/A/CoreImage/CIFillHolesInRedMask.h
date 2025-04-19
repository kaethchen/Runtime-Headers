@class CIImage, NSNumber;

@interface CIFillHolesInRedMask : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputMaximumHoleSize;
@property (retain, nonatomic) NSNumber *inputRefinementPassCount;

+ (id)customAttributes;

- (id)outputImage;

@end

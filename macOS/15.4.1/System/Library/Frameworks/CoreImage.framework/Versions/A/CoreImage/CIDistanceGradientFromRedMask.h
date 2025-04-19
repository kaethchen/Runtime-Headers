@class CIImage, NSNumber;

@interface CIDistanceGradientFromRedMask : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputMaximumDistance;

+ (id)customAttributes;

- (id)outputImage;

@end

@class CIImage, NSNumber;

@interface CIToneMapHeadroom : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputSourceHeadroom;
@property (retain, nonatomic) NSNumber *inputTargetHeadroom;

+ (id)customAttributes;

- (id)outputImage;
- (id)outputValue:(id)a0;
- (float)srcHeadroom;
- (float)targetHeadroom;

@end

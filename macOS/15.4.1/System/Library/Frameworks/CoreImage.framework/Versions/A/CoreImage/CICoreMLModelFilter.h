@class NSString, MLModel, CIImage, NSNumber;

@interface CICoreMLModelFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) MLModel *inputModel;
@property (retain, nonatomic) NSNumber *inputHeadIndex;
@property (retain, nonatomic) NSNumber *inputSoftmaxNormalization;
@property (retain, nonatomic) NSString *_logName;

+ (id)customAttributes;

- (id)outputImage;

@end

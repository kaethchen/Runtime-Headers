@class CIImage, NSNumber, NSObject;

@interface PIGreenFilter : CIFilter <PICIInpaintFilterPrivate>

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputMaskImage;
@property (retain, nonatomic) NSNumber *inputShowSurround;
@property (retain, nonatomic) CIImage *inputExcludeMask;
@property (retain, nonatomic) NSObject *inputModel;
@property (retain, nonatomic) NSObject *inputRefinementModel;

- (void).cxx_destruct;
- (id)outputImage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })outputMaskSurroundExtent;

@end

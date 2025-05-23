@class CIImage, CIVector, NSNumber;

@interface RAWLensCorrectionDNG : RAWFilter {
    CIImage *inputImage;
    CIVector *inputKr;
    CIVector *inputKt;
    CIVector *inputCenter;
    id inputColorSpace;
    NSNumber *inputDraftMode;
}

+ (id)customAttributes;

- (void).cxx_destruct;
- (id)outputImage;
- (id)customAttributes;
- (struct CGPoint { double x0; double x1; })mapPoint:(struct CGPoint { double x0; double x1; })a0 info:(id)a1;

@end

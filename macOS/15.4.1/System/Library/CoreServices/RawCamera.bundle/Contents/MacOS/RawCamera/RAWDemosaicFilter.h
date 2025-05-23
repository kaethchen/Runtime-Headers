@class CIImage, CIVector, NSNumber;

@interface RAWDemosaicFilter : RAWFilter {
    CIImage *inputImage;
    CIVector *inputBlacks;
    NSNumber *inputRange;
    CIVector *inputFactors;
    NSNumber *inputPattern;
    NSNumber *inputDespeckle;
    CIVector *inputCropRect;
    NSNumber *inputRepresentativeNoise;
    NSNumber *inputDraftMode;
    NSNumber *inputScaleFactor;
    CIVector *inputNoiseModel;
    NSNumber *inputBaselineExposure;
    NSNumber *inputVersion;
}

- (void).cxx_destruct;
- (id)range;
- (id)outputImage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })regionOf:(int)a0 destRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 userInfo:(id)a2;
- (id)crop;
- (id)blacks;
- (id)exposureFactor;
- (int)forceVersion;
- (id)noiseModel;
- (id)phaseFor:(int)a0;
- (id)phaseForBayer;
- (id)phaseForQuadra;
- (id)phaseForXtrans;
- (int)sensorType;
- (int)versionfor:(int)a0;

@end

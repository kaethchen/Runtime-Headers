@class NUFaceDetectionRequest;

@interface PIApertureRedEyeAutoCalculator : NUAutoCalculator {
    NUFaceDetectionRequest *_faceRequest;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)submit:(id /* block */)a0;
- (id)apertureRedEyeResultFromFaceObservations:(id)a0 imageSize:(struct { long long x0; long long x1; })a1;

@end

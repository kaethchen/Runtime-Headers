@class CIImage, VNImageBuffer, VNParabolaDetection, CIFilter, VNDetectContoursRequest, CIContext;

@interface VNTrajectoryProcessor : NSObject {
    CIContext *_ciContext;
    CIFilter *_absoluteDiffFilter;
    CIFilter *_thresholdFilter;
    CIFilter *_dilateFilter;
    CIFilter *_contrastFilter;
    VNDetectContoursRequest *_detectContoursRequest;
    VNImageBuffer *_previousFrameBuffer;
    CIImage *_previousFrameImage;
    unsigned long long _maximumImageDimension;
    float _preScaleFactor;
    float _dilateRadius;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _frameAnalysisSpacing;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastAnalyzedFramePTS;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _nextFrameToBeAnalyzedPTS;
    BOOL _processAllFrames;
    struct CGColorSpace { } *_sRGB;
    VNParabolaDetection *_parabolaDetector;
    unsigned long long _currentImageWidth;
    unsigned long long _currentImageHeight;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)_VNPointsFromCGPoints:(const void *)a0;
- (struct __CVBuffer { } *)_createCroppedAndScaledBufferFromVNImageBuffer:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withOptions:(id)a2 error:(id *)a3;
- (id)initWithFrameAnalysisSpacing:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 trajectoryLength:(long long)a1;
- (id)processVNImageBuffer:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withOptions:(id)a2 warningRecorder:(id)a3 requestUUID:(id)a4 error:(id *)a5;

@end

@class VCPCNNVisionCoreDetector, ANSTISPAlgorithm;

@interface VCPANSTHandsDetector : NSObject {
    ANSTISPAlgorithm *_anstAlgorithm;
    VCPCNNVisionCoreDetector *_visionCoreDetector;
    struct Rotator { struct __CVPixelBufferPool *x0; int x1; int x2; int x3; struct OpaqueVTPixelRotationSession *x4; } *_rotator;
    float _extendRatio;
    BOOL _useVisionCore;
}

+ (id)anstHandsDetectorWithExtendRatio:(float)a0 options:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (int)handsDetection:(struct __CVBuffer { } *)a0 rotationInDegrees:(id)a1 handsRegions:(id)a2 cancel:(id /* block */)a3;
- (id)initWithExtendRatio:(float)a0 options:(id)a1;

@end

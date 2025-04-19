@class VCPCNNVisionCoreDetector, ANSTISPAlgorithm;

@interface VCPANSTHandsBodyDetector : NSObject {
    ANSTISPAlgorithm *_anstAlgorithm;
    VCPCNNVisionCoreDetector *_visionCoreDetector;
    struct Rotator { struct __CVPixelBufferPool *x0; int x1; int x2; int x3; struct OpaqueVTPixelRotationSession *x4; } *_rotator;
    float _extendRatio;
    float _inputRatio;
    int _maxNumPersonRegions;
    BOOL _useVisionCore;
}

- (void)dealloc;
- (void).cxx_destruct;
- (int)anstDetection:(struct __CVBuffer { } *)a0 rotationInDegrees:(id)a1 detectingFullbody:(BOOL)a2 detectingHands:(BOOL)a3 handsRegions:(id)a4 personRegions:(id)a5 cancel:(id /* block */)a6;
- (int)getTopKLargestPersonBoxes:(int)a0 personRegions:(id)a1;
- (id)initWithHandExtendRatio:(float)a0 inputRatio:(float)a1 maxNumPersonRegions:(int)a2;
- (int)updateHandBoxes:(id)a0 withPersonRegions:(id)a1;
- (int)updateMaxNumPersonRegions:(int)a0;

@end

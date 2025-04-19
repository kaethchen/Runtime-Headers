@class VCPFace;

@interface VCPVideoLightFaceDetector : VCPVideoFaceDetector {
    int _lastestFaceID;
    int _numFacesLastFrame;
    BOOL _faceDominated;
    VCPFace *_lastDominantFace;
}

- (void).cxx_destruct;
- (int)analyzeFrame:(struct __CVBuffer { } *)a0 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 frameStats:(id)a3 flags:(unsigned long long *)a4;
- (int)detectFaces:(struct __CVBuffer { } *)a0 faces:(id)a1 frameStats:(id)a2;
- (int)finishAnalysisPass:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)initWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 faceDominated:(BOOL)a1;
- (float)minProcessTimeIntervalInSecs;

@end

@class NSDictionary, NSMutableDictionary;

@interface VCPVideoFaceDetector : VCPVideoAnalyzer {
    int _angle;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _timeLastDetection;
    NSMutableDictionary *_activeFaces;
    NSDictionary *_results;
}

+ (id)faceDetectorWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 withExistingFaceprints:(id)a1 tracking:(BOOL)a2 faceDominated:(BOOL)a3 cancel:(id /* block */)a4;

- (void).cxx_destruct;
- (id)results;
- (int)analyzeFrame:(struct __CVBuffer { } *)a0 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 frameStats:(id)a3 flags:(unsigned long long *)a4;
- (id)faceRanges;

@end

@class VCPImagePetsKeypointsAnalyzer, VCPVideoObjectTracker, NSMutableArray, NSNumber;

@interface VCPVideoPetsActionAnalyzer : VCPVideoAnalyzer {
    VCPImagePetsKeypointsAnalyzer *_poseAnalyzer;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _timeLastProcess;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _timeLastProcessFullFrame;
    NSMutableArray *_bodyArray;
    float _maxScore;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _endTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _startTime;
    NSMutableArray *_actionResults;
    NSMutableArray *_keyPetResults;
    NSMutableArray *_poseResults;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _crop;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _petRect;
    float _actionScoreAbsolute;
    float _actionScoreRelative;
    float _scoreAbsoluteMax;
    float _scoreRelativeMax;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastPetTimestamp;
    VCPVideoObjectTracker *_tracker;
    BOOL _tracking;
    NSNumber *_timeOfInterest;
    BOOL _sampleFlag;
    struct Scaler { struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } pool_; int width_; int height_; unsigned int format_; struct CF<OpaqueVTPixelTransferSession *> { struct OpaqueVTPixelTransferSession *value_; } transfer_session_; } _scaler;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)results;
- (int)analyzeFrame:(struct __CVBuffer { } *)a0 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 frameStats:(id)a3 flags:(unsigned long long *)a4;
- (void)computeActionScore;
- (void)computeVar:(int)a0 index2:(int)a1 interVar:(float *)a2 intraVar:(float *)a3;
- (int)finishAnalysisPass:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)initWithTimeOfInterest:(id)a0;
- (float)intersectionOverUnion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (float)normDistance:(id)a0 point2:(id)a1;
- (int)processPets:(id)a0 petsBounds:(id)a1 dominantPetIdx:(int)a2 frame:(struct __CVBuffer { } *)a3 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a4 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a5 frameStats:(id)a6;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scaleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scaleX:(float)a1 scaleY:(float)a2;

@end

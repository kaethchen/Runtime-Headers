@class PKStrokeRenderMask, NSUUID, CHRecognizer, PKAveragePointGenerator, PKShape;
@protocol PKShapeDrawingControllerDelegate;

@interface PKShapeDrawingController : NSObject {
    struct vector<ClipperLib::IntPoint, std::allocator<ClipperLib::IntPoint>> { struct IntPoint *__begin_; struct IntPoint *__end_; struct __compressed_pair<ClipperLib::IntPoint *, std::allocator<ClipperLib::IntPoint>> { struct IntPoint *__value_; } __end_cap_; } _currentStrokePoints;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _currentStrokeBounds;
    BOOL _closedShapeDetected;
    BOOL _stopGestureDetected;
    BOOL _hasDetected;
    BOOL _shouldDetect;
    struct vector<TimestampedPoint, std::allocator<TimestampedPoint>> { struct TimestampedPoint *__begin_; struct TimestampedPoint *__end_; struct __compressed_pair<TimestampedPoint *, std::allocator<TimestampedPoint>> { struct TimestampedPoint *__value_; } __end_cap_; } _timestampedPoints;
    struct vector<TimestampedAngles, std::allocator<TimestampedAngles>> { struct TimestampedAngles *__begin_; struct TimestampedAngles *__end_; struct __compressed_pair<TimestampedAngles *, std::allocator<TimestampedAngles>> { struct TimestampedAngles *__value_; } __end_cap_; } _timestampedAngles;
    PKAveragePointGenerator *_averageInputPointGenerator;
    unsigned long long _numInputPoints;
    double _strokeStartTime;
    double _latestAddedPointTime;
    double _strokeDuration;
    double _minimumRecognitionDelay;
    double _maximumRecognitionDelay;
    double _maximumFastRecognitionDelay;
    double _previousRecognitionTimestamp;
}

@property (retain, nonatomic) PKStrokeRenderMask *smartFillRenderMask;
@property (retain, nonatomic) NSUUID *smartFillGroupID;
@property (retain, nonatomic) CHRecognizer *shapeRecognizer;
@property (weak, nonatomic) id<PKShapeDrawingControllerDelegate> delegate;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (nonatomic, getter=isSmartFillEnabled) BOOL smartFillEnabled;
@property (nonatomic, getter=isShapeRecognitionOn) BOOL shapeRecognitionOn;
@property (readonly, nonatomic, getter=isSmartFillActive) BOOL smartFillActive;
@property (readonly, nonatomic, getter=isRecordingStroke) BOOL recordingStroke;
@property (nonatomic, getter=isFastDetectionEnabled) BOOL fastDetectionEnabled;
@property (readonly, nonatomic) struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; double x12; long long x13; long long x14; } averageInputPoint;
@property (retain, nonatomic) PKShape *detectedShape;

+ (void)_addBottomCenterCloudPath:(struct CGPath { } *)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
+ (void)_addLeftCloudPath:(struct CGPath { } *)a0;
+ (void)_addRightCloudPath:(struct CGPath { } *)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
+ (void)_addTopCenterCloudPath:(struct CGPath { } *)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 leftEdge:(BOOL)a2 rightEdge:(BOOL)a3;
+ (struct CGPath { } *)_createNormalizedCloudPathWithNumCenterPieces:(long long)a0;
+ (struct CGPath { } *)_createNormalizedPathFromPath:(struct CGPath { } *)a0;
+ (struct CGPath { } *)_createNormalizedPathFromSVGPath:(id)a0;
+ (struct CGPath { } *)_normalizedCloudPath;
+ (struct CGPath { } *)_normalizedHeartPath;
+ (long long)_numCenterCloudPiecesFromInOutSize:(struct CGSize { double x0; double x1; } *)a0;
+ (BOOL)hasSnapToShapeEntitlement;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id).cxx_construct;
- (id)shapeFromStroke:(id)a0 inputScale:(double)a1 averageInputPoint:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; double x12; long long x13; long long x14; })a2 allowedShapeTypes:(id)a3;
- (void)_addAngles:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; double x12; long long x13; long long x14; })a0;
- (void)_addCurrentStrokePoint:(struct CGPoint { double x0; double x1; })a0;
- (double)_angleMovementSpeed;
- (double)_arrowRadiusForStroke:(id)a0 inputScale:(double)a1;
- (id)_arrowStrokesWithInputScale:(double)a0 firstPt:(struct CGPoint { double x0; double x1; })a1 secondPt:(struct CGPoint { double x0; double x1; })a2 radius:(double)a3 averageInputPoint:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; double x12; long long x13; long long x14; })a4 sourceStroke:(id)a5;
- (id)_chDrawingFromStroke:(id)a0;
- (void)_checkDetectedStroke;
- (id)_generateChatBubble:(id)a0 sourceStroke:(id)a1 inputScale:(double)a2 averageInputPoint:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; double x12; long long x13; long long x14; })a3;
- (id)_generateCloud:(id)a0 sourceStroke:(id)a1 inputScale:(double)a2 averageInputPoint:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; double x12; long long x13; long long x14; })a3;
- (id)_generateHeart:(id)a0 sourceStroke:(id)a1 inputScale:(double)a2 averageInputPoint:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; double x12; long long x13; long long x14; })a3;
- (id)_generateLine:(id)a0 sourceStroke:(id)a1 inputScale:(double)a2 averageInputPoint:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; double x12; long long x13; long long x14; })a3 shapeTypeOut:(long long *)a4;
- (id)_generateManhattanLine:(id)a0 sourceStroke:(id)a1 inputScale:(double)a2 averageInputPoint:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; double x12; long long x13; long long x14; })a3;
- (id)_generateOutlineArrow:(id)a0 sourceStroke:(id)a1 inputScale:(double)a2 averageInputPoint:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; double x12; long long x13; long long x14; })a3;
- (id)_generateOval:(id)a0 sourceStroke:(id)a1 inputScale:(double)a2 averageInputPoint:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; double x12; long long x13; long long x14; })a3;
- (id)_generatePentagon:(id)a0 sourceStroke:(id)a1 inputScale:(double)a2 averageInputPoint:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; double x12; long long x13; long long x14; })a3;
- (id)_generateRectangle:(id)a0 sourceStroke:(id)a1 inputScale:(double)a2 averageInputPoint:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; double x12; long long x13; long long x14; })a3;
- (id)_generateStar:(id)a0 sourceStroke:(id)a1 inputScale:(double)a2 averageInputPoint:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; double x12; long long x13; long long x14; })a3;
- (id)_generateTriangle:(id)a0 sourceStroke:(id)a1 inputScale:(double)a2 averageInputPoint:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; double x12; long long x13; long long x14; })a3;
- (double)_movementSpeed;
- (long long)_shapeTypeFromResultName:(id)a0;
- (void)_smartFillRenderMaskFromStroke:(id)a0 outPoints:(void *)a1 strokeTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 completionBlock:(id /* block */)a3;
- (id)_strokeFromPoints:(const void *)a0 inputScale:(double)a1 averageInputPoint:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; double x12; long long x13; long long x14; })a2 sourceStroke:(id)a3;
- (double)_strokeLength;
- (void)_updateAverageInputPoint:(const struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; double x12; long long x13; long long x14; } *)a0;
- (void)addSmartFillRenderMaskForStroke:(id)a0;
- (void)addStrokePoint:(struct CGPoint { double x0; double x1; })a0 inputPoint:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; double x12; long long x13; long long x14; })a1;
- (struct CGSize { double x0; double x1; })aspectRatioAdjustedSizeFromResult:(id)a0;
- (struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; double x12; long long x13; long long x14; })averageInputPointFromStroke:(id)a0;
- (void)beginStrokeAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)cancelDetectionIfNecessary;
- (id)detectedShapeWithInputScale:(double)a0 averageInputPoint:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; double x12; long long x13; long long x14; })a1 allowedShapeTypes:(id)a2 createCurrentStrokeBlock:(id /* block */)a3;
- (void)endSmartFill;
- (BOOL)hasMovementStopped;
- (BOOL)isScratchOutActive;
- (id)recognitionResultsForDrawing:(id)a0;
- (void)resetStroke;
- (id)shapeRecognizerQueue;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })smartFillStrokeBounds;
- (void)updateDetectedStrokeState;

@end

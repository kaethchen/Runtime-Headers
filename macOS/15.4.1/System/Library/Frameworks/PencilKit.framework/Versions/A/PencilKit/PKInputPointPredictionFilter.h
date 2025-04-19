@class PKInputPointPredictor;

@interface PKInputPointPredictionFilter : PKInputPointBaseFilter {
    PKInputPointPredictor *_predictor;
    struct { union { struct CGPoint { double x; double y; } point; struct CGPoint { double x; double y; } location; } ; double force; double azimuth; double altitude; double velocity; double directionAngle; double zPosition; double timestamp; BOOL predicted; long long estimationUpdateIndex; double length; BOOL hasEstimatedAltitudeAndAzimuth; double rollAngle; long long estimatedActiveInputProperties; long long estimatedActiveInputPropertiesExpectingUpdates; } _fullPredictionTimeIntervalPoint;
    struct { union { struct CGPoint { double x; double y; } point; struct CGPoint { double x; double y; } location; } ; double force; double azimuth; double altitude; double velocity; double directionAngle; double zPosition; double timestamp; BOOL predicted; long long estimationUpdateIndex; double length; BOOL hasEstimatedAltitudeAndAzimuth; double rollAngle; long long estimatedActiveInputProperties; long long estimatedActiveInputPropertiesExpectingUpdates; } _halfPredictionTimeIntervalPoint;
}

@property (nonatomic) BOOL useHalfPredictionTimeInterval;
@property (nonatomic) double predictionTimeInterval;

- (void).cxx_destruct;
- (void)resetFilter;
- (void)addInputPoint:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; double x12; long long x13; long long x14; })a0;

@end

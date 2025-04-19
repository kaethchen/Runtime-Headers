@interface VKRunningCurve : NSObject {
    struct { struct optional<gm::Matrix<double, 3, 1>> { union { char __null_state_; struct Matrix<double, 3, 1> { double _e[3]; } __val_; } ; BOOL __engaged_; } position; struct PolylineCoordinate { unsigned int index; float offset; } coordinate; double distance; struct Matrix<double, 3, 1> { double _e[3]; } tangent; BOOL tangentValid; } _p0;
    double _t0;
    struct { struct optional<gm::Matrix<double, 3, 1>> { union { char __null_state_; struct Matrix<double, 3, 1> { double _e[3]; } __val_; } ; BOOL __engaged_; } position; struct PolylineCoordinate { unsigned int index; float offset; } coordinate; double distance; struct Matrix<double, 3, 1> { double _e[3]; } tangent; BOOL tangentValid; } _p1;
    double _t1;
    struct { struct optional<gm::Matrix<double, 3, 1>> { union { char __null_state_; struct Matrix<double, 3, 1> { double _e[3]; } __val_; } ; BOOL __engaged_; } position; struct PolylineCoordinate { unsigned int index; float offset; } coordinate; double distance; struct Matrix<double, 3, 1> { double _e[3]; } tangent; BOOL tangentValid; } _pu;
    double _tu;
    struct { double mb[4][3]; } _mb;
    BOOL _mbValid;
}

@property (nonatomic) BOOL courseValid;

- (id)init;
- (id).cxx_construct;
- (void)reset;
- (BOOL)hasStateAtTime:(double)a0;
- (void)appendPosition:(struct Matrix<double, 3, 1> { double x0[3]; })a0 coordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a1 atTime:(double)a2;
- (struct { struct optional<gm::Matrix<double, 3, 1>> { union { char x0; struct Matrix<double, 3, 1> { double x0[3]; } x1; } x0; BOOL x1; } x0; struct PolylineCoordinate { unsigned int x0; float x1; } x1; double x2; struct Matrix<double, 3, 1> { double x0[3]; } x3; BOOL x4; })stateAtTime:(double)a0;

@end

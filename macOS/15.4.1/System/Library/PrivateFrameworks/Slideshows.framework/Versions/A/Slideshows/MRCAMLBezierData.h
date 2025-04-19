@interface MRCAMLBezierData : NSObject {
    double ax;
    double bx;
    double cx;
    double ay;
    double by;
    double cy;
}

- (double)evaluatAtTime:(double)a0;
- (double)evaluate_inverseAtTime:(double)a0;
- (id)initWithControlPoints:(const double *)a0;
- (id)initWithTimingFunction:(id)a0;
- (double)sample_x:(double)a0;
- (double)sample_x_derivative:(double)a0;
- (double)sample_y:(double)a0;
- (double)sample_y_derivative:(double)a0;
- (double)solve_x:(double)a0 epsilon:(double)a1;
- (double)solve_y:(double)a0 epsilon:(double)a1;

@end

@interface AVBTimeErrorBiquad : NSObject {
    double _a1;
    double _a2;
    double _b0;
    double _b1;
    double _b2;
    double _x[3];
    double _y[3];
}

- (id)initWithSegment:(struct { double x0; double x1; double x2; double x3; double x4; } *)a0;
- (double)processValue:(double)a0;
- (void)resetBiquad;

@end

@interface PXValueSpringAnimation : PXValueAnimation {
    double _A;
    double _B;
    double _omega0;
}

+ (double)durationOfSpringAnimationWithMass:(double)a0 stiffness:(double)a1 damping:(double)a2 velocity:(double)a3 epsilon:(double)a4;

- (double)currentValue;
- (double)approximateVelocity;
- (id)initWithDuration:(double)a0 currentMediaTime:(double)a1 spec:(struct PXValueAnimationSpec { long long x0; double x1; long long x2; double x3; double x4; double x5; double x6; })a2;
- (id)initWithFromValue:(double)a0 currentMediaTime:(double)a1 spec:(struct PXValueAnimationSpec { long long x0; double x1; long long x2; double x3; double x4; double x5; double x6; })a2;

@end

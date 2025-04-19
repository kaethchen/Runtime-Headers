@interface _NSScrollingMomentumCatesCalculator : _NSScrollingMomentumCalculator {
    double _durationUntilStop;
    double _durationUntilStopIgnoringRubberbanding;
    struct CGSize { double width; double height; } _absDisplacementVectorIgnoringRubberbanding;
    double _linearDisplacementIgnoringRubberbanding;
    struct CGPoint { double x; double y; } _destinationIgnoringRubberbanding;
    double _durationUntilRubberband;
    struct CGPoint { double x; double y; } _initialRubberbandingOrigin;
    struct CGPoint { double x; double y; } _initialRubberbandingVelocity;
    long long _rubberBandingAxis;
}

- (void)calculateDestination;
- (void)calculateToReachDestination;
- (double)durationUntilStop;
- (struct CGPoint { double x0; double x1; })positionAfterDuration:(double)a0;
- (double)velocityAfterDuration:(double)a0;

@end

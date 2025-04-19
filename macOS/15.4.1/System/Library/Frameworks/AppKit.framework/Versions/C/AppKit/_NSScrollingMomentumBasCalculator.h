@interface _NSScrollingMomentumBasCalculator : _NSScrollingMomentumCalculator {
    double _decelerationFactorX;
    double _decelerationFactorY;
    double _decelerationLnFactorX;
    double _decelerationLnFactorY;
    double _durationUntilStop;
    double _minXOffset;
    double _maxXOffset;
    double _minYOffset;
    double _maxYOffset;
    long long _lastRequestedDuration;
    struct CGPoint { double x; double y; } _offsetAtLastRequestedDuration;
    double _velocityAtLastRequestedDuration;
}

- (id)init;
- (void)calculateDestination;
- (void)calculateToReachDestination;
- (double)decelerationRate;
- (double)durationUntilStop;
- (double)horizontalScrollDecelerationFactor;
- (struct CGPoint { double x0; double x1; })positionAfterDuration:(double)a0;
- (void)setHorizontalScrollDecelerationFactor:(double)a0;
- (void)setVerticalScrollDecelerationFactor:(double)a0;
- (double)velocityAfterDuration:(double)a0;
- (double)verticalScrollDecelerationFactor;

@end

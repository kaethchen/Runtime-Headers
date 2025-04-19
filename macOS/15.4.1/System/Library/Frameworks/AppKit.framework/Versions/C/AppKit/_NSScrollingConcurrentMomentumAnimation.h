@class _NSScrollingMomentumCalculator, _NSScrollingConcurrentConstantData;

@interface _NSScrollingConcurrentMomentumAnimation : _NSScrollingConcurrentVBLPreprocessFilter {
    double _initialTimestamp;
    struct CGPoint { double x; double y; } _lastSetOrigin;
    _NSScrollingConcurrentConstantData *_constantData;
}

@property (retain) _NSScrollingMomentumCalculator *momentumCalculator;

- (void)dealloc;
- (id)initWithMomentumCalculator:(id)a0 constantData:(id)a1;
- (void)scrollingVBLMonitor:(id)a0 synchronizeForTimestamp:(double)a1;

@end

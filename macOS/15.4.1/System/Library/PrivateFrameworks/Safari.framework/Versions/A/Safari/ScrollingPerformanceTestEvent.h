@interface ScrollingPerformanceTestEvent : NSEvent {
    struct CGPoint { double x; double y; } _safari_locationInWindow;
    struct CGPoint { double x; double y; } _safari_location;
    double _safari_deltaY;
    unsigned long long _safari_phase;
    unsigned long long _safari_momentumPhase;
    double _safari_timestamp;
}

- (double)timestamp;
- (unsigned long long)type;
- (struct CGPoint { double x0; double x1; })location;
- (struct __CGEvent { } *)CGEvent;
- (double)scrollingDeltaX;
- (double)scrollingDeltaY;
- (unsigned int)_scrollCount;
- (double)_unacceleratedScrollingDeltaX;
- (double)_unacceleratedScrollingDeltaY;
- (double)deltaX;
- (double)deltaY;
- (double)deltaZ;
- (BOOL)hasPreciseScrollingDeltas;
- (BOOL)isDirectionInvertedFromDevice;
- (struct CGPoint { double x0; double x1; })locationInWindow;
- (unsigned long long)momentumPhase;
- (unsigned long long)phase;
- (id)initWithWindow:(id)a0 deltaY:(double)a1 phase:(unsigned long long)a2 momentumPhase:(unsigned long long)a3;

@end

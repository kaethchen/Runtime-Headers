@class NSSlider, NSTimer;

@interface NSTouchBarSliderPopoverTransposer : NSTouchBarPressAndHoldTransposer {
    double _lastXLocation;
    double _initialDoubleValue;
    NSTimer *_continuationTimer;
    BOOL _touchMoved;
}

@property (retain) NSSlider *slider;
@property long long continuationBehavior;
@property double continuationTimeout;

- (void)dealloc;
- (void)transposeTouch:(id)a0;
- (void)_continuationTimeoutFired:(id)a0;
- (void)beginTransposingWithTouch:(id)a0;
- (id)initWithDestinationSlider:(id)a0;
- (id)initWithSourceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 destinationContentView:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (double)minimumRequiredDistance;
- (void)touchCancelled:(id)a0 withEvent:(id)a1;
- (BOOL)touchEnded:(id)a0 withEvent:(id)a1;

@end

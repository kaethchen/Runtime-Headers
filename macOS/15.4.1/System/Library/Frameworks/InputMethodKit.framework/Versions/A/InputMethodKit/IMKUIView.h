@class NSTimer, NSTrackingArea, IMKUIProperties;

@interface IMKUIView : NSView {
    double _intervalSinceLastTouchBegan;
}

@property (nonatomic) BOOL inScrubbingMode;
@property (retain, nonatomic) NSTimer *pressingTimer;
@property (retain, nonatomic) NSTrackingArea *trackingArea;
@property (readonly, nonatomic) IMKUIProperties *properties;
@property (nonatomic, getter=isTrackingMouseMovement) BOOL trackingMouseMovement;

- (void)dealloc;
- (struct CGPoint { double x0; double x1; })locationInViewWithEvent:(id)a0;
- (void)touchesBeganWithEvent:(id)a0;
- (void)touchesCancelledWithEvent:(id)a0;
- (void)touchesEndedWithEvent:(id)a0;
- (void)touchesMovedWithEvent:(id)a0;
- (void)timerFired:(id)a0;
- (void)_setPressingTimer:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 properties:(id)a1;
- (void)scrubbed:(id)a0 position:(struct CGPoint { double x0; double x1; })a1;
- (void)shouldUpdateForPressAndHold:(id)a0 position:(struct CGPoint { double x0; double x1; })a1 with:(long long)a2;
- (void)stopAndInvalidatePressingTimer;
- (void)tapped:(id)a0 position:(struct CGPoint { double x0; double x1; })a1;
- (void)touchesEnded:(id)a0 position:(struct CGPoint { double x0; double x1; })a1;

@end
